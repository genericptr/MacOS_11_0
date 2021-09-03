{ Parsed from PrintCore.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/PrintCore.framework/Headers/PMErrors.h }

{$ifndef __PMERRORS__}

{$ifdef TYPES}
const
  {$if defined(__NULL_MACRO__)}
  kPMNoError = noErr;
  kPMGeneralError = -30870;
  kPMOutOfScope = -30871;
  kPMInvalidParameter = paramErr;
  kPMNoDefaultPrinter = -30872;
  kPMNotImplemented = -30873;
  kPMNoSuchEntry = -30874;
  kPMInvalidPrintSettings = -30875;
  kPMInvalidPageFormat = -30876;
  kPMValueOutOfRange = -30877;
  kPMInvalidPrintSession = -30879;
  kPMInvalidPrinter = -30880;
  kPMObjectInUse = -30881;
  kPMInvalidPreset = -30899;
  {$endif}
  kPMAllocationFailure = memFullErr;
  kPMInternalError = kPMGeneralError;
  kPMInvalidIndex = -30882;
  kPMStringConversionFailure = -30883;
  kPMXMLParseError = -30884;
  kPMInvalidJobTemplate = -30885;
  kPMInvalidPrinterInfo = -30886;
  kPMInvalidConnection = -30887;
  kPMInvalidKey = -30888;
  kPMInvalidValue = -30889;
  kPMInvalidAllocator = -30890;
  kPMInvalidTicket = -30891;
  kPMInvalidItem = -30892;
  kPMInvalidType = -30893;
  kPMInvalidReply = -30894;
  kPMInvalidFileType = -30895;
  kPMInvalidObject = -30896;
  kPMInvalidPaper = -30897;
  kPMInvalidCalibrationTarget = -30898;
  kPMNoDefaultItem = -9500;
  kPMNoDefaultSettings = -9501;
  kPMInvalidPDEContext = -9530;
  kPMDontSwitchPDEError = -9531;
  kPMUnableToFindProcess = -9532;
  kPMFeatureNotInstalled = -9533;
  kPMInvalidPBMRef = -9540;
  kPMNoSelectedPrinters = -9541;
  kPMInvalidLookupSpec = -9542;
  kPMSyncRequestFailed = -9543;
  kPMEditRequestFailed = -9544;
  kPMPrBrowserNoUI = -9545;
  kPMTicketTypeNotFound = -9580;
  kPMUpdateTicketFailed = -9581;
  kPMValidateTicketFailed = -9582;
  kPMSubTicketNotFound = -9583;
  kPMInvalidSubTicket = -9584;
  kPMDeleteSubTicketFailed = -9585;
  kPMItemIsLocked = -9586;
  kPMTicketIsLocked = -9587;
  kPMTemplateIsLocked = -9588;
  kPMKeyNotFound = -9589;
  kPMKeyNotUnique = -9590;
  kPMUnknownDataType = -9591;
  kPMCreateMessageFailed = -9620;
  kPMServerCommunicationFailed = -9621;
  kPMKeyOrValueNotFound = -9623;
  kPMMessagingError = -9624;
  kPMServerNotFound = -9630;
  kPMServerAlreadyRunning = -9631;
  kPMServerSuspended = -9632;
  kPMServerAttributeRestricted = -9633;
  kPMFileOrDirOperationFailed = -9634;
  kPMUserOrGroupNotFound = -9635;
  kPMPermissionError = -9636;
  kPMUnknownMessage = -9637;
  kPMQueueNotFound = -9638;
  kPMQueueAlreadyExists = -9639;
  kPMQueueJobFailed = -9640;
  kPMJobNotFound = -9641;
  kPMJobBusy = -9642;
  kPMJobCanceled = -9643;
  kPMDocumentNotFound = -9644;
  kPMPMSymbolNotFound = -9660;
  kPMIOMSymbolNotFound = -9661;
  kPMCVMSymbolNotFound = -9662;
  kPMInvalidPMContext = -9663;
  kPMInvalidIOMContext = -9664;
  kPMInvalidCVMContext = -9665;
  kPMInvalidJobID = -9666;
  kPMNoPrinterJobID = -9667;
  kPMJobStreamOpenFailed = -9668;
  kPMJobStreamReadFailed = -9669;
  kPMJobStreamEndError = -9670;
  kPMJobManagerAborted = -9671;
  kPMJobGetTicketBadFormatError = -9672;
  kPMJobGetTicketReadError = -9673;
  kPMPluginNotFound = -9701;
  kPMPluginRegisterationFailed = -9702;
  kPMFontNotFound = -9703;
  kPMFontNameTooLong = -9704;
  kPMGeneralCGError = -9705;
  kPMInvalidState = -9706;
  kPMUnexpectedImagingError = -9707;
  kPMInvalidPrinterAddress = -9780;
  kPMOpenFailed = -9781;
  kPMReadFailed = -9782;
  kPMWriteFailed = -9783;
  kPMStatusFailed = -9784;
  kPMCloseFailed = -9785;
  kPMUnsupportedConnection = -9786;
  kPMIOAttrNotAvailable = -9787;
  kPMReadGotZeroData = -9788;
  kPMLastErrorCodeToMakeMaintenanceOfThisListEasier = -9799;
{$endif}

{$endif}
