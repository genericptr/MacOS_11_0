{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}
{$packrecords c}

unit DefinedClassesAutomator;
interface

type
  AMAction = objcclass external;
  AMAppleScriptAction = objcclass external;
  AMBundleAction = objcclass external;
  AMShellScriptAction = objcclass external;
  AMWorkflow = objcclass external;
  AMWorkflowController = objcclass external;
  AMWorkflowView = objcclass external;
  AMWorkspace = objcclass external;
  AMWorkflowControllerDelegateProtocol = objcprotocol external name 'AMWorkflowControllerDelegate';

type
  NSImage = objcclass external;
  NSView = objcclass external;

implementation
end.
