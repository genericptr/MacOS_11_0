{ Parsed from PhotosUI.framework PHProjectTypeDescription.h }

{$ifdef TYPES}
type
  PHProjectTypeDescriptionPtr = ^PHProjectTypeDescription;
{$endif}

{$ifdef CLASSES}

type
  PHProjectTypeDescription = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function projectType: PHProjectType; message 'projectType';
    function localizedTitle: NSString; message 'localizedTitle';
    function localizedDescription: NSString; message 'localizedDescription';
    function localizedAttributedDescription: NSAttributedString; message 'localizedAttributedDescription'; { available in macos  }
    function image: NSImage; message 'image';
    function subtypeDescriptions: NSArray; message 'subtypeDescriptions';
    function canProvideSubtypes: objcbool; message 'canProvideSubtypes'; { available in macos  }
    function initWithProjectType_title_description_image_subtypeDescriptions (projectType_: PHProjectType; localizedTitle_: NSString; localizedDescription_: NSString; image_: NSImage; subtypeDescriptions_: NSArray): id; message 'initWithProjectType:title:description:image:subtypeDescriptions:'; { NS_DESIGNATED_INITIALIZER }
    function initWithProjectType_title_attributedDescription_image_subtypeDescriptions (projectType_: PHProjectType; localizedTitle_: NSString; localizedAttributedDescription_: NSAttributedString; image_: NSImage; subtypeDescriptions_: NSArray): id; message 'initWithProjectType:title:attributedDescription:image:subtypeDescriptions:'; { available in macos  }
    function initWithProjectType_title_description_image (projectType_: PHProjectType; localizedTitle_: NSString; localizedDescription_: NSString; image_: NSImage): id; message 'initWithProjectType:title:description:image:';
    function initWithProjectType_title_description_image_canProvideSubtypes (projectType_: PHProjectType; localizedTitle_: NSString; localizedDescription_: NSString; image_: NSImage; canProvideSubtypes_: objcbool): id; message 'initWithProjectType:title:description:image:canProvideSubtypes:'; { available in macos  }
    function initWithProjectType_title_attributedDescription_image_canProvideSubtypes (projectType_: PHProjectType; localizedTitle_: NSString; localizedAttributedDescription_: NSAttributedString; image_: NSImage; canProvideSubtypes_: objcbool): id; message 'initWithProjectType:title:attributedDescription:image:canProvideSubtypes:'; { available in macos  }
    function init: id; message 'init';
    class function new_: id; message 'new';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

