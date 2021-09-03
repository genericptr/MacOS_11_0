{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLParameterKey.h }

{$ifdef TYPES}
type
  MLParameterKeyPtr = ^MLParameterKey;
{$endif}

{$ifdef CLASSES}

type
  MLParameterKey = objcclass external (MLKey)
  public
    class function learningRate: MLParameterKey; message 'learningRate';
    class function momentum: MLParameterKey; message 'momentum';
    class function miniBatchSize: MLParameterKey; message 'miniBatchSize';
    class function beta1: MLParameterKey; message 'beta1';
    class function beta2: MLParameterKey; message 'beta2';
    class function eps: MLParameterKey; message 'eps';
    class function epochs: MLParameterKey; message 'epochs';
    class function shuffle: MLParameterKey; message 'shuffle';
    class function seed: MLParameterKey; message 'seed';
    class function numberOfNeighbors: MLParameterKey; message 'numberOfNeighbors';
    function init: id; message 'init';
    class function new_: id; message 'new';
  end;


type
  MLLinkedModelParameters = objccategory external (MLParameterKey)
    class function linkedModelFileName: MLParameterKey; message 'linkedModelFileName';
    class function linkedModelSearchPath: MLParameterKey; message 'linkedModelSearchPath';
  end;

type
  MLNeuralNetworkParameters = objccategory external (MLParameterKey)
    class function weights: MLParameterKey; message 'weights';
    class function biases: MLParameterKey; message 'biases';
  end;

type
  MLScopedParameters = objccategory external (MLParameterKey)
    function scopedTo (scope_: NSString): MLParameterKey; message 'scopedTo:';
  end;
{$endif}

