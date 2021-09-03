{ Parsed from QuickLookUI.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Headers/QLPreviewingController.h }

{$ifdef CALLBACKS}
type
  QLPreviewingControllerPreparePreviewOfSearchableItemWithIdentifierCallback = reference to function (param1: NSError): pointer; cblock; cdecl;
  QLPreviewingControllerPreparePreviewOfFileAtURLCallback = reference to function (param1: NSError): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  QLPreviewingControllerProtocolPtr = ^QLPreviewingControllerProtocol;
{$endif}

{$ifdef TYPES}
type
  QLPreviewItemLoadingBlock = reference to function (error: NSError): pointer; cblock; cdecl { unavailable in ios, watchos, tvos };
{$endif}

{$ifdef PROTOCOLS}

type
  QLPreviewingControllerProtocol = objcprotocol external name 'QLPreviewingController' (NSObjectProtocol)
  optional
    procedure preparePreviewOfSearchableItemWithIdentifier_queryString_completionHandler (identifier: NSString; queryString: NSString; handler: QLPreviewingControllerPreparePreviewOfSearchableItemWithIdentifierCallback); message 'preparePreviewOfSearchableItemWithIdentifier:queryString:completionHandler:';
    procedure preparePreviewOfFileAtURL_completionHandler (url: NSURL; handler: QLPreviewingControllerPreparePreviewOfFileAtURLCallback); message 'preparePreviewOfFileAtURL:completionHandler:';
  end;
{$endif}
