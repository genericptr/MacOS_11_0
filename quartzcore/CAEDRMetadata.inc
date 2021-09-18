{ Parsed from QuartzCore.framework CAEDRMetadata.h }

{$ifdef TYPES}
type
  CAEDRMetadataPtr = ^CAEDRMetadata;
{$endif}

{$ifndef CAEDRMetadata_h}
{$ifdef CLASSES}

type
  CAEDRMetadata = objcclass external (NSObject)
  private
    _priv: _CAEDRMetadataPrivatePtr;
  public
    function init: id; message 'init';
    class function HDR10MetadataWithDisplayInfo_contentInfo_opticalOutputScale (displayData: NSData; contentData: NSData; scale: single): CAEDRMetadata; message 'HDR10MetadataWithDisplayInfo:contentInfo:opticalOutputScale:';
    class function HDR10MetadataWithMinLuminance_maxLuminance_opticalOutputScale (minNits: single; maxNits: single; scale: single): CAEDRMetadata; message 'HDR10MetadataWithMinLuminance:maxLuminance:opticalOutputScale:';
    class function HLGMetadata: CAEDRMetadata; message 'HLGMetadata';
  end;
{$endif}

{$endif}
