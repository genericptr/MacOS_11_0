{ Parsed from Foundation.framework NSURLResponse.h }

{$ifdef TYPES}
type
  NSURLResponsePtr = ^NSURLResponse;
  NSHTTPURLResponsePtr = ^NSHTTPURLResponse;
{$endif}

{$ifdef CLASSES}

type
  NSURLResponse = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  private
    _internal: NSURLResponseInternal;
  public
    function initWithURL_MIMEType_expectedContentLength_textEncodingName (URL: NSURL; MIMEType: NSString; length: NSInteger; name: NSString): id; message 'initWithURL:MIMEType:expectedContentLength:textEncodingName:'; { NS_DESIGNATED_INITIALIZER }
    function URL: NSURL; message 'URL';
    function MIMEType: NSString; message 'MIMEType';
    function expectedContentLength: clonglong; message 'expectedContentLength';
    function textEncodingName: NSString; message 'textEncodingName';
    function suggestedFilename: NSString; message 'suggestedFilename';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  NSHTTPURLResponse = objcclass external (NSURLResponse)
  private
    _httpInternal: NSHTTPURLResponseInternal;
  public
    function initWithURL_statusCode_HTTPVersion_headerFields (url_: NSURL; statusCode: NSInteger; HTTPVersion: NSString; headerFields: NSDictionary): id; message 'initWithURL:statusCode:HTTPVersion:headerFields:'; { available in macos , ios , watchos , tvos  }
    function statusCode: NSInteger; message 'statusCode';
    function allHeaderFields: NSDictionary; message 'allHeaderFields';
    function valueForHTTPHeaderField (field: NSString): NSString; message 'valueForHTTPHeaderField:'; { available in macos , ios , watchos , tvos  }
    class function localizedStringForStatusCode (statusCode_: NSInteger): NSString; message 'localizedStringForStatusCode:';
  end;
{$endif}

