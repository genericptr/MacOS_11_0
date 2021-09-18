{ Parsed from AppKit.framework NSUserInterfaceItemIdentification.h }

{$ifdef TYPES}
type
  NSUserInterfaceItemIdentificationProtocolPtr = ^NSUserInterfaceItemIdentificationProtocol;
{$endif}

{$ifdef TYPES}
type
  NSUserInterfaceItemIdentifier = NSString;
  NSUserInterfaceItemIdentifierPtr = ^NSUserInterfaceItemIdentifier;
{$endif}

{$ifdef PROTOCOLS}

type
  NSUserInterfaceItemIdentificationProtocol = objcprotocol external name 'NSUserInterfaceItemIdentification'
  required
    procedure setIdentifier(newValue: NSUserInterfaceItemIdentifier); message 'setIdentifier:';
    function identifier: NSUserInterfaceItemIdentifier; message 'identifier';
  end;
{$endif}

