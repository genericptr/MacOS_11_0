{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKLocalSearchResponse.h }

{$ifdef TYPES}
type
  MKLocalSearchResponsePtr = ^MKLocalSearchResponse;
{$endif}

{$ifdef CLASSES}

type
  MKLocalSearchResponse = objcclass external (NSObject)
  public
    function mapItems: NSArray; message 'mapItems';
    function boundingRegion: MKCoordinateRegion; message 'boundingRegion';
  end;
{$endif}

