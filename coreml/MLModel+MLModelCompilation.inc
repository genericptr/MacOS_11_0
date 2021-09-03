{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLModel+MLModelCompilation.h }
{$ifdef CLASSES}

type
  MLModelCompilation = objccategory external (MLModel)
    class function compileModelAtURL_error (modelURL: NSURL; error: NSErrorPtr): NSURL; message 'compileModelAtURL:error:'; { available in macos , ios , tvos  }
  end;
{$endif}

