{ Parsed from PhotosUI.framework PHProjectExtensionController.h }

{$ifdef CALLBACKS}
type
  PHProjectExtensionControllerBeginProjectWithExtensionContextCallback = reference to procedure (param1: NSError); cblock; cdecl;
  PHProjectExtensionControllerResumeProjectWithExtensionContextCallback = reference to procedure (param1: NSError); cblock; cdecl;
  PHProjectExtensionControllerFinishProjectWithCompletionHandlerCallback = reference to procedure; cblock; cdecl;
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
    function typeDescriptionDataSourceForCategory_invalidator (category: PHProjectCategory; invalidator: PHProjectTypeDescriptionInvalidatorProtocol): id; message 'typeDescriptionDataSourceForCategory:invalidator:'; { available in macos  }
  required
    procedure beginProjectWithExtensionContext_projectInfo_completion (extensionContext: PHProjectExtensionContext; projectInfo: PHProjectInfo; completion: PHProjectExtensionControllerBeginProjectWithExtensionContextCallback); message 'beginProjectWithExtensionContext:projectInfo:completion:';
    procedure resumeProjectWithExtensionContext_completion (extensionContext: PHProjectExtensionContext; completion: PHProjectExtensionControllerResumeProjectWithExtensionContextCallback); message 'resumeProjectWithExtensionContext:completion:';
    procedure finishProjectWithCompletionHandler (completion: PHProjectExtensionControllerFinishProjectWithCompletionHandlerCallback); message 'finishProjectWithCompletionHandler:';
  end;
{$endif}

