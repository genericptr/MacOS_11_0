{ Parsed from PrintCore.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/PrintCore.framework/Headers/PMDefinitions.h }

{$ifndef __PMDEFINITIONS__}

{$ifdef TYPES}
type
  PMObject = pointer;
  PMObjectPtr = ^PMObject;
  PMPrintSettings = OpaqueType;
  PMPrintSettingsPtr = ^PMPrintSettings;
  PMPageFormat = OpaqueType;
  PMPageFormatPtr = ^PMPageFormat;
  PMPrintSession = OpaqueType;
  PMPrintSessionPtr = ^PMPrintSession;
  PMPrinter = OpaqueType;
  PMPrinterPtr = ^PMPrinter;
  PMServer = OpaqueType;
  PMServerPtr = ^PMServer;
  PMPreset = OpaqueType;
  PMPresetPtr = ^PMPreset;
  PMPaper = OpaqueType;
  PMPaperPtr = ^PMPaper;

const
  kPMCancel = $0080;

const
  kPMDuplexDefault = kPMDuplexNone;

type
  PMDestinationType = UInt16;
  PMDestinationTypePtr = ^PMDestinationType;

const
  kPMDestinationInvalid = 0;
  kPMDestinationPrinter = 1;
  kPMDestinationFile = 2;
  kPMDestinationFax = 3;
  kPMDestinationPreview = 4;
  kPMDestinationProcessPDF = 5;

const
  kPMDestinationTypeDefault = kPMDestinationPrinter;

type
  PMOrientation = UInt16;
  PMOrientationPtr = ^PMOrientation;

const
  kPMPortrait = 1;
  kPMLandscape = 2;
  kPMReversePortrait = 3;
  kPMReverseLandscape = 4;

type
  PMPrinterState = UInt16;
  PMPrinterStatePtr = ^PMPrinterState;

const
  kPMPrinterIdle = 3;
  kPMPrinterProcessing = 4;
  kPMPrinterStopped = 5;

type
  PMColorSpaceModel = UInt32;
  PMColorSpaceModelPtr = ^PMColorSpaceModel;

const
  kPMUnknownColorSpaceModel = 0;
  kPMGrayColorSpaceModel = 1;
  kPMRGBColorSpaceModel = 2;
  kPMCMYKColorSpaceModel = 3;
  kPMDevNColorSpaceModel = 4;

const
  kPMColorSpaceModelCount = 4;

type
  PMQualityMode = UInt32;
  PMQualityModePtr = ^PMQualityMode;

const
  kPMQualityLowest = $0000;
  kPMQualityInkSaver = $0001;
  kPMQualityDraft = $0004;
  kPMQualityNormal = $0008;
  kPMQualityPhoto = $000B;
  kPMQualityBest = $000D;
  kPMQualityHighest = $000F;

type
  PMPaperType = UInt32;
  PMPaperTypePtr = ^PMPaperType;

const
  kPMPaperTypeUnknown = $0000;
  kPMPaperTypePlain = $0001;
  kPMPaperTypeCoated = $0002;
  kPMPaperTypePremium = $0003;
  kPMPaperTypeGlossy = $0004;
  kPMPaperTypeTransparency = $0005;
  kPMPaperTypeTShirt = $0006;

type
  PMScalingAlignment = UInt16;
  PMScalingAlignmentPtr = ^PMScalingAlignment;

const
  kPMScalingPinTopLeft = 1;
  kPMScalingPinTopRight = 2;
  kPMScalingPinBottomLeft = 3;
  kPMScalingPinBottomRight = 4;
  kPMScalingCenterOnPaper = 5;
  kPMScalingCenterOnImgArea = 6;

type
  PMDuplexMode = UInt32;
  PMDuplexModePtr = ^PMDuplexMode;

const
  kPMDuplexNone = $0001;
  kPMDuplexNoTumble = $0002;
  kPMDuplexTumble = $0003;
  kPMSimplexTumble = $0004;

