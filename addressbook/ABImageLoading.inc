{ Parsed from AddressBook.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AddressBook.framework/Headers/ABImageLoading.h }

{$ifdef TYPES}
type
  ABImageClientProtocolPtr = ^ABImageClientProtocol;
{$endif}

{$ifndef __ABIMAGELOADING__}
{$ifdef PROTOCOLS}

type
  ABImageClientProtocol = objcprotocol external name 'ABImageClient' (NSObjectProtocol)
    procedure consumeImageData_forTag (data: NSData; tag: NSInteger); message 'consumeImageData:forTag:';
  end;
{$endif}

{$ifdef CLASSES}

type
  ABPersonImageAdditions = objccategory external (ABPerson)
    function setImageData (data: NSData): objcbool; message 'setImageData:';
    function imageData: NSData; message 'imageData';
    function beginLoadingImageDataForClient (client: id): NSInteger; message 'beginLoadingImageDataForClient:';
    class procedure cancelLoadingImageDataForTag (tag: NSInteger); message 'cancelLoadingImageDataForTag:';
  end;
{$endif}

{$endif}
