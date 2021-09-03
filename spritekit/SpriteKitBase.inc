{ Parsed from SpriteKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SpriteKit.framework/Headers/SpriteKitBase.h }

{$ifndef PHYSICSKIT_MINUS_GL_IMPORTS}
{$ifdef TYPES}
const
  PHYSICSKIT_MINUS_GL_IMPORTS = 1;
{$endif}

{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
const
  SKVIEW_AVAILABLE = 0;
{$endif}

{$else}
{$ifdef TYPES}
const
  SKVIEW_AVAILABLE = 1;
{$endif}

{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  SKColor = UIColor;
{$endif}

{$else}
{$ifdef TYPES}
type
  SKColor = NSColor;
{$endif}

{$endif}

{$ifndef CGVECTOR_DEFINED}
{$ifdef TYPES}
const
  CGVECTOR_DEFINED = 1;

type
  CGVector = record
    dx: CGFloat;
    dy: CGFloat;
  end;
type
  CGVectorPtr = ^CGVector;
{$endif}

{$endif}
