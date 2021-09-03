
{ Macros }
{$define __swift__ := 0}
{$define __NULL_MACRO__}
{$define __OBJC__}
{$define __OBJC2__}

{ Private types }
type
	__NSAppleEventManagerSuspension = OpaqueRecord;
	_NSZone = OpaqueRecord;
	_NSImageCellAnimationState = Pointer;
	_CGLPBufferObject = Pointer;
	PATHSEGMENT = OpaqueRecord;
	PATHSEGMENTPtr = ^PATHSEGMENT;
	_NSModalSession = OpaqueRecord;
	NSThreadPrivate = OpaqueRecord;
	NSScreenAuxiliary = OpaqueRecord;
	__NSProgressIndicatorThreadInfo = OpaqueRecord;
	_NSImageCellAnimationStatePtr = Pointer;
	_CGLPBufferObjectPtr = Pointer;
	__NSOVRowEntryPtr = Pointer;
	objcboolPtr = ^objcbool;
	size_tPtr = ^size_t;
	OSStatusPtr = ^OSStatus;
	UTTypePtr = OpaquePointer;

{ MacOSPosix.pas }
type
	dispatch_queue_t = pointer;
  dispatch_semaphore_t = pointer;
	dispatch_block_t = pointer;
	dispatch_group_t = pointer;
	dispatch_data_t = pointer;
	pthread_mutex_t = pointer;
	pthread_block_t = pointer;

{ Security framework - SecureTransport.h }
type
	SSLProtocol = integer;
	tls_protocol_version_t = integer;


{ <mach/machine.h> }
type
	cpu_type_t = integer;

// CGWindowLevel.h constants we can't translate to FPC
const
	kCGNormalWindowLevel = -1;
  kCGFloatingWindowLevel = -1;
  kCGTornOffMenuWindowLevel = -1;
  kCGMainMenuWindowLevel = -1;
  kCGStatusWindowLevel = -1;
  kCGDockWindowLevel = -1;
  kCGModalPanelWindowLevel = -1;
  kCGPopUpMenuWindowLevel = -1;
  kCGScreenSaverWindowLevel = -1;

{ Cocoa types }
const
	UINT_MAX = high(culong);
	// 7.18.2.4 Limits of integer types capable of holding object pointers
	INTPTR_MIN = low(ptrint);
	INTPTR_MAX = high(ptrint);
	UINTPTR_MAX = high(ptruint);
	// 7.18.2.5 Limits of greatest-width integer types
	INTMAX_MIN = low(int64);
	INTMAX_MAX = high(int64);
	UINTMAX_MAX = high(qword);
	// 7.18.3 "Other"
	PTRDIFF_MIN = INTPTR_MIN;
	PTRDIFF_MAX = INTPTR_MAX;

	LONG_MAX = high(clong);
	LONG_MIN = low(clong);
	ULONG_MAX = high(culong);
	SHRT_MAX = high(cshort);
	INT_MAX = high(cint);

// ??? what are these???
const
	FLT_MIN = 0;
	FLT_MAX = 1;
	DBL_MAX = high(clong);
	
{ from IOKit (not yet part of univint) }
const
	NX_TABLET_POINTER_UNKNOWN = 0;
	NX_TABLET_POINTER_PEN = 1;
	NX_TABLET_POINTER_CURSOR = 2;
	NX_TABLET_POINTER_ERASER = 3;

	NX_SUBTYPE_DEFAULT = 0;
	NX_SUBTYPE_TABLET_POINT = 1;
	NX_SUBTYPE_TABLET_PROXIMITY = 2;
	NX_SUBTYPE_MOUSE_TOUCH = 3;

	NX_TABLET_BUTTON_PENTIPMASK = $0001;
	NX_TABLET_BUTTON_PENLOWERSIDEMASK = $0002;
	NX_TABLET_BUTTON_PENUPPERSIDEMASK = $0004;

// IOKit types
type
	IOOptionBits = UInt32;
	IOFixed = SInt32;
	IOVersion = UInt32;
	IOItemCount = UInt32;
	IOCacheMode = UInt32;
	IOByteCount = UInt32;
	IOReturn = UInt32;

// CarbonCore/Components.h
type
  ComponentRecord = record
    data:array[0..0] of clong;
  end;
  ComponentRecordPtr = ^ComponentRecord;
  Component = ^ComponentRecord;

