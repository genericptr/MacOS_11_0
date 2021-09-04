
{ Macros }
{$define __swift__ := 0}
{$define __NULL_MACRO__}
{$define __OBJC__}
{$define __OBJC2__}

{ Private types }
type
  objcboolPtr = ^objcbool;
  size_tPtr = ^size_t;

{ Dispatch }
type
  dispatch_queue_t = OpaquePointer;
  dispatch_semaphore_t = OpaquePointer;
  dispatch_block_t = OpaquePointer;
  dispatch_group_t = OpaquePointer;
  dispatch_data_t = OpaquePointer;
  dispatch_source_t = OpaquePointer;
  pthread_mutex_t = OpaquePointer;
  pthread_block_t = OpaquePointer;

{ Machine/OS }
type
  cpu_type_t = cint;
  os_log_t = pointer;

{ Cocoa types }
const
  INT32_MIN = low(cint);
  INT32_MAX = high(cint);
  UINT_MAX = high(culong);
  INTPTR_MIN = low(ptrint);
  INTPTR_MAX = high(ptrint);
  UINTPTR_MAX = high(ptruint);
  INTMAX_MIN = low(int64);
  INTMAX_MAX = high(int64);
  UINTMAX_MAX = high(qword);
  PTRDIFF_MIN = INTPTR_MIN;
  PTRDIFF_MAX = INTPTR_MAX;
  LONG_MAX = high(clong);
  LONG_MIN = low(clong);
  ULONG_MAX = high(culong);
  SHRT_MAX = high(cshort);
  INT_MAX = high(cint);
  FLT_MIN = low(cint);       // ???
  FLT_MAX = high(clong);     // ???
  DBL_MAX = high(int64);     // ???
  
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

{ Metal }
{$ifndef FRAMEWORK_LOADED_METAL}
type
  MTLPixelFormat = cuint;
{$endif}
