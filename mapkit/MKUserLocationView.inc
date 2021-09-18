{ Parsed from MapKit.framework MKUserLocationView.h }

{$ifdef TYPES}
type
  MKUserLocationViewPtr = ^MKUserLocationView;
{$endif}

{$if defined(MK_SUPPORTS_VIEW_CLASSES)}
{$ifdef CLASSES}

type
  MKUserLocationView = objcclass external (MKAnnotationView)
  end;
{$endif}

{$endif}
