{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/NSUserActivity+MKMapItem.h }
{$ifdef CLASSES}

type
  NSUserActivity_MKMapItem = objccategory external name 'MKMapItem' (NSUserActivity)
    procedure setMapItem(newValue: MKMapItem); message 'setMapItem:'; { available in 10_12, 10_0 }
    function mapItem: MKMapItem; message 'mapItem'; { available in 10_12, 10_0 }
  end;
{$endif}

