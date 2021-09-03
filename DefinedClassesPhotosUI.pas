{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}
{$packrecords c}

unit DefinedClassesPhotosUI;
interface

type
  PHEditingExtensionContext = objcclass external;
  PHLivePhotoView = objcclass external;
  PHProjectAssetElement = objcclass external;
  PHProjectElement = objcclass external;
  PHProjectExtensionContext = objcclass external;
  PHProjectInfo = objcclass external;
  PHProjectJournalEntryElement = objcclass external;
  PHProjectMapElement = objcclass external;
  PHProjectRegionOfInterest = objcclass external;
  PHProjectSection = objcclass external;
  PHProjectSectionContent = objcclass external;
  PHProjectTextElement = objcclass external;
  PHProjectTypeDescription = objcclass external;
  PHContentEditingControllerProtocol = objcprotocol external name 'PHContentEditingController';
  PHLivePhotoViewDelegateProtocol = objcprotocol external name 'PHLivePhotoViewDelegate';
  PHProjectExtensionControllerProtocol = objcprotocol external name 'PHProjectExtensionController';
  PHProjectTypeDescriptionDataSourceProtocol = objcprotocol external name 'PHProjectTypeDescriptionDataSource';
  PHProjectTypeDescriptionInvalidatorProtocol = objcprotocol external name 'PHProjectTypeDescriptionInvalidator';

type
  NSImage = objcclass external;
  PHAdjustmentData = objcclass external;
  PHAsset = objcclass external;
  PHCloudIdentifier = objcclass external;
  PHContentEditingInput = objcclass external;
  PHContentEditingOutput = objcclass external;
  PHPhotoLibrary = objcclass external;
  PHProject = objcclass external;

implementation
end.
