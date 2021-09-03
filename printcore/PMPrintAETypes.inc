{ Parsed from PrintCore.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/PrintCore.framework/Headers/PMPrintAETypes.h }

{$ifndef __PMPrintAETypes__}

{$ifdef TYPES}
const
  kPMPrintSettingsAEType = 'pset';
  kPMShowPrintDialogAEType = 'pdlg';
  kPMPrinterAEType = 'trpr';
  kPMCopiesAEProp = 'copies';
  kPMCopiesAEKey = 'lwcp';
  kPMCopieAEType = typeSInt32;
  kPMCollateAEProp = 'collating';
  kPMCollateAEKey = 'lwcl';
  kPMCollateAEType = typeBoolean;
  kPMFirstPageAEProp = 'starting page';
  kPMFirstPageAEKey = 'lwfp';
  kPMFirstPageAEType = typeSInt32;
  kPMLastPageAEProp = 'ending page';
  kPMLastPageAEKey = 'lwlp';
  kPMLastPageAEType = typeSInt32;
  kPMLayoutAcrossAEProp = 'pages across';
  kPMLayoutAcrossAEKey = 'lwla';
  kPMLayoutAcrossAEType = typeSInt32;
  kPMLayoutDownAEProp = 'pages down';
  kPMLayoutDownAEKey = 'lwld';
  kPMLayoutDownAEType = typeSInt32;
  kPMErrorHandlingAEProp = 'error handling';
  kPMErrorHandlingAEKey = 'lweh';
  kPMErrorHandlingAEType = typeEnumerated;
  kPMPrintTimeAEProp = 'requested print time';
  kPMPrintTimeAEKey = 'lwqt';
  kPMPrintTimeAEType = cLongDateTime;
  kPMFeatureAEProp = 'printer features';
  kPMFeatureAEKey = 'lwpf';
  kPMFeatureAEType = typeAEList;
  kPMFaxNumberAEProp = 'fax number';
  kPMFaxNumberAEKey = 'faxn';
  kPMFaxNumberAEType = typeChar;
  kPMTargetPrinterAEProp = 'target printer';
  kPMTargetPrinterAEKey = 'trpr';
  kPMTargetPrinterAEType = typeChar;
  kPMPDFWorkFlowAEProp = 'PDF work flow';
  kPMPDFWorkFlowAEKey = 'wrkf';
  kPMPDFWorkFlowAEType = typeUTF8Text;
  kPMPresetAEProp = 'preset';
  kPMPresetAEKey = 'prst';
  kPMPresetAEType = typeUTF8Text;
  kPMSaveAsPDFAEProp = 'save as PDF';
  kPMSaveAsPDFAEKey = 'spdf';
  kPMSaveAsPDFAEType = typeFileURL;
  kPMSaveAsPSAEProp = 'save as PS';
  kPMSaveAsPSAEKey = 'sps ';
  kPMSaveAsPSAEType = typeFileURL;
  kPMErrorHandlingStandardEnum = 'lwst';
  kPMErrorHandlingDetailedEnum = 'lwdt';
{$endif}

{$endif}
