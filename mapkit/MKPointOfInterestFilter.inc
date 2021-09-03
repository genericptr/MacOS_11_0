{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKPointOfInterestFilter.h }

{$ifdef TYPES}
type
  MKPointOfInterestFilterPtr = ^MKPointOfInterestFilter;
{$endif}

{$ifdef CLASSES}

type
  MKPointOfInterestFilter = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    class function filterIncludingAllCategories: MKPointOfInterestFilter; message 'filterIncludingAllCategories';
    class function filterExcludingAllCategories: MKPointOfInterestFilter; message 'filterExcludingAllCategories';
    function initIncludingCategories (categories: NSArray): id; message 'initIncludingCategories:'; { NS_DESIGNATED_INITIALIZER }
    function initExcludingCategories (categories: NSArray): id; message 'initExcludingCategories:'; { NS_DESIGNATED_INITIALIZER }
    function includesCategory (category: MKPointOfInterestCategory): objcbool; message 'includesCategory:';
    function excludesCategory (category: MKPointOfInterestCategory): objcbool; message 'excludesCategory:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

