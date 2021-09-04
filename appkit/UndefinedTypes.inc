
// These types are missing or wrong in MacGL
type
	GLenumPtr = ^GLenum;
	GLbooleanPtr = ^GLboolean;
	GLbitfieldPtr = ^GLbitfield;
	GLbytePtr = ^GLbyte;
	GLshortPtr = ^GLshort;
	GLintPtr = ^GLint;
	GLsizeiPtr = ^GLsizei;
	GLubytePtr = ^GLubyte;
	GLushortPtr = ^GLushort;
	GLuintPtr = ^GLuint;
	GLclampfPtr = ^GLclampf;
	GLdoublePtr = ^GLdouble;
	GLclampdPtr = ^GLclampd;
	
{$if defined(TARGET_OS_IPHONE)}
type
	UIImagePtr = ^UIImage;
{$endif}

{ CGWindowLevel.h }
const
	kCGNumReservedWindowLevels = 			16;
	kCGNumReservedBaseWindowLevels =  5;

	kCGBaseWindowLevel =              INT32_MIN;
	kCGMinimumWindowLevel =           (kCGBaseWindowLevel + kCGNumReservedBaseWindowLevels);
	kCGMaximumWindowLevel =           (INT32_MAX - kCGNumReservedWindowLevels);
	kCGDesktopWindowLevel =           (kCGMinimumWindowLevel + 20);
	kCGDesktopIconWindowLevel =       (kCGDesktopWindowLevel + 20);
	kCGBackstopMenuLevel =            -20;
	kCGNormalWindowLevel =            0;
	kCGFloatingWindowLevel =          3;
	kCGTornOffMenuWindowLevel =       3;
	kCGModalPanelWindowLevel =        8;
	kCGUtilityWindowLevel =           19;
	kCGDockWindowLevel =              20;
	kCGMainMenuWindowLevel =          24;
	kCGStatusWindowLevel =            25;
	kCGPopUpMenuWindowLevel =         101;
	kCGOverlayWindowLevel =           102;
	kCGHelpWindowLevel =              200;
	kCGDraggingWindowLevel =          500;
	kCGScreenSaverWindowLevel =       1000;
	kCGAssistiveTechHighWindowLevel = 1500;
	kCGCursorWindowLevel =            (kCGMaximumWindowLevel - 1);
