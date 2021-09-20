{ Parsed from QuickLookThumbnailing.framework QLThumbnailGenerator.h }

{$ifdef CALLBACKS}
type
  QLThumbnailGeneratorGenerateBestRepresentationForRequestCallback = reference to procedure (thumbnail: QLThumbnailRepresentation; error: NSError); cblock; cdecl;
  QLThumbnailGeneratorGenerateRepresentationsForRequestCallback = reference to procedure (thumbnail: QLThumbnailRepresentation; type_: QLThumbnailRepresentationType; error: NSError); cblock; cdecl;
  QLThumbnailGeneratorSaveBestRepresentationForRequestCallback = reference to procedure (error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  QLThumbnailGeneratorPtr = ^QLThumbnailGenerator;
{$endif}

{$ifdef CLASSES}

type
  QLThumbnailGenerator = objcclass external (NSObject)
  public
    class function sharedGenerator: QLThumbnailGenerator; message 'sharedGenerator';
    procedure generateBestRepresentationForRequest_completionHandler (request: QLThumbnailGenerationRequest; completionHandler: QLThumbnailGeneratorGenerateBestRepresentationForRequestCallback); message 'generateBestRepresentationForRequest:completionHandler:';
    procedure generateRepresentationsForRequest_updateHandler (request: QLThumbnailGenerationRequest; updateHandler: QLThumbnailGeneratorGenerateRepresentationsForRequestCallback); message 'generateRepresentationsForRequest:updateHandler:';
    procedure cancelRequest (request: QLThumbnailGenerationRequest); message 'cancelRequest:';
    procedure saveBestRepresentationForRequest_toFileAtURL_withContentType_completionHandler (request: QLThumbnailGenerationRequest; fileURL: NSURL; contentType: NSString; completionHandler: QLThumbnailGeneratorSaveBestRepresentationForRequestCallback); message 'saveBestRepresentationForRequest:toFileAtURL:withContentType:completionHandler:';
  end;
{$endif}

