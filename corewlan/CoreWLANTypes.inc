{ Parsed from CoreWLAN.framework CoreWLANTypes.h }

{$ifndef _CORE_WLAN_TYPES_H_}
{$ifdef TYPES}
type
  CWErr = NSInteger;
  CWErrPtr = ^CWErr;

const
  kCWNoErr = 0;
  kCWEAPOLErr = 1;
  kCWInvalidParameterErr = -3900;
  kCWNoMemoryErr = -3901;
  kCWUnknownErr = -3902;
  kCWNotSupportedErr = -3903;
  kCWInvalidFormatErr = -3904;
  kCWTimeoutErr = -3905;
  kCWUnspecifiedFailureErr = -3906;
  kCWUnsupportedCapabilitiesErr = -3907;
  kCWReassociationDeniedErr = -3908;
  kCWAssociationDeniedErr = -3909;
  kCWAuthenticationAlgorithmUnsupportedErr = -3910;
  kCWInvalidAuthenticationSequenceNumberErr = -3911;
  kCWChallengeFailureErr = -3912;
  kCWAPFullErr = -3913;
  kCWUnsupportedRateSetErr = -3914;
  kCWShortSlotUnsupportedErr = -3915;
  kCWDSSSOFDMUnsupportedErr = -3916;
  kCWInvalidInformationElementErr = -3917;
  kCWInvalidGroupCipherErr = -3918;
  kCWInvalidPairwiseCipherErr = -3919;
  kCWInvalidAKMPErr = -3920;
  kCWUnsupportedRSNVersionErr = -3921;
  kCWInvalidRSNCapabilitiesErr = -3922;
  kCWCipherSuiteRejectedErr = -3923;
  kCWInvalidPMKErr = -3924;
  kCWSupplicantTimeoutErr = -3925;
  kCWHTFeaturesNotSupportedErr = -3926;
  kCWPCOTransitionTimeNotSupportedErr = -3927;
  kCWReferenceNotBoundErr = -3928;
  kCWIPCFailureErr = -3929;
  kCWOperationNotPermittedErr = -3930;
  kCWErr = -3931;

type
  CWPHYMode = NSInteger;
  CWPHYModePtr = ^CWPHYMode;

const
  kCWPHYModeNone = 0;
  kCWPHYMode11a = 1;
  kCWPHYMode11b = 2;
  kCWPHYMode11g = 3;
  kCWPHYMode11n = 4;
  kCWPHYMode11ac = 5;

type
  CWInterfaceMode = NSInteger;
  CWInterfaceModePtr = ^CWInterfaceMode;

const
  kCWInterfaceModeNone = 0;
  kCWInterfaceModeStation = 1;
  kCWInterfaceModeIBSS = 2;
  kCWInterfaceModeHostAP = 3;

type
  CWSecurity = NSInteger;
  CWSecurityPtr = ^CWSecurity;

const
  kCWSecurityNone = 0;
  kCWSecurityWEP = 1;
  kCWSecurityWPAPersonal = 2;
  kCWSecurityWPAPersonalMixed = 3;
  kCWSecurityWPA2Personal = 4;
  kCWSecurityPersonal = 5;
  kCWSecurityDynamicWEP = 6;
  kCWSecurityWPAEnterprise = 7;
  kCWSecurityWPAEnterpriseMixed = 8;
  kCWSecurityWPA2Enterprise = 9;
  kCWSecurityEnterprise = 10;
  kCWSecurityWPA3Personal = 11;
  kCWSecurityWPA3Enterprise = 12;
  kCWSecurityWPA3Transition = 13;
  kCWSecurityUnknown = NSIntegerMax;

type
  CWIBSSModeSecurity = NSInteger;
  CWIBSSModeSecurityPtr = ^CWIBSSModeSecurity;

const
  kCWIBSSModeSecurityNone = 0;
  kCWIBSSModeSecurityWEP40 = 1;
  kCWIBSSModeSecurityWEP104 = 2;

type
  CWChannelWidth = NSInteger;
  CWChannelWidthPtr = ^CWChannelWidth;

const
  kCWChannelWidthUnknown = 0;
  kCWChannelWidth20MHz = 1;
  kCWChannelWidth40MHz = 2;
  kCWChannelWidth80MHz = 3;
  kCWChannelWidth160MHz = 4;

type
  CWChannelBand = NSInteger;
  CWChannelBandPtr = ^CWChannelBand;

const
  kCWChannelBandUnknown = 0;
  kCWChannelBand2GHz = 1;
  kCWChannelBand5GHz = 2;

type
  CWCipherKeyFlags = NSUInteger;
  CWCipherKeyFlagsPtr = ^CWCipherKeyFlags;

const
  kCWCipherKeyFlagsNone = 0;
  kCWCipherKeyFlagsUnicast = 1 shl 1;
  kCWCipherKeyFlagsMulticast = 1 shl 2;
  kCWCipherKeyFlagsTx = 1 shl 3;
  kCWCipherKeyFlagsRx = 1 shl 4;

type
  CWKeychainDomain = NSInteger;
  CWKeychainDomainPtr = ^CWKeychainDomain;

const
  kCWKeychainDomainNone = 0;
  kCWKeychainDomainUser = 1;
  kCWKeychainDomainSystem = 2;

type
  CWEventType = NSInteger;
  CWEventTypePtr = ^CWEventType;

const
  CWEventTypeNone = 0;
  CWEventTypePowerDidChange = 1;
  CWEventTypeSSIDDidChange = 2;
  CWEventTypeBSSIDDidChange = 3;
  CWEventTypeCountryCodeDidChange = 4;
  CWEventTypeLinkDidChange = 5;
  CWEventTypeLinkQualityDidChange = 6;
  CWEventTypeModeDidChange = 7;
  CWEventTypeScanCacheUpdated = 8;
  CWEventTypeUnknown = NSIntegerMax;
{$endif}

{$endif}
