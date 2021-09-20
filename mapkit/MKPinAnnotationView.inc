{ Parsed from MapKit.framework MKPinAnnotationView.h }

{ Types from MKPinAnnotationView }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  MKPinAnnotationViewPtr = ^MKPinAnnotationView;
{$endif}

{$if defined(MK_SUPPORTS_VIEW_CLASSES)}
{$ifdef TYPES}
type
  MKPinAnnotationColor = NSUInteger;
  MKPinAnnotationColorPtr = ^MKPinAnnotationColor;

const
  MKPinAnnotationColorRed = 0;
  MKPinAnnotationColorGreen = 1;
  MKPinAnnotationColorPurple = 2;
{$endif}

{$ifdef CLASSES}

type
  MKPinAnnotationView = objcclass external (MKAnnotationView)
  public
    {$if defined(TARGET_OS_IPHONE)}
    class function redPinColor: UIColorPtr; message 'redPinColor'; { available in macos 10.11, ios 9.0 }
    class function greenPinColor: UIColorPtr; message 'greenPinColor'; { available in macos 10.11, ios 9.0 }
    class function purplePinColor: UIColorPtr; message 'purplePinColor'; { available in macos 10.11, ios 9.0 }
    {$else}
    class function redPinColor: NSColorPtr; message 'redPinColor'; { available in macos 10.11, ios 9.0 }
    class function greenPinColor: NSColorPtr; message 'greenPinColor'; { available in macos 10.11, ios 9.0 }
    class function purplePinColor: NSColorPtr; message 'purplePinColor'; { available in macos 10.11, ios 9.0 }
    {$endif}
    {$if defined(TARGET_OS_IPHONE)}
    procedure setUI_APPEARANCE_SELECTOR(newValue: UIColor *pinTintColor); message 'setUI_APPEARANCE_SELECTOR:'; { available in macos 10.11, ios 9.0 }
    function UI_APPEARANCE_SELECTOR: UIColor *pinTintColor; message 'UI_APPEARANCE_SELECTOR'; { available in macos 10.11, ios 9.0 }
    {$else}
    procedure setPinTintColor(newValue: NSColorPtr); message 'setPinTintColor:'; { available in macos 10.11, ios 9.0 }
    function pinTintColor: NSColorPtr; message 'pinTintColor'; { available in macos 10.11, ios 9.0 }
    {$endif}
    procedure setAnimatesDrop(newValue: objcbool); message 'setAnimatesDrop:';
    function animatesDrop: objcbool; message 'animatesDrop';
    procedure setPinColor(newValue: MKPinAnnotationColor); message 'setPinColor:'; { unavailable in tvos }
    function pinColor: MKPinAnnotationColor; message 'pinColor'; { unavailable in tvos }
  end;
{$endif}

{$endif}
