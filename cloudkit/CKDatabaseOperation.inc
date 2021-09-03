{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKDatabaseOperation.h }

{$ifdef TYPES}
type
  CKDatabaseOperationPtr = ^CKDatabaseOperation;
{$endif}

{$ifdef CLASSES}

type
  CKDatabaseOperation = objcclass external (CKOperation)
  public
    procedure setDatabase(newValue: CKDatabase); message 'setDatabase:';
    function database: CKDatabase; message 'database';
  end;
{$endif}

