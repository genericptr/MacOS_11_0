{ Parsed from Foundation.framework NSJSONSerialization.h }

{$ifdef TYPES}
type
  NSJSONSerializationPtr = ^NSJSONSerialization;
{$endif}

{$ifdef TYPES}
type
  NSJSONReadingOptions = NSUInteger;
  NSJSONReadingOptionsPtr = ^NSJSONReadingOptions;

const
  NSJSONReadingMutableContainers = 1 shl 0;
  NSJSONReadingMutableLeaves = 1 shl 1;
  NSJSONReadingFragmentsAllowed = 1 shl 2;
  NSJSONReadingAllowFragments = NSJSONReadingFragmentsAllowed deprecated 'replace with NSJSONReadingFragmentsAllowed';

type
  NSJSONWritingOptions = NSUInteger;
  NSJSONWritingOptionsPtr = ^NSJSONWritingOptions;

const
  NSJSONWritingPrettyPrinted = 1 shl 0;
  NSJSONWritingSortedKeys = 1 shl 1 { available in macos , ios , watchos , tvos  };
  NSJSONWritingFragmentsAllowed = 1 shl 2;
  NSJSONWritingWithoutEscapingSlashes = 1 shl 3 { available in macos , ios , watchos , tvos  };
{$endif}

{$ifdef CLASSES}

type
  NSJSONSerialization = objcclass external (NSObject)
  private
    reserved:array[0..5] of pointer;
  public
    class function isValidJSONObject (obj: id): objcbool; message 'isValidJSONObject:';
    class function dataWithJSONObject_options_error (obj: id; opt: NSJSONWritingOptions; error: NSErrorPtr): NSData; message 'dataWithJSONObject:options:error:';
    class function JSONObjectWithData_options_error (data: NSData; opt: NSJSONReadingOptions; error: NSErrorPtr): id; message 'JSONObjectWithData:options:error:';
    class function writeJSONObject_toStream_options_error (obj: id; stream: NSOutputStream; opt: NSJSONWritingOptions; error: NSErrorPtr): NSInteger; message 'writeJSONObject:toStream:options:error:';
    class function JSONObjectWithStream_options_error (stream: NSInputStream; opt: NSJSONReadingOptions; error: NSErrorPtr): id; message 'JSONObjectWithStream:options:error:';
  end;
{$endif}

