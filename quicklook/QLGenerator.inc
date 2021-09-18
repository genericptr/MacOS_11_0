{ Parsed from QuickLook.framework QLGenerator.h }

{$if  not (defined(__QUICKLOOK_QLGENERATOR__))}
{$ifdef TYPES}
const
  kQLReturnMask = $af00;
  kQLReturnNoError = noErr;

type
  QLThumbnailRequestRef = OpaqueType;
  QLThumbnailRequestRefPtr = ^QLThumbnailRequestRef;
{$endif}

{$ifdef FUNCTIONS}
function QLThumbnailRequestGetTypeID: CFTypeID; cdecl; external; deprecated 'Use a QLFileThumbnailRequest in a Thumbnail Extension to provide thumbnails for your file types.';
function QLThumbnailRequestCopyURL(thumbnail: QLThumbnailRequestRef): CFURLRef; cdecl; external; deprecated 'Use a QLFileThumbnailRequest in a Thumbnail Extension to provide thumbnails for your file types.';
function QLThumbnailRequestCopyOptions(thumbnail: QLThumbnailRequestRef): CFDictionaryRef; cdecl; external; deprecated 'Use a QLFileThumbnailRequest in a Thumbnail Extension to provide thumbnails for your file types.';
function QLThumbnailRequestCopyContentUTI(thumbnail: QLThumbnailRequestRef): CFStringRef; cdecl; external; deprecated 'Use a QLFileThumbnailRequest in a Thumbnail Extension to provide thumbnails for your file types.';
function QLThumbnailRequestGetMaximumSize(thumbnail: QLThumbnailRequestRef): CGSize; cdecl; external; deprecated 'Use a QLFileThumbnailRequest in a Thumbnail Extension to provide thumbnails for your file types.';
function QLThumbnailRequestGetGeneratorBundle(thumbnail: QLThumbnailRequestRef): CFBundleRef; cdecl; external; deprecated 'Use a QLFileThumbnailRequest in a Thumbnail Extension to provide thumbnails for your file types.';
function QLThumbnailRequestSetDocumentObject(thumbnail: QLThumbnailRequestRef; object_: pointer; callbacks: CFArrayCallBacksPtr): pointer; cdecl; external; deprecated 'Use a QLFileThumbnailRequest in a Thumbnail Extension to provide thumbnails for your file types.';
function QLThumbnailRequestGetDocumentObject(thumbnail: QLThumbnailRequestRef): pointer; cdecl; external; deprecated 'Use a QLFileThumbnailRequest in a Thumbnail Extension to provide thumbnails for your file types.';
function QLThumbnailRequestSetImage(thumbnail: QLThumbnailRequestRef; image: CGImageRef; properties: CFDictionaryRef): pointer; cdecl; external; deprecated 'Use a QLThumbnailReply in a Thumbnail Extension to provide thumbnails for your file types';
function QLThumbnailRequestSetImageWithData(thumbnail: QLThumbnailRequestRef; data: CFDataRef; properties: CFDictionaryRef): pointer; cdecl; external; deprecated 'Use a QLThumbnailReply in a Thumbnail Extension to provide thumbnails for your file types.';
function QLThumbnailRequestCreateContext(thumbnail: QLThumbnailRequestRef; size: CGSize; isBitmap: Boolean; properties: CFDictionaryRef): CGContextRef; cdecl; external; deprecated 'Use a QLThumbnailReply in a Thumbnail Extension to provide thumbnails for your file types.';
function QLThumbnailRequestFlushContext(thumbnail: QLThumbnailRequestRef; context: CGContextRef): pointer; cdecl; external; deprecated 'Use a QLThumbnailReply in a Thumbnail Extension to provide thumbnails for your file types.';
function QLThumbnailRequestSetImageAtURL(thumbnail: QLThumbnailRequestRef; url: CFURLRef; properties: CFDictionaryRef): pointer; cdecl; external; deprecated 'Use a QLThumbnailReply in a Thumbnail Extension to provide thumbnails for your file types.';
function QLThumbnailRequestSetThumbnailWithDataRepresentation(thumbnail: QLThumbnailRequestRef; data: CFDataRef; contentTypeUTI: CFStringRef; previewProperties: CFDictionaryRef; properties: CFDictionaryRef): pointer; cdecl; external; deprecated 'Use a QLThumbnailReply in a Thumbnail Extension to provide thumbnails for your file types.';
function QLThumbnailRequestSetThumbnailWithURLRepresentation(thumbnail: QLThumbnailRequestRef; url: CFURLRef; contentTypeUTI: CFStringRef; previewProperties: CFDictionaryRef; properties: CFDictionaryRef): pointer; cdecl; external; deprecated 'Use a QLThumbnailReply in a Thumbnail Extension to provide thumbnails for your file types.';
function QLThumbnailRequestIsCancelled(thumbnail: QLThumbnailRequestRef): Boolean; cdecl; external; deprecated 'Use a QLFileThumbnailRequest in a Thumbnail Extension to provide thumbnails for your file types.';
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kQLThumbnailPropertyExtensionKey: CFStringRef deprecated 'Use a QLThumbnailReply in a Thumbnail Extension to provide thumbnails for your file types.'; cvar; external;
  kQLThumbnailPropertyBadgeImageKey: CFStringRef deprecated 'Use a QLThumbnailReply in a Thumbnail Extension to provide thumbnails for your file types.'; cvar; external;
  kQLThumbnailPropertyBaseBundlePathKey: CFStringRef deprecated 'Use a QLThumbnailReply in a Thumbnail Extension to provide thumbnails for your file types.'; cvar; external;
{$endif}

