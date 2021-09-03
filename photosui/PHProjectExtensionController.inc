{ Parsed from PhotosUI.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PhotosUI.framework/Headers/PHProjectExtensionController.h }

{$ifdef CALLBACKS}
type
  PHProjectExtensionControllerBeginProjectWithExtensionContextCallback = reference to function (param1: NSError): pointer; cblock; cdecl;
  PHProjectExtensionControllerResumeProjectWithExtensionContextCallback = reference to function (param1: NSError): pointer; cblock; cdecl;
  PHProjectExtensionControllerFinishProjectWithCompletionHandlerCallback = reference to function : pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  PHProjectExtensionControllerProtocolPtr = ^PHProjectExtensionControllerProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  PHProjectExtensionControllerProtocol = objcprotocol external name 'PHProjectExtensionController' (NSObjectProtocol)
  optional
    function supportedProjectTypes: NSArray; message 'supportedProjectTypes'; deprecated 'replace with -typeDescriptionDataSourceForCategory:invalidator:';
    function typeDescriptionDataSourceForCategory_invalidator (category: PHProjectCategory; invalidator: id): id; message 'typeDescriptionDataSourceForCategory:invalidator:'; { available in macos  }
  required
    procedure beginProjectWithExtensionContext_projectInfo_completion (extensionContext: PHProjectExtensionContext; projectInfo: PHProjectInfo; completion: PHProjectExtensionControllerBeginProjectWithExtensionContextCallback); message 'beginProjectWithExtensionContext:projectInfo:completion:';
    procedure resumeProjectWithExtensionContext_completion (extensionContext: PHProjectExtensionContext; completion: PHProjectExtensionControllerResumeProjectWithExtensionContextCallback); message 'resumeProjectWithExtensionContext:completion:';
    procedure finishProjectWithCompletionHandler (completion: PHProjectExtensionControllerFinishProjectWithCompletionHandlerCallback); message 'finishProjectWithCompletionHandler:';
  end;
{$endif}

