{ Parsed from CoreML.framework MLUpdateProgressEvent.h }
{$ifdef TYPES}
type
  MLUpdateProgressEvent = NSInteger;
  MLUpdateProgressEventPtr = ^MLUpdateProgressEvent;

const
  MLUpdateProgressEventTrainingBegin = 1 shl 0;
  MLUpdateProgressEventEpochEnd = 1 shl 1;
  MLUpdateProgressEventMiniBatchEnd = 1 shl 2;
{$endif}