{$ifdef TYPES}
type
  QLPreviewRequestRef = OpaqueType;
  QLPreviewRequestRefPtr = ^QLPreviewRequestRef;
{$endif}

{$ifdef FUNCTIONS}
function QLPreviewRequestGetTypeID: CFTypeID; cdecl; external; deprecated 'Use a QLPreviewingController in a Preview Extension to provide previews for your file types.';
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kQLPreviewPropertyDisplayNameKey: CFStringRef deprecated 'Use the title property of your QLPreviewingController in a Preview Extension.'; cvar; external;
  kQLPreviewPropertyWidthKey: CFStringRef deprecated 'Use the preferredContentSize property of your QLPreviewingController in a Preview Extension.'; cvar; external;
  kQLPreviewPropertyHeightKey: CFStringRef deprecated 'Use the preferredContentSize property of your QLPreviewingController in a Preview Extension.'; cvar; external;
  kQLPreviewPropertyBaseBundlePathKey: CFStringRef deprecated 'Use a QLPreviewingController in a Preview Extension to provide previews for your file types.'; cvar; external;
  kQLPreviewPropertyStringEncodingKey: CFStringRef deprecated 'Use a QLPreviewingController in a Preview Extension to provide previews for your file types.'; cvar; external;
{$endif}

{$ifdef TYPES}
const
  kQLPreviewPDFStandardStyle = 0;
  kQLPreviewPDFPagesWithThumbnailsOnRightStyle = 3;
  kQLPreviewPDFPagesWithThumbnailsOnLeftStyle = 4;
type
  QLPreviewPDFStyle = clong;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kQLPreviewPropertyPDFStyleKey: CFStringRef deprecated 'Use a QLPreviewingController in a Preview Extension to provide previews for your file types.'; cvar; external;
  kQLPreviewOptionCursorKey: CFStringRef deprecated 'Use a QLPreviewingController in a Preview Extension to provide previews for your file types.'; cvar; external;
  kQLPreviewPropertyCursorKey: CFStringRef deprecated 'Use a QLPreviewingController in a Preview Extension to provide previews for your file types.'; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function QLPreviewRequestCopyURL(preview: QLPreviewRequestRef): CFURLRef; cdecl; external; deprecated 'Use a QLPreviewingController in a Preview Extension to provide previews for your file types.';
