{ Parsed from PrintCore.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/PrintCore.framework/Headers/PMPrintSettingsKeys.h }

{$ifndef __PMPRINTSETTINGSKEYS__}

{$ifdef TYPES}
const
  kPMCopiesStr = 'com.apple.print.PrintSettings.PMCopies';
  kPMCopyCollateStr = 'com.apple.print.PrintSettings.PMCopyCollate';
  kPMOutputOrderStr = 'OutputOrder';
  kPMPageSetStr = 'page-set';
  kPMMirrorStr = 'mirror';
  kPMPrintSelectionOnlyStr = 'com.apple.print.PrintSettings.PMPrintSelectionOnly';
  kPMBorderStr = 'com.apple.print.PrintSettings.PMBorder';
  kPMBorderTypeStr = 'com.apple.print.PrintSettings.PMBorderType';
  kPMLayoutNUpStr = 'com.apple.print.PrintSettings.PMLayoutNUp';
  kPMLayoutRowsStr = 'com.apple.print.PrintSettings.PMLayoutRows';
  kPMLayoutColumnsStr = 'com.apple.print.PrintSettings.PMLayoutColumns';
  kPMLayoutDirectionStr = 'com.apple.print.PrintSettings.PMLayoutDirection';
  kPMLayoutTileOrientationStr = 'com.apple.print.PrintSettings.PMLayoutTileOrientation';
  kPMJobStateStr = 'com.apple.print.PrintSettings.PMJobState';
  kPMJobHoldUntilTimeStr = 'com.apple.print.PrintSettings.PMJobHoldUntilTime';
  kPMJobPriorityStr = 'com.apple.print.PrintSettings.PMJobPriority';
  kPMDuplexingStr = 'com.apple.print.PrintSettings.PMDuplexing';
  kPMColorSyncProfileIDStr = 'com.apple.print.PrintSettings.PMColorSyncProfileID';
  kPMPrimaryPaperFeedStr = 'com.apple.print.PrintSettings.PMPrimaryPaperFeed';
  kPMSecondaryPaperFeedStr = 'com.apple.print.PrintSettings.PMSecondaryPaperFeed';
  kPMPSErrorHandlerStr = 'com.apple.print.PrintSettings.PMPSErrorHandler';
  kPMPSTraySwitchStr = 'com.apple.print.PrintSettings.PMPSTraySwitch';
  kPMTotalBeginPagesStr = 'com.apple.print.PrintSettings.PMTotalBeginPages';
  kPMTotalSidesImagedStr = 'com.apple.print.PrintSettings.PMTotalSidesImaged';
  kPMFitToPageStr = 'fit-to-page';
  kPMUseOptionalPINStr = 'com.apple.print.PrintSettings.PMUseOptionalPIN';
  kPMUseOptionalAccountIDStr = 'com.apple.print.PrintSettings.PMUseOptionalAccountID';
  kPMFaxNumberStr = 'phone';
  kPMFaxToStr = 'faxTo';
  kPMFaxPrefixStr = 'faxPrefix';
  kPMFaxSubjectStr = 'faxSubject';
  kPMFaxCoverSheetStr = 'faxCoverSheet';
  kPMFaxCoverSheetMessageStr = 'faxCoverSheetMessage';
  kPMFaxToneDialingStr = 'faxToneDialing';
  kPMFaxUseSoundStr = 'faxUseSound';
  kPMFaxWaitForDialToneStr = 'faxWaitForDialTone';
  kPMFaxToLabelStr = 'faxToLabel';
  kPMFaxFromLabelStr = 'faxFromLabel';
  kPMFaxDateLabelStr = 'faxDateLabel';
  kPMFaxSubjectLabelStr = 'faxSubjectLabel';
  kPMFaxSheetsLabelStr = 'faxSheetsLabel';
  kPMCoverPageStr = 'com.apple.print.PrintSettings.PMCoverPage';

const
  kPMCoverPageNone = 1;
  kPMCoverPageBefore = 2;
  kPMCoverPageAfter = 3;

const
  kPMCoverPageDefault = kPMCoverPageNone;
  kPMCoverPageSourceStr = 'com.apple.print.PrintSettings.PMCoverPageSource';
  kPMDestinationPrinterIDStr = 'DestinationPrinterID';
  kPMInlineWorkflowStr = 'inlineWorkflow';
  kPMPageToPaperMappingTypeStr = 'com.apple.print.PageToPaperMappingType';
  kPMPageToPaperMediaNameStr = 'com.apple.print.PageToPaperMappingMediaName';
  kPMPageToPaperMappingAllowScalingUpStr = 'com.apple.print.PageToPaperMappingAllowScalingUp';
  kPMCustomProfilePathStr = 'PMCustomProfilePath';

const
  kPMPageToPaperMappingNone = 1;
  kPMPageToPaperMappingScaleToFit = 2;
type
  PMPageToPaperMappingType = clong;

const
  kPMVendorColorMatchingStr = 'AP_VendorColorMatching';
  kPMApplicationColorMatchingStr = 'AP_ApplicationColorMatching';
  kPMColorMatchingModeStr = 'AP_ColorMatchingMode';
  kPMDestinationTypeStr = 'com.apple.print.PrintSettings.PMDestinationType';
  kPMOutputFilenameStr = 'com.apple.print.PrintSettings.PMOutputFilename';
{$endif}

{$endif}
