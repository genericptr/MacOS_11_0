{ Parsed from AVFoundation.framework AVPlayerMediaSelectionCriteria.h }

{$ifdef TYPES}
type
  AVPlayerMediaSelectionCriteriaPtr = ^AVPlayerMediaSelectionCriteria;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVPlayerMediaSelectionCriteria = objcclass external (NSObject)
  private
    _criteriaInternal: pointer;
  public
    function preferredLanguages: NSArray; message 'preferredLanguages';
    function preferredMediaCharacteristics: NSArray; message 'preferredMediaCharacteristics';
    function principalMediaCharacteristics: NSArray; message 'principalMediaCharacteristics'; { available in macos , ios , tvos , watchos  }
    function initWithPreferredLanguages_preferredMediaCharacteristics (preferredLanguages_: NSArray; preferredMediaCharacteristics_: NSArray): id; message 'initWithPreferredLanguages:preferredMediaCharacteristics:';
    function initWithPrincipalMediaCharacteristics_preferredLanguages_preferredMediaCharacteristics (principalMediaCharacteristics_: NSArray; preferredLanguages_: NSArray; preferredMediaCharacteristics_: NSArray): id; message 'initWithPrincipalMediaCharacteristics:preferredLanguages:preferredMediaCharacteristics:'; { available in macos , ios , tvos , watchos  }
  end;
{$endif}

{$else}
{$endif}