function QLPreviewRequestCopyOptions(preview: QLPreviewRequestRef): CFDictionaryRef; cdecl; external; deprecated 'Use a QLPreviewingController in a Preview Extension to provide previews for your file types.';
function QLPreviewRequestCopyContentUTI(preview: QLPreviewRequestRef): CFStringRef; cdecl; external; deprecated 'Use a QLPreviewingController in a Preview Extension to provide previews for your file types.';
function QLPreviewRequestGetGeneratorBundle(preview: QLPreviewRequestRef): CFBundleRef; cdecl; external; deprecated 'Use a QLPreviewingController in a Preview Extension to provide previews for your file types.';
function QLPreviewRequestSetDocumentObject(preview: QLPreviewRequestRef; object_: pointer; callbacks: CFArrayCallBacksPtr): pointer; cdecl; external; deprecated 'Use a QLPreviewingController in a Preview Extension to provide previews for your file types.';
function QLPreviewRequestGetDocumentObject(preview: QLPreviewRequestRef): pointer; cdecl; external; deprecated 'Use a QLPreviewingController in a Preview Extension to provide previews for your file types.';
function QLPreviewRequestIsCancelled(preview: QLPreviewRequestRef): Boolean; cdecl; external; deprecated 'Use a QLPreviewingController in a Preview Extension to provide previews for your file types.';
function QLPreviewRequestSetDataRepresentation(preview: QLPreviewRequestRef; data: CFDataRef; contentTypeUTI: CFStringRef; properties: CFDictionaryRef): pointer; cdecl; external; deprecated 'Use a QLPreviewingController in a Preview Extension to provide previews for your file types.';
function QLPreviewRequestSetURLRepresentation(preview: QLPreviewRequestRef; url: CFURLRef; contentTypeUTI: CFStringRef; properties: CFDictionaryRef): pointer; cdecl; external; deprecated 'Use a QLPreviewingController in a Preview Extension to provide previews for your file types.';
function QLPreviewRequestCreateContext(preview: QLPreviewRequestRef; size: CGSize; isBitmap: Boolean; properties: CFDictionaryRef): CGContextRef; cdecl; external; deprecated 'Use a QLPreviewingController in a Preview Extension to provide previews for your file types.';
function QLPreviewRequestCreatePDFContext(preview: QLPreviewRequestRef; mediaBox: CGRectPtr; auxiliaryInfo: CFDictionaryRef; properties: CFDictionaryRef): CGContextRef; cdecl; external; deprecated 'Use a QLPreviewingController in a Preview Extension to provide previews for your file types.';
function QLPreviewRequestFlushContext(preview: QLPreviewRequestRef; context: CGContextRef): pointer; cdecl; external; deprecated 'Use a QLPreviewingController in a Preview Extension to provide previews for your file types.';
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kQLPreviewPropertyMIMETypeKey: CFStringRef deprecated 'Use a QLPreviewingController in a Preview Extension to provide previews for your file types.'; cvar; external;
  kQLPreviewPropertyTextEncodingNameKey: CFStringRef deprecated 'Use a QLPreviewingController in a Preview Extension to provide previews for your file types.'; cvar; external;
  kQLPreviewPropertyAttachmentDataKey: CFStringRef deprecated 'Use a QLPreviewingController in a Preview Extension to provide previews for your file types.'; cvar; external;
  kQLPreviewPropertyAttachmentsKey: CFStringRef deprecated 'Use a QLPreviewingController in a Preview Extension to provide previews for your file types.'; cvar; external;
  kQLPreviewContentIDScheme: CFStringRef deprecated 'Use a QLPreviewingController in a Preview Extension to provide previews for your file types.'; cvar; external;
{$endif}

{$if (defined(__COREFOUNDATION_CFPLUGINCOM__))}
{$ifdef TYPES}
type
  QLGeneratorInterfaceStruct = record
    GenerateThumbnailForURL: function (thisInterface: pointer; thumbnail: QLThumbnailRequestRef; url: CFURLRef; contentTypeUTI: CFStringRef; options: CFDictionaryRef; maxSize: CGSize): OSStatus; cdecl;
    CancelThumbnailGeneration: function (thisInterface: pointer; thumbnail: QLThumbnailRequestRef): pointer; cdecl;
    GeneratePreviewForURL: function (thisInterface: pointer; preview: QLPreviewRequestRef; url: CFURLRef; contentTypeUTI: CFStringRef; options: CFDictionaryRef): OSStatus; cdecl;
    CancelPreviewGeneration: function (thisInterface: pointer; preview: QLPreviewRequestRef): pointer; cdecl;
  end;
type
  QLGeneratorInterfaceStructPtr = ^QLGeneratorInterfaceStruct;
{$endif}

{$endif}
{$endif}
