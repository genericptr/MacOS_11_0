{ Parsed from QuickLook.framework QLBase.h }

{$if  not (defined(__QUICKLOOK_QLBASE__))}

{$ifdef TYPES}
const
  QUICKLOOK_VERSION = 6250;
{$endif}

{$if defined(__OBJC_GC__)}
{$ifdef TYPES}
const
  QL_STRONG_REF = __strong;
{$endif}

{$else}
{$endif}
{$endif}
