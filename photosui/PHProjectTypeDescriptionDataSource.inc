{ Parsed from PhotosUI.framework PHProjectTypeDescriptionDataSource.h }

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

