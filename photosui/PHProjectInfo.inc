{ Parsed from PhotosUI.framework PHProjectInfo.h }

{$ifdef TYPES}
type
  PHProjectInfoPtr = ^PHProjectInfo;
  PHProjectSectionPtr = ^PHProjectSection;
  PHProjectSectionContentPtr = ^PHProjectSectionContent;
  PHProjectElementPtr = ^PHProjectElement;
  PHProjectRegionOfInterestPtr = ^PHProjectRegionOfInterest;
  PHProjectAssetElementPtr = ^PHProjectAssetElement;
  PHProjectTextElementPtr = ^PHProjectTextElement;
  PHProjectJournalEntryElementPtr = ^PHProjectJournalEntryElement;
  PHProjectMapElementPtr = ^PHProjectMapElement;
{$endif}

{$ifdef TYPES}
type
  PHProjectCreationSource = NSInteger;
  PHProjectCreationSourcePtr = ^PHProjectCreationSource;

const
  PHProjectCreationSourceUndefined = 0;
  PHProjectCreationSourceUserSelection = 1;
  PHProjectCreationSourceAlbum = 2;
  PHProjectCreationSourceMemory = 3;
  PHProjectCreationSourceMoment = 4;
  PHProjectCreationSourceProject = 20;
  PHProjectCreationSourceProjectBook = 21;
  PHProjectCreationSourceProjectCalendar = 22;
  PHProjectCreationSourceProjectCard = 23;
  PHProjectCreationSourceProjectPrintOrder = 24;
  PHProjectCreationSourceProjectSlideshow = 25;
  PHProjectCreationSourceProjectExtension = 26;
{$endif}

{$ifdef CLASSES}

type
  PHProjectInfo = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function creationSource: PHProjectCreationSource; message 'creationSource';
    function projectType: PHProjectType; message 'projectType';
    function sections: NSArray; message 'sections';
    function brandingEnabled: objcbool; message 'brandingEnabled'; { available in macos  }
    function pageNumbersEnabled: objcbool; message 'pageNumbersEnabled'; { available in macos  }
    function productIdentifier: NSString; message 'productIdentifier'; { available in macos  }
    function themeIdentifier: NSString; message 'themeIdentifier'; { available in macos  }
    function init: id; message 'init';
    class function new_: id; message 'new';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef TYPES}
type
  PHProjectSectionType = NSInteger;
  PHProjectSectionTypePtr = ^PHProjectSectionType;

const
  PHProjectSectionTypeUndefined = 0;
  PHProjectSectionTypeCover = 1;
  PHProjectSectionTypeContent = 2;
  PHProjectSectionTypeAuxiliary = 3;
{$endif}

{$ifdef CLASSES}

type
  PHProjectSection = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function sectionContents: NSArray; message 'sectionContents';
    function sectionType: PHProjectSectionType; message 'sectionType';
    function title: NSString; message 'title';
    function init: id; message 'init';
    class function new_: id; message 'new';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  PHProjectSectionContent = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function elements: NSArray; message 'elements';
    function numberOfColumns: NSInteger; message 'numberOfColumns';
    function aspectRatio: double; message 'aspectRatio';
    function cloudAssetIdentifiers: NSArray; message 'cloudAssetIdentifiers';
    function backgroundColor: NSColorPtr; message 'backgroundColor'; { available in macos  }
    function init: id; message 'init';
    class function new_: id; message 'new';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  PHProjectElement = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function weight: double; message 'weight';
    function placement: CGRect; message 'placement';
    function init: id; message 'init';
    class function new_: id; message 'new';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef TYPES}
type
  PHProjectRegionOfInterestIdentifier = NSString;
  PHProjectRegionOfInterestIdentifierPtr = ^PHProjectRegionOfInterestIdentifier;
{$endif}

{$ifdef CLASSES}

type
  PHProjectRegionOfInterest = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function rect: CGRect; message 'rect';
    function weight: double; message 'weight';
    function quality: double; message 'quality'; { available in macos  }
    function identifier: PHProjectRegionOfInterestIdentifier; message 'identifier';
    function init: id; message 'init';
    class function new_: id; message 'new';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  PHProjectAssetElement = objcclass external (PHProjectElement, NSSecureCodingProtocol)
  public
    function cloudAssetIdentifier: PHCloudIdentifier; message 'cloudAssetIdentifier';
    function annotation: NSString; message 'annotation';
    function cropRect: CGRect; message 'cropRect';
    function regionsOfInterest: NSArray; message 'regionsOfInterest';
    function horizontallyFlipped: objcbool; message 'horizontallyFlipped'; { available in macos  }
    function verticallyFlipped: objcbool; message 'verticallyFlipped'; { available in macos  }
  end;
{$endif}

{$ifdef TYPES}
type
  PHProjectTextElementType = NSInteger;
  PHProjectTextElementTypePtr = ^PHProjectTextElementType;

const
  PHProjectTextElementTypeBody = 0;
  PHProjectTextElementTypeTitle = 1;
  PHProjectTextElementTypeSubtitle = 2;
{$endif}

{$ifdef CLASSES}

type
  PHProjectTextElement = objcclass external (PHProjectElement, NSSecureCodingProtocol)
  public
    function text: NSString; message 'text';
    function attributedText: NSAttributedString; message 'attributedText';
    function textElementType: PHProjectTextElementType; message 'textElementType';
  end;

type
  PHProjectJournalEntryElement = objcclass external (PHProjectElement, NSSecureCodingProtocol)
  public
    function date: NSDate; message 'date';
    function assetElement: PHProjectAssetElement; message 'assetElement';
    function textElement: PHProjectTextElement; message 'textElement';
  end;

type
  PHProjectMapElement = objcclass external (PHProjectElement, NSSecureCodingProtocol)
  public
    function mapType: MKMapType; message 'mapType';
    function centerCoordinate: CLLocationCoordinate2D; message 'centerCoordinate';
    function heading: CLLocationDirection; message 'heading';
    function pitch: CGFloat; message 'pitch';
    function altitude: CLLocationDistance; message 'altitude';
    function annotations: NSArray; message 'annotations';
  end;
{$endif}

