{ Parsed from MapKit.framework NSUserActivity+MKMapItem.h }
{$ifdef CLASSES}

type
  NSUserActivity_MKMapItem = objccategory external name 'MKMapItem' (NSUserActivity)
    procedure setMapItem(newValue: MKMapItem); message 'setMapItem:'; { available in 10_12, 10_0 }
    function mapItem: MKMapItem; message 'mapItem'; { available in 10_12, 10_0 }
  end;
{$endif}

