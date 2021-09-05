{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSFilePromiseProvider.h }

{$ifdef CALLBACKS}
type
  NSFilePromiseProviderFilePromiseProviderCallback = reference to procedure (errorOrNil: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSFilePromiseProviderPtr = ^NSFilePromiseProvider;
  NSFilePromiseProviderDelegateProtocolPtr = ^NSFilePromiseProviderDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  NSFilePromiseProvider = objcclass external (NSObject, NSPasteboardWritingProtocol)
  public
    procedure setFileType(newValue: NSString); message 'setFileType:';
    function fileType: NSString; message 'fileType';
    procedure setDelegate(newValue: NSFilePromiseProviderDelegateProtocol); message 'setDelegate:';
    function delegate: NSFilePromiseProviderDelegateProtocol; message 'delegate';
    procedure setUserInfo(newValue: id); message 'setUserInfo:';
    function userInfo: id; message 'userInfo';
    function initWithFileType_delegate (fileType_: NSString; delegate_: NSFilePromiseProviderDelegateProtocol): id; message 'initWithFileType:delegate:';
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function pasteboardPropertyListForType (type_: NSPasteboardType): id; message 'pasteboardPropertyListForType:';
    function writableTypesForPasteboard (pasteboard: NSPasteboard): NSArray; message 'writableTypesForPasteboard:';
    function writingOptionsForType_pasteboard (type_: NSPasteboardType; pasteboard: NSPasteboard): NSPasteboardWritingOptions; message 'writingOptionsForType:pasteboard:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSFilePromiseProviderDelegateProtocol = objcprotocol external name 'NSFilePromiseProviderDelegate' (NSObjectProtocol)
  required
    function filePromiseProvider_fileNameForType (filePromiseProvider: NSFilePromiseProvider; fileType: NSString): NSString; message 'filePromiseProvider:fileNameForType:';
    procedure filePromiseProvider_writePromiseToURL_completionHandler (filePromiseProvider: NSFilePromiseProvider; url: NSURL; completionHandler: NSFilePromiseProviderFilePromiseProviderCallback); message 'filePromiseProvider:writePromiseToURL:completionHandler:';
  optional
    function operationQueueForFilePromiseProvider (filePromiseProvider: NSFilePromiseProvider): NSOperationQueue; message 'operationQueueForFilePromiseProvider:';
  end;
{$endif}

