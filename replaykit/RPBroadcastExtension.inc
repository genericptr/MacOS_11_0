{ Parsed from ReplayKit.framework RPBroadcastExtension.h }

{ Types from RPBroadcastExtension }
{$ifdef TYPES}


{$endif}


{$ifdef CALLBACKS}
type
  RPBroadcastExtensionLoadBroadcastingApplicationInfoWithCompletionCallback = reference to procedure (bundleID: NSString; displayName: NSString; appIcon: NSImage); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  RPBroadcastHandlerPtr = ^RPBroadcastHandler;
  RPBroadcastMP4ClipHandlerPtr = ^RPBroadcastMP4ClipHandler;
  RPBroadcastSampleHandlerPtr = ^RPBroadcastSampleHandler;
{$endif}

{$ifdef CLASSES}

type
  RPBroadcastExtension = objccategory external (NSExtensionContext)
    {$if defined(TARGET_OS_OSX)}
    procedure loadBroadcastingApplicationInfoWithCompletion (handler: RPBroadcastExtensionLoadBroadcastingApplicationInfoWithCompletionCallback); message 'loadBroadcastingApplicationInfoWithCompletion:'; { unavailable in ios, tvos, macCatalyst }
    {$else}
    procedure loadBroadcastingApplicationInfoWithCompletion (handler: RPBroadcastExtensionLoadBroadcastingApplicationInfoWithCompletionCallback); message 'loadBroadcastingApplicationInfoWithCompletion:';
    {$endif}
    {$if  not defined(TARGET_OS_OSX)}
    procedure completeRequestWithBroadcastURL_broadcastConfiguration_setupInfo (broadcastURL: NSURL; broadcastConfiguration: RPBroadcastConfiguration; setupInfo: NSDictionary); message 'completeRequestWithBroadcastURL:broadcastConfiguration:setupInfo:'; { unavailable in macos }
    {$endif}
    procedure completeRequestWithBroadcastURL_setupInfo (broadcastURL: NSURL; setupInfo: NSDictionary); message 'completeRequestWithBroadcastURL:setupInfo:'; { available in ios , tvos , macos  }
  end;


type
  RPBroadcastHandler = objcclass external (NSObject, NSExtensionRequestHandlingProtocol)
  public
    procedure updateServiceInfo (serviceInfo: NSDictionary); message 'updateServiceInfo:';
    procedure updateBroadcastURL (broadcastURL: NSURL); message 'updateBroadcastURL:'; { available in ios , tvos , macos  }

    { Adopted protocols }
    procedure beginRequestWithExtensionContext (context: NSExtensionContext); message 'beginRequestWithExtensionContext:';
  end;
{$endif}

{$if  not defined(TARGET_OS_OSX)}
{$ifdef CLASSES}

type
  RPBroadcastMP4ClipHandler = objcclass external (RPBroadcastHandler)
  public
    procedure processMP4ClipWithURL_setupInfo_finished (mp4ClipURL: NSURL; setupInfo: NSDictionary; finished: objcbool); message 'processMP4ClipWithURL:setupInfo:finished:';
    procedure finishedProcessingMP4ClipWithUpdatedBroadcastConfiguration_error (broadcastConfiguration: RPBroadcastConfiguration; error: NSError); message 'finishedProcessingMP4ClipWithUpdatedBroadcastConfiguration:error:';
  end;
{$endif}

{$endif}
{$ifdef TYPES}
type
  RPSampleBufferType = NSInteger;
  RPSampleBufferTypePtr = ^RPSampleBufferType;

const
  RPSampleBufferTypeVideo = 1;
  RPSampleBufferTypeAudioApp = 2;
  RPSampleBufferTypeAudioMic = 3;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  RPVideoSampleOrientationKey: NSString; cvar; external;
  RPApplicationInfoBundleIdentifierKey: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  RPBroadcastSampleHandler = objcclass external (RPBroadcastHandler)
  public
    procedure broadcastStartedWithSetupInfo (setupInfo: NSDictionary); message 'broadcastStartedWithSetupInfo:';
    procedure broadcastPaused; message 'broadcastPaused';
    procedure broadcastResumed; message 'broadcastResumed';
    procedure broadcastFinished; message 'broadcastFinished';
    procedure broadcastAnnotatedWithApplicationInfo (applicationInfo: NSDictionary); message 'broadcastAnnotatedWithApplicationInfo:'; { unavailable in tvos }
    procedure processSampleBuffer_withType (sampleBuffer: CMSampleBufferRef; sampleBufferType: RPSampleBufferType); message 'processSampleBuffer:withType:';
    procedure finishBroadcastWithError (error: NSError); message 'finishBroadcastWithError:';
  end;
{$endif}

