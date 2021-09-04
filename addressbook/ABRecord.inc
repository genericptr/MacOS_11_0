{ Parsed from AddressBook.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AddressBook.framework/Headers/ABRecord.h }

{$ifdef TYPES}
type
  ABRecordPtr = ^ABRecord;
{$endif}

{$ifndef __ABRECORD__}
{$ifdef CLASSES}

type
  ABRecord = objcclass external (NSObject)
  private
    _databaseImpl: id;
    _reserved1: id;
    _reserved2: id;
    _reserved3: id;
  public
    function init: id; message 'init';
    function initWithAddressBook (addressBook: ABAddressBook): id; message 'initWithAddressBook:';
    function valueForProperty (property_: NSString): id; message 'valueForProperty:';
    function setValue_forProperty_error (value: id; property_: NSString; error: NSErrorPtr): objcbool; message 'setValue:forProperty:error:';
    function setValue_forProperty (value: id; property_: NSString): objcbool; message 'setValue:forProperty:';
    function removeValueForProperty (property_: NSString): objcbool; message 'removeValueForProperty:';
    function isReadOnly: objcbool; message 'isReadOnly';
  end;


type
  ABRecord_Convenience = objccategory external (ABRecord)
    function uniqueId: NSString; message 'uniqueId';
    function displayName: NSString; message 'displayName';
  end;
{$endif}

{$endif}