type
  ComponentInstanceRecord = record
    data:array[0..0] of clong;
  end;
  ComponentInstanceRecordPtr = ^ComponentInstanceRecord;
  ComponentInstance = ^ComponentInstanceRecord;

// OSServices/CSIdentity
type
	CSIdentityAuthorityRef = OpaqueType;
	CSIdentityRef = OpaqueType;

// CoreAudio
type
	AudioFormatListItem = OpaqueRecord;
  AudioFormatListItemPtr = ^AudioFormatListItem;

// OpenGL
type
	CGLContextObjPtr = ^CGLContextObj;
	CGLPixelFormatObjPtr = ^CGLPixelFormatObj;
	GLfloatPtr = pointer;

// XPC
type
	xpc_object_t = OpaquePointer;
	xpc_type_t = OpaquePointer;

// Objective-C runtime
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

const
  NSIntegerMax = LONG_MAX;
  NSIntegerMin = LONG_MIN;
  NSUIntegerMax = ULONG_MAX;

const
  NSEnumerationConcurrent = 1 shl 0;
  NSEnumerationReverse = 1 shl 1;

const
  NSSortConcurrent = 1 shl 0;
  NSSortStable = 1 shl 4;
  
const
  NSQualityOfServiceUserInteractive = $21;
  NSQualityOfServiceUserInitiated = $19;
  NSQualityOfServiceUtility = $11;
  NSQualityOfServiceBackground = $09;
  NSQualityOfServiceDefault = -1;

{ Metal }
{$ifndef FRAMEWORK_LOADED_METAL}
type
	MTLPixelFormat = cuint;
{$endif}

{ SIMD Types }
type
	vector_float2 = record
	  f: array[0..2 - 1] of cfloat;
	end;
	vector_double2 = record
	  f: array[0..2 - 1] of cdouble;
	end;
  vector_float3 = record
    f: array[0..3 - 1] of cfloat;
  end;
  vector_double3 = record
    f: array[0..3 - 1] of cdouble;
  end;
  vector_float4 = record
    f: array[0..4 - 1] of cfloat;
  end;
  vector_double4 = record
    f: array[0..4 - 1] of cdouble;
  end;
  vector_int2 = record
    f: array[0..2 - 1] of cint;
  end;
  vector_int3 = record
    f: array[0..3 - 1] of cint;
  end;
  vector_int4 = record
    f: array[0..4 - 1] of cint;
  end;
  vector_uint2 = record
    f: array[0..2 - 1] of cuint;
  end;
  vector_uint3 = record
    f: array[0..3 - 1] of cuint;
  end;
  vector_uint4 = record
    f: array[0..4 - 1] of cuint;
  end;

  matrix_float2x2 = record
    f: array[0..2 - 1, 0..2 - 1] of cfloat;
  end;
  matrix_float3x3 = record
    f: array[0..3 - 1, 0..3 - 1] of cfloat;
  end;
  matrix_float4x3 = record
    f: array[0..4 - 1, 0..3 - 1] of cfloat;
  end;
  matrix_float4x4 = record
    f: array[0..4 - 1, 0..4 - 1] of cfloat;
  end;
  matrix_double4x4 = record
    f: array[0..4 - 1, 0..4 - 1] of cdouble;
  end;

  vector_int2Ptr = ^vector_int2;
  vector_int3Ptr = ^vector_int3;
  vector_int4Ptr = ^vector_int4;
  vector_uint2Ptr = ^vector_uint2;
  vector_uint3Ptr = ^vector_uint3;
  vector_uint4Ptr = ^vector_uint4;
  vector_double2Ptr = ^vector_double2;
  vector_double3Ptr = ^vector_double3;
  vector_double4Ptr = ^vector_double4;
  vector_float2Ptr = ^vector_float2;
  vector_float3Ptr = ^vector_float3;
  vector_float4Ptr = ^vector_float4;

  matrix_float2x2Ptr = ^matrix_float2x2;
  matrix_float3x3Ptr = ^matrix_float3x3;
  matrix_float4x3Ptr = ^matrix_float4x3;
  matrix_float4x4Ptr = ^matrix_float4x4;
  matrix_double4x4Ptr = ^matrix_double4x4;

  simd_quatf = record
    vector: vector_float4;
  end;
  simd_quatfPtr = ^simd_quatf;

  simd_quatd = record
    vector: vector_double4;
  end;
  simd_quatdPtr = ^simd_quatd;

  simd_float3 = vector_float3;
  simd_float4 = vector_float4;
  simd_float4x4 = matrix_float4x4;
