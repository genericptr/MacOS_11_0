{ Parsed from AddressBook.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AddressBook.framework/Headers/ABSearchElement.h }

{$ifdef TYPES}
type
  ABSearchElementPtr = ^ABSearchElement;
{$endif}

{$ifndef __ABSEARCHELEMENT__}
{$ifdef CLASSES}

type
  ABSearchElement = objcclass external (NSObject)
  public
    class function searchElementForConjunction_children (conjuction: ABSearchConjunction; children: NSArray): ABSearchElement; message 'searchElementForConjunction:children:';
    function matchesRecord (record_: ABRecord): objcbool; message 'matchesRecord:';
  end;
{$endif}

{$endif}
