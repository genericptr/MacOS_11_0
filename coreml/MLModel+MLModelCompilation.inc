{ Parsed from CoreML.framework MLModel+MLModelCompilation.h }
{$ifdef CLASSES}

type
  MLModelCompilation = objccategory external (MLModel)
    class function compileModelAtURL_error (modelURL: NSURL; error: NSErrorPtr): NSURL; message 'compileModelAtURL:error:'; { available in macos 10.13, ios 11.0, tvos 11.0 }
  end;
{$endif}

