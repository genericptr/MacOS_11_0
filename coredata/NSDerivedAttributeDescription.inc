{ Parsed from CoreData.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreData.framework/Headers/NSDerivedAttributeDescription.h }

{$ifdef TYPES}
type
  NSDerivedAttributeDescriptionPtr = ^NSDerivedAttributeDescription;
{$endif}

{$ifdef CLASSES}

type
  NSDerivedAttributeDescription = objcclass external (NSAttributeDescription)
  public
    procedure setDerivationExpression(newValue: NSExpression); message 'setDerivationExpression:';
    function derivationExpression: NSExpression; message 'derivationExpression';
  end;
{$endif}

