{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLUpdateProgressEvent.h }
{$ifdef TYPES}
type
  MLUpdateProgressEvent = NSInteger;
  MLUpdateProgressEventPtr = ^MLUpdateProgressEvent;

const
  MLUpdateProgressEventTrainingBegin = 1 shl 0;
  MLUpdateProgressEventEpochEnd = 1 shl 1;
  MLUpdateProgressEventMiniBatchEnd = 1 shl 2;
{$endif}

