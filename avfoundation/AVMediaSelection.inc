{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVMediaSelection.h }

{$ifdef TYPES}
type
  AVMediaSelectionPtr = ^AVMediaSelection;
  AVMutableMediaSelectionPtr = ^AVMutableMediaSelection;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVMediaSelection = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol)
  private
    _mediaSelection: AVMediaSelectionInternal;
  public
    function asset: AVAsset; message 'asset';
    function selectedMediaOptionInMediaSelectionGroup (mediaSelectionGroup: AVMediaSelectionGroup): AVMediaSelectionOption; message 'selectedMediaOptionInMediaSelectionGroup:';
    function mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup (mediaSelectionGroup: AVMediaSelectionGroup): objcbool; message 'mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
  end;

type
  AVMutableMediaSelection = objcclass external (AVMediaSelection)
  public
    procedure selectMediaOption_inMediaSelectionGroup (mediaSelectionOption: AVMediaSelectionOption; mediaSelectionGroup: AVMediaSelectionGroup); message 'selectMediaOption:inMediaSelectionGroup:';
  end;
{$endif}

{$else}
{$endif}
