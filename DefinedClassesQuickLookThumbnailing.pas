{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}
{$packrecords c}

unit DefinedClassesQuickLookThumbnailing;
interface

type
  QLFileThumbnailRequest = objcclass external;
  QLThumbnailGenerationRequest = objcclass external;
  QLThumbnailGenerator = objcclass external;
  QLThumbnailProvider = objcclass external;
  QLThumbnailReply = objcclass external;
  QLThumbnailRepresentation = objcclass external;

type
  NSImage = objcclass external;
  UIImage = objcclass external;
  
implementation
end.
