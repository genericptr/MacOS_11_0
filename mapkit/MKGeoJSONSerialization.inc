{ Parsed from MapKit.framework MKGeoJSONSerialization.h }

{$ifdef TYPES}
type
  MKGeoJSONDecoderPtr = ^MKGeoJSONDecoder;
  MKGeoJSONFeaturePtr = ^MKGeoJSONFeature;
  MKGeoJSONObjectProtocolPtr = ^MKGeoJSONObjectProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MKGeoJSONObjectProtocol = objcprotocol external name 'MKGeoJSONObject' (NSObjectProtocol)
  end;
{$endif}

{$ifdef CLASSES}

type
  MKGeoJSONDecoder = objcclass external (NSObject)
  public
    function geoJSONObjectsWithData_error (data: NSData; errorPtr: NSErrorPtr): NSArray; message 'geoJSONObjectsWithData:error:';
  end;

type
  MKGeoJSONFeature = objcclass external (NSObject, MKGeoJSONObjectProtocol)
  public
    function identifier: NSString; message 'identifier';
    function properties: NSData; message 'properties';
    function geometry: NSArray; message 'geometry';
  end;


type
  MKPointAnnotation_MKGeoJSONSerialization = objccategory external name 'MKGeoJSONSerialization' (MKPointAnnotation)
  end;

type
  MKMultiPoint_MKGeoJSONSerialization = objccategory external name 'MKGeoJSONSerialization' (MKMultiPoint)
  end;

type
  MKMultiPolyline_MKGeoJSONSerialization = objccategory external name 'MKGeoJSONSerialization' (MKMultiPolyline)
  end;

type
  MKMultiPolygon_MKGeoJSONSerialization = objccategory external name 'MKGeoJSONSerialization' (MKMultiPolygon)
  end;

type
  MKPolyline_MKGeoJSONSerialization = objccategory external name 'MKGeoJSONSerialization' (MKPolyline)
  end;

type
  MKGeoJSONSerialization = objccategory external (MKPolygon)
  end;
{$endif}

