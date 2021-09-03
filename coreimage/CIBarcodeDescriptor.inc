{ Parsed from CoreImage.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreImage.framework/Headers/CIBarcodeDescriptor.h }

{$ifdef TYPES}
type
  CIBarcodeDescriptorPtr = ^CIBarcodeDescriptor;
  CIQRCodeDescriptorPtr = ^CIQRCodeDescriptor;
  CIAztecCodeDescriptorPtr = ^CIAztecCodeDescriptor;
  CIPDF417CodeDescriptorPtr = ^CIPDF417CodeDescriptor;
  CIDataMatrixCodeDescriptorPtr = ^CIDataMatrixCodeDescriptor;
{$endif}

{$ifdef CLASSES}

type
  CIBarcodeDescriptor = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef TYPES}
type
  CIQRCodeErrorCorrectionLevel = NSInteger;
  CIQRCodeErrorCorrectionLevelPtr = ^CIQRCodeErrorCorrectionLevel;

const
  CIQRCodeErrorCorrectionLevelL = 'L';
  CIQRCodeErrorCorrectionLevelM = 'M';
  CIQRCodeErrorCorrectionLevelQ = 'Q';
  CIQRCodeErrorCorrectionLevelH = 'H';
{$endif}

{$ifdef CLASSES}

type
  CIQRCodeDescriptor = objcclass external (CIBarcodeDescriptor)
  private
    errorCorrectedPayload: NSData;
    symbolVersion: NSInteger;
    maskPattern: cuint8;
    errorCorrectionLevel: CIQRCodeErrorCorrectionLevel;
  public
    function errorCorrectedPayload_: NSData; message 'errorCorrectedPayload';
    function symbolVersion_: NSInteger; message 'symbolVersion';
    function maskPattern_: cuint8; message 'maskPattern';
    function errorCorrectionLevel_: CIQRCodeErrorCorrectionLevel; message 'errorCorrectionLevel';
    function initWithPayload_symbolVersion_maskPattern_errorCorrectionLevel (errorCorrectedPayload__: NSData; symbolVersion__: NSInteger; maskPattern__: cuint8; errorCorrectionLevel__: CIQRCodeErrorCorrectionLevel): id; message 'initWithPayload:symbolVersion:maskPattern:errorCorrectionLevel:';
    class function descriptorWithPayload_symbolVersion_maskPattern_errorCorrectionLevel (errorCorrectedPayload__: NSData; symbolVersion__: NSInteger; maskPattern__: cuint8; errorCorrectionLevel__: CIQRCodeErrorCorrectionLevel): id; message 'descriptorWithPayload:symbolVersion:maskPattern:errorCorrectionLevel:';
  end;

type
  CIAztecCodeDescriptor = objcclass external (CIBarcodeDescriptor)
  private
    errorCorrectedPayload: NSData;
    isCompact: objcbool;
    layerCount: NSInteger;
    dataCodewordCount: NSInteger;
  public
    function errorCorrectedPayload_: NSData; message 'errorCorrectedPayload';
    function isCompact_: objcbool; message 'isCompact';
    function layerCount_: NSInteger; message 'layerCount';
    function dataCodewordCount_: NSInteger; message 'dataCodewordCount';
    function initWithPayload_isCompact_layerCount_dataCodewordCount (errorCorrectedPayload__: NSData; isCompact__: objcbool; layerCount__: NSInteger; dataCodewordCount__: NSInteger): id; message 'initWithPayload:isCompact:layerCount:dataCodewordCount:';
    class function descriptorWithPayload_isCompact_layerCount_dataCodewordCount (errorCorrectedPayload__: NSData; isCompact__: objcbool; layerCount__: NSInteger; dataCodewordCount__: NSInteger): id; message 'descriptorWithPayload:isCompact:layerCount:dataCodewordCount:';
  end;

type
  CIPDF417CodeDescriptor = objcclass external (CIBarcodeDescriptor)
  private
    errorCorrectedPayload: NSData;
    isCompact: objcbool;
    rowCount: NSInteger;
    columnCount: NSInteger;
  public
    function errorCorrectedPayload_: NSData; message 'errorCorrectedPayload';
    function isCompact_: objcbool; message 'isCompact';
    function rowCount_: NSInteger; message 'rowCount';
    function columnCount_: NSInteger; message 'columnCount';
    function initWithPayload_isCompact_rowCount_columnCount (errorCorrectedPayload__: NSData; isCompact__: objcbool; rowCount__: NSInteger; columnCount__: NSInteger): id; message 'initWithPayload:isCompact:rowCount:columnCount:';
    class function descriptorWithPayload_isCompact_rowCount_columnCount (errorCorrectedPayload__: NSData; isCompact__: objcbool; rowCount__: NSInteger; columnCount__: NSInteger): id; message 'descriptorWithPayload:isCompact:rowCount:columnCount:';
  end;
{$endif}

{$ifdef TYPES}
type
  CIDataMatrixCodeECCVersion = NSInteger;
  CIDataMatrixCodeECCVersionPtr = ^CIDataMatrixCodeECCVersion;

const
  CIDataMatrixCodeECCVersion000 = 0;
  CIDataMatrixCodeECCVersion050 = 50;
  CIDataMatrixCodeECCVersion080 = 80;
  CIDataMatrixCodeECCVersion100 = 100;
  CIDataMatrixCodeECCVersion140 = 140;
  CIDataMatrixCodeECCVersion200 = 200;
{$endif}

{$ifdef CLASSES}

type
  CIDataMatrixCodeDescriptor = objcclass external (CIBarcodeDescriptor)
  private
    errorCorrectedPayload: NSData;
    rowCount: NSInteger;
    columnCount: NSInteger;
    eccVersion: CIDataMatrixCodeECCVersion;
  public
    function errorCorrectedPayload_: NSData; message 'errorCorrectedPayload';
    function rowCount_: NSInteger; message 'rowCount';
    function columnCount_: NSInteger; message 'columnCount';
    function eccVersion_: CIDataMatrixCodeECCVersion; message 'eccVersion';
    function initWithPayload_rowCount_columnCount_eccVersion (errorCorrectedPayload__: NSData; rowCount__: NSInteger; columnCount__: NSInteger; eccVersion__: CIDataMatrixCodeECCVersion): id; message 'initWithPayload:rowCount:columnCount:eccVersion:';
    class function descriptorWithPayload_rowCount_columnCount_eccVersion (errorCorrectedPayload__: NSData; rowCount__: NSInteger; columnCount__: NSInteger; eccVersion__: CIDataMatrixCodeECCVersion): id; message 'descriptorWithPayload:rowCount:columnCount:eccVersion:';
  end;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef CLASSES}

type
  NSUserActivity_CIBarcodeDescriptor = objccategory external name 'CIBarcodeDescriptor' (NSUserActivity)
    function detectedBarcodeDescriptor: CIBarcodeDescriptor; message 'detectedBarcodeDescriptor'; { available in macos , ios , tvos  }
  end;
{$endif}

{$endif}
