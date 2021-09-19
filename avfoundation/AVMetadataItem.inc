{ Parsed from AVFoundation.framework AVMetadataItem.h }

{$ifdef CALLBACKS}
type
  AVMetadataItemLoadValuesAsynchronouslyForKeysCallback = reference to procedure; cblock; cdecl;
  AVMetadataItemMetadataItemWithPropertiesOfMetadataItemCallback = reference to procedure (valueRequest: AVMetadataItemValueRequest); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  AVMetadataItemPtr = ^AVMetadataItem;
  AVMutableMetadataItemPtr = ^AVMutableMetadataItem;
  AVMetadataItemValueRequestPtr = ^AVMetadataItemValueRequest;
  AVMetadataItemFilterPtr = ^AVMetadataItemFilter;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVMetadataItem = objcclass external (NSObject, AVAsynchronousKeyValueLoadingProtocol, NSCopyingProtocol, NSMutableCopyingProtocol)
  private
    _priv: AVMetadataItemInternal;
  public
    function identifier: AVMetadataIdentifier; message 'identifier'; { available in macos 10.10, ios 8.0, tvos 9.0, watchos 1.0 }
    function extendedLanguageTag: NSString; message 'extendedLanguageTag'; { available in macos 10.10, ios 8.0, tvos 9.0, watchos 1.0 }
    function locale: NSLocale; message 'locale';
    function time: CMTime; message 'time';
    function duration: CMTime; message 'duration'; { available in macos 10.7, ios 4.2, tvos 9.0, watchos 1.0 }
    function dataType: NSString; message 'dataType'; { available in macos 10.10, ios 8.0, tvos 9.0, watchos 1.0 }
    function value: id; message 'value';
    function extraAttributes: NSDictionary; message 'extraAttributes';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure loadValuesAsynchronouslyForKeys_completionHandler (keys: NSArray; handler: AVAsynchronousKeyValueLoadingLoadValuesAsynchronouslyForKeysCallback); message 'loadValuesAsynchronouslyForKeys:completionHandler:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
    function statusOfValueForKey_error (key: NSString; outError: NSErrorPtr): AVKeyValueStatus; message 'statusOfValueForKey:error:';
  end;


type
  AVMetadataItemDateRepresentation = objccategory external (AVMetadataItem)
    function startDate: NSDate; message 'startDate'; { available in macos 10.11, ios 9.0, tvos 9.0, watchos 2.0 }
  end;

type
  AVMetadataItemTypeCoercion = objccategory external (AVMetadataItem)
    function stringValue: NSString; message 'stringValue';
    function numberValue: NSNumber; message 'numberValue';
    function dateValue: NSDate; message 'dateValue';
    function dataValue: NSData; message 'dataValue';
  end;

type
  AVAsynchronousKeyValueLoading = objccategory external (AVMetadataItem)
    function statusOfValueForKey_error (key: NSString; outError: NSErrorPtr): AVKeyValueStatus; message 'statusOfValueForKey:error:'; { available in macos 10.7, ios 4.2, tvos 9.0, watchos 1.0 }
    procedure loadValuesAsynchronouslyForKeys_completionHandler (keys: NSArray; handler: AVMetadataItemLoadValuesAsynchronouslyForKeysCallback); message 'loadValuesAsynchronouslyForKeys:completionHandler:'; { available in macos 10.7, ios 4.2, tvos 9.0, watchos 1.0 }
  end;

type
  AVMetadataItemArrayFiltering = objccategory external (AVMetadataItem)
    class function metadataItemsFromArray_filteredAndSortedAccordingToPreferredLanguages (metadataItems: NSArray; preferredLanguages: NSArray): NSArray; message 'metadataItemsFromArray:filteredAndSortedAccordingToPreferredLanguages:'; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 1.0 }
    class function metadataItemsFromArray_filteredByIdentifier (metadataItems: NSArray; identifier_: AVMetadataIdentifier): NSArray; message 'metadataItemsFromArray:filteredByIdentifier:'; { available in macos 10.10, ios 8.0, tvos 9.0, watchos 1.0 }
    class function metadataItemsFromArray_filteredByMetadataItemFilter (metadataItems: NSArray; metadataItemFilter: AVMetadataItemFilter): NSArray; message 'metadataItemsFromArray:filteredByMetadataItemFilter:'; { available in macos 10.9, ios 7.0, tvos 9.0, watchos 1.0 }
  end;

type
  AVMetadataItemKeyAndKeyspace = objccategory external (AVMetadataItem)
    class function identifierForKey_keySpace (key: id; keySpace: AVMetadataKeySpace): AVMetadataIdentifier; message 'identifierForKey:keySpace:'; { available in macos 10.10, ios 8.0, tvos 9.0, watchos 1.0 }
    class function keySpaceForIdentifier (identifier_: AVMetadataIdentifier): AVMetadataKeySpace; message 'keySpaceForIdentifier:'; { available in macos 10.10, ios 8.0, tvos 9.0, watchos 1.0 }
    class function keyForIdentifier (identifier_: AVMetadataIdentifier): id; message 'keyForIdentifier:'; { available in macos 10.10, ios 8.0, tvos 9.0, watchos 1.0 }
    function key: id; message 'key';
    function commonKey: AVMetadataKey; message 'commonKey';
    function keySpace: AVMetadataKeySpace; message 'keySpace';
  end;


