{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}
{$packrecords c}

unit DefinedClassesQuickLookUI;
interface

type
  QLPreviewPanel = objcclass external;
  QLPreviewView = objcclass external;
  QLPreviewItemProtocol = objcprotocol external name 'QLPreviewItem';
  QLPreviewPanelDataSourceProtocol = objcprotocol external name 'QLPreviewPanelDataSource';
  QLPreviewPanelDelegateProtocol = objcprotocol external name 'QLPreviewPanelDelegate';
  QLPreviewingControllerProtocol = objcprotocol external name 'QLPreviewingController';

type
  QLPreviewPanelReserved = objcclass external;
  QLPreviewViewReserved = objcclass external;

implementation
end.
