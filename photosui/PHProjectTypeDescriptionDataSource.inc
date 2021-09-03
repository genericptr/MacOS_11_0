{ Parsed from PhotosUI.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PhotosUI.framework/Headers/PHProjectTypeDescriptionDataSource.h }

{$ifdef TYPES}
type
  PHProjectTypeDescriptionDataSourceProtocolPtr = ^PHProjectTypeDescriptionDataSourceProtocol;
  PHProjectTypeDescriptionInvalidatorProtocolPtr = ^PHProjectTypeDescriptionInvalidatorProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  PHProjectTypeDescriptionDataSourceProtocol = objcprotocol external name 'PHProjectTypeDescriptionDataSource' (NSObjectProtocol)
  required
    function subtypesForProjectType (projectType: PHProjectType): NSArray; message 'subtypesForProjectType:';
    function typeDescriptionForProjectType (projectType: PHProjectType): PHProjectTypeDescription; message 'typeDescriptionForProjectType:';
    function footerTextForSubtypesOfProjectType (projectType: PHProjectType): NSAttributedString; message 'footerTextForSubtypesOfProjectType:';
  optional
    procedure extensionWillDiscardDataSource; message 'extensionWillDiscardDataSource';
  end;

type
  PHProjectTypeDescriptionInvalidatorProtocol = objcprotocol external name 'PHProjectTypeDescriptionInvalidator' (NSObjectProtocol)
  required
    procedure invalidateTypeDescriptionForProjectType (projectType: PHProjectType); message 'invalidateTypeDescriptionForProjectType:';
    procedure invalidateFooterTextForSubtypesOfProjectType (projectType: PHProjectType); message 'invalidateFooterTextForSubtypesOfProjectType:';
  end;
{$endif}

