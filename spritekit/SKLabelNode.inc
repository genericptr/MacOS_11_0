{ Parsed from SpriteKit.framework SKLabelNode.h }

{$ifdef TYPES}
type
  SKLabelNodePtr = ^SKLabelNode;
{$endif}

{$ifdef TYPES}
type
  SKLabelVerticalAlignmentMode = NSInteger;
  SKLabelVerticalAlignmentModePtr = ^SKLabelVerticalAlignmentMode;

const
  SKLabelVerticalAlignmentModeBaseline = 0;
  SKLabelVerticalAlignmentModeCenter = 1;
  SKLabelVerticalAlignmentModeTop = 2;
  SKLabelVerticalAlignmentModeBottom = 3;

type
  SKLabelHorizontalAlignmentMode = NSInteger;
  SKLabelHorizontalAlignmentModePtr = ^SKLabelHorizontalAlignmentMode;

const
  SKLabelHorizontalAlignmentModeCenter = 0;
  SKLabelHorizontalAlignmentModeLeft = 1;
  SKLabelHorizontalAlignmentModeRight = 2;
{$endif}

{$ifdef CLASSES}

type
  SKLabelNode = objcclass external (SKNode)
  public
    class function labelNodeWithText (text: NSString): id; message 'labelNodeWithText:';
    class function labelNodeWithAttributedText (attributedText: NSAttributedString): id; message 'labelNodeWithAttributedText:'; { available in ios 11.0, tvos 11.0, watchos 4.0, macos 10.13 }
    class function labelNodeWithFontNamed (fontName: NSString): id; message 'labelNodeWithFontNamed:';
    function initWithFontNamed (fontName: NSString): id; message 'initWithFontNamed:';
    procedure setVerticalAlignmentMode(newValue: SKLabelVerticalAlignmentMode); message 'setVerticalAlignmentMode:';
    function verticalAlignmentMode: SKLabelVerticalAlignmentMode; message 'verticalAlignmentMode';
    procedure setHorizontalAlignmentMode(newValue: SKLabelHorizontalAlignmentMode); message 'setHorizontalAlignmentMode:';
    function horizontalAlignmentMode: SKLabelHorizontalAlignmentMode; message 'horizontalAlignmentMode';
    procedure setNumberOfLines(newValue: NSInteger); message 'setNumberOfLines:'; { available in ios 11.0, tvos 11.0, macos 10.13, watchos 4.0 }
    function numberOfLines: NSInteger; message 'numberOfLines'; { available in ios 11.0, tvos 11.0, macos 10.13, watchos 4.0 }
    procedure setLineBreakMode(newValue: NSLineBreakMode); message 'setLineBreakMode:'; { available in ios 11.0, tvos 11.0, macos 10.13, watchos 4.0 }
    function lineBreakMode: NSLineBreakMode; message 'lineBreakMode'; { available in ios 11.0, tvos 11.0, macos 10.13, watchos 4.0 }
    procedure setPreferredMaxLayoutWidth(newValue: CGFloat); message 'setPreferredMaxLayoutWidth:'; { available in ios 11.0, tvos 11.0, macos 10.13, watchos 4.0 }
    function preferredMaxLayoutWidth: CGFloat; message 'preferredMaxLayoutWidth'; { available in ios 11.0, tvos 11.0, macos 10.13, watchos 4.0 }
    procedure setFontName(newValue: NSString); message 'setFontName:';
    function fontName: NSString; message 'fontName';
    procedure setText(newValue: NSString); message 'setText:';
    function text: NSString; message 'text';
    procedure setAttributedText(newValue: NSAttributedString); message 'setAttributedText:'; { available in ios 11.0, tvos 11.0, macos 10.13, watchos 4.0 }
    function attributedText: NSAttributedString; message 'attributedText'; { available in ios 11.0, tvos 11.0, macos 10.13, watchos 4.0 }
    procedure setFontSize(newValue: CGFloat); message 'setFontSize:';
    function fontSize: CGFloat; message 'fontSize';
    procedure setFontColor(newValue: SKColor); message 'setFontColor:';
    function fontColor: SKColor; message 'fontColor';
    procedure setColorBlendFactor(newValue: CGFloat); message 'setColorBlendFactor:';
    function colorBlendFactor: CGFloat; message 'colorBlendFactor';
    procedure setColor(newValue: SKColor); message 'setColor:';
    function color: SKColor; message 'color';
    procedure setBlendMode(newValue: SKBlendMode); message 'setBlendMode:';
    function blendMode: SKBlendMode; message 'blendMode';
  end;
{$endif}

