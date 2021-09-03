{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSSpellProtocol.h }

{$ifdef TYPES}
type
  NSChangeSpellingProtocolPtr = ^NSChangeSpellingProtocol;
  NSIgnoreMisspelledWordsProtocolPtr = ^NSIgnoreMisspelledWordsProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  NSChangeSpellingProtocol = objcprotocol external name 'NSChangeSpelling'
    procedure changeSpelling (sender: id); message 'changeSpelling:';
  end;

type
  NSIgnoreMisspelledWordsProtocol = objcprotocol external name 'NSIgnoreMisspelledWords'
    procedure ignoreSpelling (sender: id); message 'ignoreSpelling:';
  end;
{$endif}

