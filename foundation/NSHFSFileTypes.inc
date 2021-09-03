{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSHFSFileTypes.h }
{$ifdef FUNCTIONS}
function NSFileTypeForHFSTypeCode(hfsFileTypeCode: OSType): NSString; cdecl; external;
function NSHFSTypeCodeFromFileType(fileTypeString: NSString): OSType; cdecl; external;
function NSHFSTypeOfFile(fullFilePath: NSString): NSString; cdecl; external;
{$endif}

