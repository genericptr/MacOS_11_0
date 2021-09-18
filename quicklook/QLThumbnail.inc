{ Parsed from QuickLook.framework QLThumbnail.h }

{$if  not (defined(__QUICKLOOK_QLTHUMBNAIL__))}

{$ifdef TYPES}
type
  QLThumbnailRef = OpaqueType;
  QLThumbnailRefPtr = ^QLThumbnailRef;
{$endif}

{$ifdef FUNCTIONS}
function QLThumbnailGetTypeID: CFTypeID; cdecl; external; deprecated 'Use QuickLookThumbnailing for thumbnails.';
function QLThumbnailCreate(allocator: CFAllocatorRef; url: CFURLRef; maxThumbnailSize: CGSize; options: CFDictionaryRef): QLThumbnailRef; cdecl; external; deprecated 'Use QLThumbnailGenerationRequest in QuickLookThumbnailing to generate thumbnails.';
function QLThumbnailCopyDocumentURL(thumbnail: QLThumbnailRef): CFURLRef; cdecl; external; deprecated 'Use QuickLookThumbnailing for thumbnails.';
function QLThumbnailGetMaximumSize(thumbnail: QLThumbnailRef): CGSize; cdecl; external; deprecated 'Use QLThumbnailGenerationRequest in QuickLookThumbnailing.';
function QLThumbnailCopyOptions(thumbnail: QLThumbnailRef): CFDictionaryRef; cdecl; external; deprecated 'Use QuickLookThumbnailing for thumbnails.';
{$endif}

{$if defined(__BLOCKS__) and (MAC_OS_X_VERSION_10_6 <= MAC_OS_X_VERSION_MAX_ALLOWED)}
{$ifdef FUNCTIONS}
function QLThumbnailDispatchAsync(thumbnail: QLThumbnailRef; queue: dispatch_queue_t; completion: dispatch_block_t): pointer; cdecl; external; deprecated 'Use QLThumbnailGenerator in QuickLookThumbnailing to generate thumbnails.';
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function QLThumbnailCopyImage(thumbnail: QLThumbnailRef): CGImageRef; cdecl; external; deprecated 'Use QuickLookThumbnailing for thumbnails.';
function QLThumbnailGetContentRect(thumbnail: QLThumbnailRef): CGRect; cdecl; external; deprecated 'Use QuickLookThumbnailing for thumbnails.';
function QLThumbnailCancel(thumbnail: QLThumbnailRef): pointer; cdecl; external; deprecated 'Use [QLThumbnailGenerator cancelRequest:] in QuickLookThumbnailing.';
function QLThumbnailIsCancelled(thumbnail: QLThumbnailRef): Boolean; cdecl; external; deprecated 'Use QuickLookThumbnailing for thumbnails.';
{$endif}

{$endif}