type
  AVMutableMetadataItem = objcclass external (AVMetadataItem)
  private
    _mutablePriv: AVMutableMetadataItemInternal;
  public
    procedure setIdentifier(newValue: AVMetadataIdentifier); message 'setIdentifier:'; { available in macos 10.10, ios 8.0, tvos 9.0, watchos 1.0 }
    function identifier: AVMetadataIdentifier; message 'identifier'; { available in macos 10.10, ios 8.0, tvos 9.0, watchos 1.0 }
    procedure setExtendedLanguageTag(newValue: NSString); message 'setExtendedLanguageTag:'; { available in macos 10.10, ios 8.0, tvos 9.0, watchos 1.0 }
    function extendedLanguageTag: NSString; message 'extendedLanguageTag'; { available in macos 10.10, ios 8.0, tvos 9.0, watchos 1.0 }
    procedure setLocale(newValue: NSLocale); message 'setLocale:';
    function locale: NSLocale; message 'locale';
    procedure setTime(newValue: CMTime); message 'setTime:';
    function time: CMTime; message 'time';
    procedure setDuration(newValue: CMTime); message 'setDuration:'; { available in macos 10.7, ios 4.2, tvos 9.0, watchos 1.0 }
    function duration: CMTime; message 'duration'; { available in macos 10.7, ios 4.2, tvos 9.0, watchos 1.0 }
    procedure setDataType(newValue: NSString); message 'setDataType:'; { available in macos 10.10, ios 8.0, tvos 9.0, watchos 1.0 }
    function dataType: NSString; message 'dataType'; { available in macos 10.10, ios 8.0, tvos 9.0, watchos 1.0 }
    procedure setValue(newValue: id); message 'setValue:';
    function value: id; message 'value';
    procedure setExtraAttributes(newValue: NSDictionary); message 'setExtraAttributes:';
    function extraAttributes: NSDictionary; message 'extraAttributes';
    class function metadataItem: AVMutableMetadataItem; message 'metadataItem';
  end;


type
  AVMutableMetadataItemDateRepresentation = objccategory external (AVMutableMetadataItem)
    procedure setStartDate(newValue: NSDate); message 'setStartDate:'; { available in macos 10.11, ios 9.0, tvos 9.0, watchos 2.0 }
    function startDate: NSDate; message 'startDate'; { available in macos 10.11, ios 9.0, tvos 9.0, watchos 2.0 }
  end;

type
  AVMutableMetadataItemKeyAndKeyspace = objccategory external (AVMutableMetadataItem)
    procedure setKeySpace(newValue: AVMetadataKeySpace); message 'setKeySpace:';
    function keySpace: AVMetadataKeySpace; message 'keySpace';
    procedure setKey(newValue: id); message 'setKey:';
    function key: id; message 'key';
  end;

type
  AVMetadataItemLazyValueLoading = objccategory external (AVMetadataItem)
    class function metadataItemWithPropertiesOfMetadataItem_valueLoadingHandler (metadataItem: AVMetadataItem; handler: AVMetadataItemMetadataItemWithPropertiesOfMetadataItemCallback): AVMetadataItem; message 'metadataItemWithPropertiesOfMetadataItem:valueLoadingHandler:'; { available in macos 10.11, ios 9.0, tvos 9.0, watchos 2.0 }
  end;


type
  AVMetadataItemValueRequest = objcclass external (NSObject)
  private
    _valueRequest: AVMetadataItemValueRequestInternal;
  public
    function metadataItem: AVMetadataItem; message 'metadataItem';
    procedure respondWithValue (value: id); message 'respondWithValue:';
    procedure respondWithError (error: NSError); message 'respondWithError:';
  end;

type
  AVMetadataItemFilter = objcclass external (NSObject)
  private
    _itemFilterInternal: AVMetadataItemFilterInternal;
  public
    class function metadataItemFilterForSharing: AVMetadataItemFilter; message 'metadataItemFilterForSharing';
  end;


type
  AVMetadataItemArrayFilteringDeprecable = objccategory external (AVMetadataItem)
    class function metadataItemsFromArray_withLocale (metadataItems: NSArray; locale_: NSLocale): NSArray; message 'metadataItemsFromArray:withLocale:';
    class function metadataItemsFromArray_withKey_keySpace (metadataItems: NSArray; key: id; keySpace: AVMetadataKeySpace): NSArray; message 'metadataItemsFromArray:withKey:keySpace:';
  end;
{$endif}

{$else}
{$endif}
