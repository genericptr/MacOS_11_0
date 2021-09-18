{ Parsed from CoreML.framework MLModel+MLModelCompilation.h }
{$ifdef CLASSES}

type
  MLModelCompilation = objccategory external (MLModel)
    class function compileModelAtURL_error (modelURL: NSURL; error: NSErrorPtr): NSURL; message 'compileModelAtURL:error:'; { available in macos , ios , tvos  }
  end;
{$endif}

