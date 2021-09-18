{ Parsed from CoreData.framework NSMappingModel.h }

{$ifdef TYPES}
type
  NSMappingModelPtr = ^NSMappingModel;
{$endif}

{$ifdef CLASSES}

type
  NSMappingModel = objcclass external (NSObject)
  private
  public
    class function mappingModelFromBundles_forSourceModel_destinationModel (bundles: NSArray; sourceModel: NSManagedObjectModel; destinationModel: NSManagedObjectModel): NSMappingModel; message 'mappingModelFromBundles:forSourceModel:destinationModel:';
    class function inferredMappingModelForSourceModel_destinationModel_error (sourceModel: NSManagedObjectModel; destinationModel: NSManagedObjectModel; error: NSErrorPtr): NSMappingModel; message 'inferredMappingModelForSourceModel:destinationModel:error:'; { available in macosx ,ios  }
    function initWithContentsOfURL (url: NSURL): id; message 'initWithContentsOfURL:';
    procedure setEntityMappings(newValue: NSArray); message 'setEntityMappings:';
    function entityMappings: NSArray; message 'entityMappings';
    function entityMappingsByName: NSDictionary; message 'entityMappingsByName';
  end;
{$endif}

