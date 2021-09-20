{ Parsed from QuickLookThumbnailing.framework QLThumbnailReply.h }

{$ifdef CALLBACKS}
type
  QLThumbnailReplyReplyWithContextSizeCallback = reference to function (context: CGContextRef): objcbool; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  QLThumbnailReplyPtr = ^QLThumbnailReply;
{$endif}

{$ifdef CLASSES}

type
  QLThumbnailReply = objcclass external (NSObject)
  public
    function init: id; message 'init';
    class function replyWithContextSize_drawingBlock (contextSize: CGSize; drawingBlock: QLThumbnailReplyReplyWithContextSizeCallback): id; message 'replyWithContextSize:drawingBlock:';
    class function replyWithContextSize_currentContextDrawingBlock (contextSize: CGSize; drawingBlock: QLThumbnailReplyReplyWithContextSizeCallback): id; message 'replyWithContextSize:currentContextDrawingBlock:';
    class function replyWithImageFileURL (fileURL: NSURL): id; message 'replyWithImageFileURL:';
  end;
{$endif}

