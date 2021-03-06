{ Parsed from AppKit.framework NSTextAttachment.h }

{$ifdef TYPES}
type
  NSTextAttachmentPtr = ^NSTextAttachment;
  NSTextAttachmentCellPtr = ^NSTextAttachmentCell;
  NSTextAttachmentContainerProtocolPtr = ^NSTextAttachmentContainerProtocol;
  NSTextAttachmentCellProtocolPtr = ^NSTextAttachmentCellProtocol;
{$endif}

{$if defined(__NULL_MACRO__)}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  NSAttachmentCharacter = $FFFC { available in macos 10.0, ios 7.0, watchos 2.0, tvos 9.0 };
{$endif}

{$ifdef PROTOCOLS}

type
  NSTextAttachmentContainerProtocol = objcprotocol external name 'NSTextAttachmentContainer' (NSObjectProtocol)
    function imageForBounds_textContainer_characterIndex (imageBounds: NSRect; textContainer: NSTextContainer; charIndex: NSUInteger): NSImage; message 'imageForBounds:textContainer:characterIndex:'; { available in macos 10.11, ios 7.0, watchos 2.0, tvos 9.0 }
    function attachmentBoundsForTextContainer_proposedLineFragment_glyphPosition_characterIndex (textContainer: NSTextContainer; lineFrag: NSRect; position: CGPoint; charIndex: NSUInteger): NSRect; message 'attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:'; { available in macos 10.11, ios 7.0, watchos 2.0, tvos 9.0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  NSTextAttachment = objcclass external (NSObject, NSTextAttachmentContainerProtocol, NSSecureCodingProtocol)
  public
    function initWithData_ofType (contentData: NSData; uti: NSString): id; message 'initWithData:ofType:'; { available in macos 10.11, ios 7.0, watchos 2.0, tvos 9.0 }
    function initWithFileWrapper (fileWrapper: NSFileWrapper): id; message 'initWithFileWrapper:';
    procedure setContents(newValue: NSData); message 'setContents:'; { available in macos 10.11, ios 7.0, watchos 2.0, tvos 9.0 }
    function contents: NSData; message 'contents'; { available in macos 10.11, ios 7.0, watchos 2.0, tvos 9.0 }
    procedure setFileType(newValue: NSString); message 'setFileType:'; { available in macos 10.11, ios 7.0, watchos 2.0, tvos 9.0 }
    function fileType: NSString; message 'fileType'; { available in macos 10.11, ios 7.0, watchos 2.0, tvos 9.0 }
    procedure setImage(newValue: NSImage); message 'setImage:'; { available in macos 10.11, ios 7.0, watchos 2.0, tvos 9.0 }
    function image: NSImage; message 'image'; { available in macos 10.11, ios 7.0, watchos 2.0, tvos 9.0 }
    procedure setBounds(newValue: NSRect); message 'setBounds:'; { available in macos 10.11, ios 7.0, watchos 2.0, tvos 9.0 }
    function bounds: NSRect; message 'bounds'; { available in macos 10.11, ios 7.0, watchos 2.0, tvos 9.0 }
    procedure setFileWrapper(newValue: NSFileWrapper); message 'setFileWrapper:';
    function fileWrapper: NSFileWrapper; message 'fileWrapper';
    procedure setAttachmentCell(newValue: NSTextAttachmentCellProtocol); message 'setAttachmentCell:'; { unavailable in ios, watchos, tvos } { available in macos 10.0 }
    function attachmentCell: NSTextAttachmentCellProtocol; message 'attachmentCell'; { unavailable in ios, watchos, tvos } { available in macos 10.0 }

    { Adopted protocols }
    function attachmentBoundsForTextContainer_proposedLineFragment_glyphPosition_characterIndex (textContainer: NSTextContainer; lineFrag: NSRect; position: CGPoint; charIndex: NSUInteger): NSRect; message 'attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:'; { available in macos 10.11, ios 7.0, watchos 2.0, tvos 9.0 }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function imageForBounds_textContainer_characterIndex (imageBounds: NSRect; textContainer: NSTextContainer; charIndex: NSUInteger): NSImage; message 'imageForBounds:textContainer:characterIndex:'; { available in macos 10.11, ios 7.0, watchos 2.0, tvos 9.0 }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSAttributedStringAttachmentConveniences = objccategory external (NSAttributedString)
    class function attributedStringWithAttachment (attachment: NSTextAttachment): NSAttributedString; message 'attributedStringWithAttachment:'; { available in macos 10.0, ios 7.0, watchos 2.0, tvos 9.0 }
  end;

type
  NSMutableAttributedStringAttachmentConveniences = objccategory external (NSMutableAttributedString)
    procedure updateAttachmentsFromPath (path: NSString); message 'updateAttachmentsFromPath:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSTextAttachmentCellProtocol = objcprotocol external name 'NSTextAttachmentCell' (NSObjectProtocol)
    procedure drawWithFrame_inView (cellFrame: NSRect; controlView: NSView); message 'drawWithFrame:inView:';
    function wantsToTrackMouse: objcbool; message 'wantsToTrackMouse';
    procedure highlight_withFrame_inView (flag: objcbool; cellFrame: NSRect; controlView: NSView); message 'highlight:withFrame:inView:';
    function trackMouse_inRect_ofView_untilMouseUp (theEvent: NSEvent; cellFrame: NSRect; controlView: NSView; flag: objcbool): objcbool; message 'trackMouse:inRect:ofView:untilMouseUp:';
    function cellSize: NSSize; message 'cellSize';
    function cellBaselineOffset: NSPoint; message 'cellBaselineOffset';
    procedure setAttachment(newValue: NSTextAttachment); message 'setAttachment:';
    function attachment: NSTextAttachment; message 'attachment';
    procedure drawWithFrame_inView_characterIndex (cellFrame: NSRect; controlView: NSView; charIndex: NSUInteger); message 'drawWithFrame:inView:characterIndex:';
    procedure drawWithFrame_inView_characterIndex_layoutManager (cellFrame: NSRect; controlView: NSView; charIndex: NSUInteger; layoutManager: NSLayoutManager); message 'drawWithFrame:inView:characterIndex:layoutManager:';
    function wantsToTrackMouseForEvent_inRect_ofView_atCharacterIndex (theEvent: NSEvent; cellFrame: NSRect; controlView: NSView; charIndex: NSUInteger): objcbool; message 'wantsToTrackMouseForEvent:inRect:ofView:atCharacterIndex:';
    function trackMouse_inRect_ofView_atCharacterIndex_untilMouseUp (theEvent: NSEvent; cellFrame: NSRect; controlView: NSView; charIndex: NSUInteger; flag: objcbool): objcbool; message 'trackMouse:inRect:ofView:atCharacterIndex:untilMouseUp:';
    function cellFrameForTextContainer_proposedLineFragment_glyphPosition_characterIndex (textContainer: NSTextContainer; lineFrag: NSRect; position: NSPoint; charIndex: NSUInteger): NSRect; message 'cellFrameForTextContainer:proposedLineFragment:glyphPosition:characterIndex:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSTextAttachmentCell = objcclass external (NSCell, NSTextAttachmentCellProtocol)

    { Adopted protocols }
    function attachment: NSTextAttachment; message 'attachment';
    function cellBaselineOffset: NSPoint; message 'cellBaselineOffset';
    function cellFrameForTextContainer_proposedLineFragment_glyphPosition_characterIndex (textContainer: NSTextContainer; lineFrag: NSRect; position: NSPoint; charIndex: NSUInteger): NSRect; message 'cellFrameForTextContainer:proposedLineFragment:glyphPosition:characterIndex:';
    procedure drawWithFrame_inView_characterIndex (cellFrame: NSRect; controlView: NSView; charIndex: NSUInteger); message 'drawWithFrame:inView:characterIndex:';
    procedure drawWithFrame_inView_characterIndex_layoutManager (cellFrame: NSRect; controlView: NSView; charIndex: NSUInteger; layoutManager: NSLayoutManager); message 'drawWithFrame:inView:characterIndex:layoutManager:';
    procedure setAttachment (newValue: NSTextAttachment); message 'setAttachment:';
    function trackMouse_inRect_ofView_atCharacterIndex_untilMouseUp (theEvent: NSEvent; cellFrame: NSRect; controlView: NSView; charIndex: NSUInteger; flag: objcbool): objcbool; message 'trackMouse:inRect:ofView:atCharacterIndex:untilMouseUp:';
    function wantsToTrackMouse: objcbool; message 'wantsToTrackMouse';
    function wantsToTrackMouseForEvent_inRect_ofView_atCharacterIndex (theEvent: NSEvent; cellFrame: NSRect; controlView: NSView; charIndex: NSUInteger): objcbool; message 'wantsToTrackMouseForEvent:inRect:ofView:atCharacterIndex:';
  end;
{$endif}

{$endif}

{$else}
{$endif}
