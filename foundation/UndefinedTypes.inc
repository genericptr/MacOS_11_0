
type
	NSObjectPtr = ^NSObject;

{$if defined(__LP64__) or (defined(TARGET_OS_EMBEDDED) and not defined(TARGET_OS_IPHONE)) or defined(TARGET_OS_WIN32) or defined(NS_BUILD_32_LIKE_64)}
type
  NSInteger = clong;
  NSIntegerPtr = ^NSInteger;
  NSUInteger = culong;
  NSUIntegerPtr = ^NSUInteger;
{$else}
type
  NSInteger = cint;
  NSIntegerPtr = ^NSInteger;
  NSUInteger = cuint;
  NSUIntegerPtr = ^NSUInteger;
{$endif}

{ XPC }
type
	xpc_object_t = OpaquePointer;
	xpc_type_t = OpaquePointer;

{ CoreFoundation }
const
	kCFCalendarUnitWeekOfMonth = 1 shl 12;
	kCFCalendarUnitWeekOfYear = 1 shl 13;
	kCFCalendarUnitYearForWeekOfYear = 1 shl 14;

type
	uuid_t = pointer;
	au_asid_t = pid_t;

{ Security framework - SecureTransport.h }
type
	SSLProtocol = integer;
	tls_protocol_version_t = integer;
