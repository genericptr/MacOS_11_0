{ Parsed from MapKit.framework MKMarkerAnnotationView.h }

{ Types from MKMarkerAnnotationView }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  MKMarkerAnnotationViewPtr = ^MKMarkerAnnotationView;
{$endif}

{$if defined(MK_SUPPORTS_VIEW_CLASSES)}
{$ifdef CLASSES}

type
  MKMarkerAnnotationView = objcclass external (MKAnnotationView)
  public
    procedure setTitleVisibility(newValue: MKFeatureVisibility); message 'setTitleVisibility:';
    function titleVisibility: MKFeatureVisibility; message 'titleVisibility';
    procedure setSubtitleVisibility(newValue: MKFeatureVisibility); message 'setSubtitleVisibility:';
    function subtitleVisibility: MKFeatureVisibility; message 'subtitleVisibility';
    {$if defined(TARGET_OS_IPHONE)}
    procedure setUI_APPEARANCE_SELECTOR(newValue: UIColor *markerTintColor); message 'setUI_APPEARANCE_SELECTOR:';
    function UI_APPEARANCE_SELECTOR: UIColor *markerTintColor; message 'UI_APPEARANCE_SELECTOR';
    procedure setUI_APPEARANCE_SELECTOR_(newValue: UIColor *glyphTintColor); message 'setUI_APPEARANCE_SELECTOR:';
    function UI_APPEARANCE_SELECTOR_: UIColor *glyphTintColor; message 'UI_APPEARANCE_SELECTOR';
    procedure setUI_APPEARANCE_SELECTOR__(newValue: NSString *glyphText); message 'setUI_APPEARANCE_SELECTOR:';
    function UI_APPEARANCE_SELECTOR__: NSString *glyphText; message 'UI_APPEARANCE_SELECTOR';
    procedure setUI_APPEARANCE_SELECTOR___(newValue: UIImage *glyphImage); message 'setUI_APPEARANCE_SELECTOR:';
    function UI_APPEARANCE_SELECTOR___: UIImage *glyphImage; message 'UI_APPEARANCE_SELECTOR';
    procedure setUI_APPEARANCE_SELECTOR____(newValue: UIImage *selectedGlyphImage); message 'setUI_APPEARANCE_SELECTOR:';
    function UI_APPEARANCE_SELECTOR____: UIImage *selectedGlyphImage; message 'UI_APPEARANCE_SELECTOR';
    {$else}
    procedure setMarkerTintColor(newValue: NSColorPtr); message 'setMarkerTintColor:';
    function markerTintColor: NSColorPtr; message 'markerTintColor';
    procedure setGlyphTintColor(newValue: NSColorPtr); message 'setGlyphTintColor:';
    function glyphTintColor: NSColorPtr; message 'glyphTintColor';
    procedure setGlyphText(newValue: NSString); message 'setGlyphText:';
    function glyphText: NSString; message 'glyphText';
    procedure setGlyphImage(newValue: NSImage); message 'setGlyphImage:';
    function glyphImage: NSImage; message 'glyphImage';
    procedure setSelectedGlyphImage(newValue: NSImage); message 'setSelectedGlyphImage:';
    function selectedGlyphImage: NSImage; message 'selectedGlyphImage';
    {$endif}
    procedure setAnimatesWhenAdded(newValue: objcbool); message 'setAnimatesWhenAdded:';
    function animatesWhenAdded: objcbool; message 'animatesWhenAdded';
  end;
{$endif}

{$endif}
