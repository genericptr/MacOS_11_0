{ Parsed from SpriteKit.framework SKShader.h }

{$ifdef TYPES}
type
  SKShaderPtr = ^SKShader;
{$endif}

{$ifdef CLASSES}

type
  SKShader = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function initWithSource (source: NSString): id; message 'initWithSource:';
    function initWithSource_uniforms (source: NSString; uniforms: NSArray): id; message 'initWithSource:uniforms:';
    class function shader: id; message 'shader';
    class function shaderWithSource (source: NSString): id; message 'shaderWithSource:';
    class function shaderWithSource_uniforms (source: NSString; uniforms: NSArray): id; message 'shaderWithSource:uniforms:';
    class function shaderWithFileNamed (name: NSString): id; message 'shaderWithFileNamed:';
    procedure setSource(newValue: NSString); message 'setSource:';
    function source: NSString; message 'source';
    procedure setUniforms(newValue: NSArray); message 'setUniforms:';
    function uniforms: NSArray; message 'uniforms';
    procedure addUniform (uniform: SKUniform); message 'addUniform:';
    function uniformNamed (name: NSString): SKUniform; message 'uniformNamed:';
    procedure removeUniformNamed (name: NSString); message 'removeUniformNamed:';
    procedure setAttributes(newValue: NSArray); message 'setAttributes:'; { available in ios , tvos , watchos , macos  }
    function attributes: NSArray; message 'attributes'; { available in ios , tvos , watchos , macos  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

