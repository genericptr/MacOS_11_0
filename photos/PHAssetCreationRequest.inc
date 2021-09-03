{ Parsed from Photos.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Photos.framework/Headers/PHAssetCreationRequest.h }

{$ifdef TYPES}
type
  PHAssetResourceCreationOptionsPtr = ^PHAssetResourceCreationOptions;
  PHAssetCreationRequestPtr = ^PHAssetCreationRequest;
{$endif}

{$ifdef CLASSES}

type
  PHAssetResourceCreationOptions = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setOriginalFilename(newValue: NSString); message 'setOriginalFilename:';
    function originalFilename: NSString; message 'originalFilename';
    procedure setUniformTypeIdentifier(newValue: NSString); message 'setUniformTypeIdentifier:';
    function uniformTypeIdentifier: NSString; message 'uniformTypeIdentifier';
    procedure setShouldMoveFile(newValue: objcbool); message 'setShouldMoveFile:';
    function shouldMoveFile: objcbool; message 'shouldMoveFile';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  PHAssetCreationRequest = objcclass external (PHAssetChangeRequest)
  public
    class function creationRequestForAsset: id; message 'creationRequestForAsset';
    class function supportsAssetResourceTypes (types: NSArray): objcbool; message 'supportsAssetResourceTypes:';
    procedure addResourceWithType_fileURL_options (type_: PHAssetResourceType; fileURL: NSURL; options: PHAssetResourceCreationOptions); message 'addResourceWithType:fileURL:options:';
    procedure addResourceWithType_data_options (type_: PHAssetResourceType; data: NSData; options: PHAssetResourceCreationOptions); message 'addResourceWithType:data:options:';
  end;
{$endif}

