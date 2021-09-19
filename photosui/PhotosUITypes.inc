{ Parsed from PhotosUI.framework PhotosUITypes.h }
{$ifdef TYPES}
type
  PHProjectType = NSString;
  PHProjectTypePtr = ^PHProjectType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PHProjectTypeUndefined: PHProjectType { available in macos 10.13 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  PHProjectCategory = NSString;
  PHProjectCategoryPtr = ^PHProjectCategory;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PHProjectCategoryBook: PHProjectCategory { available in macos 10.14 }; cvar; external;
  PHProjectCategoryCalendar: PHProjectCategory { available in macos 10.14 }; cvar; external;
  PHProjectCategoryCard: PHProjectCategory { available in macos 10.14 }; cvar; external;
  PHProjectCategoryPrints: PHProjectCategory { available in macos 10.14 }; cvar; external;
  PHProjectCategorySlideshow: PHProjectCategory { available in macos 10.14 }; cvar; external;
  PHProjectCategoryWallDecor: PHProjectCategory { available in macos 10.14 }; cvar; external;
  PHProjectCategoryOther: PHProjectCategory { available in macos 10.14 }; cvar; external;
  PHProjectCategoryUndefined: PHProjectCategory { available in macos 10.14.2 }; cvar; external;
{$endif}