type
  PMLayoutDirection = UInt16;
  PMLayoutDirectionPtr = ^PMLayoutDirection;

const
  kPMLayoutLeftRightTopBottom = 1;
  kPMLayoutLeftRightBottomTop = 2;
  kPMLayoutRightLeftTopBottom = 3;
  kPMLayoutRightLeftBottomTop = 4;
  kPMLayoutTopBottomLeftRight = 5;
  kPMLayoutTopBottomRightLeft = 6;
  kPMLayoutBottomTopLeftRight = 7;
  kPMLayoutBottomTopRightLeft = 8;

type
  PMBorderType = UInt16;
  PMBorderTypePtr = ^PMBorderType;

const
  kPMBorderSingleHairline = 1;
  kPMBorderDoubleHairline = 2;
  kPMBorderSingleThickline = 3;
  kPMBorderDoubleThickline = 4;

type
  PMPrintDialogOptionFlags = OptionBits;
  PMPrintDialogOptionFlagsPtr = ^PMPrintDialogOptionFlags;

const
  kPMHideInlineItems = 0 shl 0;
  kPMShowDefaultInlineItems = 1 shl 15;
  kPMShowInlineCopies = 1 shl 0;
  kPMShowInlinePageRange = 1 shl 1;
  kPMShowInlinePageRangeWithSelection = 1 shl 6;
  kPMShowInlinePaperSize = 1 shl 2;
  kPMShowInlineOrientation = 1 shl 3;
  kPMShowInlineScale = 1 shl 7;
  kPMShowPageAttributesPDE = 1 shl 8;

type
  PMPPDDomain = UInt16;
  PMPPDDomainPtr = ^PMPPDDomain;

const
  kAllPPDDomains = 1;
  kSystemPPDDomain = 2;
  kLocalPPDDomain = 3;
  kNetworkPPDDomain = 4;
  kUserPPDDomain = 5;
  kCUPSPPDDomain = 6;

const
  kPMPPDDescriptionType = 'PMPPDDescriptionType';
  kPMDocumentFormatDefault = 'com.apple.documentformat.default';
  kPMDocumentFormatPDF = 'application/pdf';
  kPMDocumentFormatPostScript = 'application/postscript';
  kPMGraphicsContextDefault = 'com.apple.graphicscontext.default';
  kPMGraphicsContextCoreGraphics = 'com.apple.graphicscontext.coregraphics';
  kPDFWorkflowItemURLKey = 'itemURL';
  kPDFWorkflowDisplayNameKey = 'displayName';
  kPDFWorkflowItemsKey = 'items';
  kPDFWorkflowModifiedKey = 'wasModifiedInline';
  kPMPrintSelectionTitleKey = 'com.apple.printSelection.title';

const
  kPMPrintAllPages = -1;
const
  kPMUnlocked = false;

type
  PMRect = record
    top: double;
    left: double;
    bottom: double;
    right: double;
  end;
type
  PMRectPtr = ^PMRect;
type
  PMResolution = record
    hRes: double;
    vRes: double;
  end;
type
  PMResolutionPtr = ^PMResolution;
type
  PMLanguageInfo = record
    level: Str32;
    version: Str32;
    release: Str32;
  end;
type
  PMLanguageInfoPtr = ^PMLanguageInfo;

type
  PMPaperMargins = PMRect;
  PMPaperMarginsPtr = ^PMPaperMargins;

const
  kPMDataFormatXMLDefault = 0;
  kPMDataFormatXMLMinimal = 1;
  kPMDataFormatXMLCompressed = 2;

type
  PMDataFormat = clong;
  PMDataFormatPtr = ^PMDataFormat;

const
  kPMPresetGraphicsTypeKey = 'com.apple.print.preset.graphicsType';
  kPMPresetGraphicsTypePhoto = 'Photo';
  kPMPresetGraphicsTypeAll = 'All';
  kPMPresetGraphicsTypeGeneral = 'General';
  kPMPresetGraphicsTypeNone = 'None';
{$endif}

{$endif}
