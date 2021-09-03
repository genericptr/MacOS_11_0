{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLMetricKey.h }

{$ifdef TYPES}
type
  MLMetricKeyPtr = ^MLMetricKey;
{$endif}

{$ifdef CLASSES}

type
  MLMetricKey = objcclass external (MLKey)
  public
    class function lossValue: MLMetricKey; message 'lossValue';
    class function epochIndex: MLMetricKey; message 'epochIndex';
    class function miniBatchIndex: MLMetricKey; message 'miniBatchIndex';
    function init: id; message 'init';
    class function new_: id; message 'new';
  end;
{$endif}

