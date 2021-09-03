{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSExtensionItem.h }

{$ifdef TYPES}
type
  NSExtensionItemPtr = ^NSExtensionItem;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef CLASSES}

type
  NSExtensionItem = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    procedure setAttributedTitle(newValue: NSAttributedString); message 'setAttributedTitle:';
    function attributedTitle: NSAttributedString; message 'attributedTitle';
    procedure setAttributedContentText(newValue: NSAttributedString); message 'setAttributedContentText:';
    function attributedContentText: NSAttributedString; message 'attributedContentText';
    procedure setAttachments(newValue: NSArray); message 'setAttachments:';
    function attachments: NSArray; message 'attachments';
    procedure setUserInfo(newValue: NSDictionary); message 'setUserInfo:';
    function userInfo: NSDictionary; message 'userInfo';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSExtensionItemAttributedTitleKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSExtensionItemAttributedContentTextKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSExtensionItemAttachmentsKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

{$endif}
