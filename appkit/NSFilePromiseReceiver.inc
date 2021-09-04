{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSFilePromiseReceiver.h }

{$ifdef CALLBACKS}
type
  NSFilePromiseReceiverReceivePromisedFilesAtDestinationCallback = reference to procedure (fileURL: NSURL; errorOrNil: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSFilePromiseReceiverPtr = ^NSFilePromiseReceiver;
{$endif}

{$ifdef CLASSES}

type
  NSFilePromiseReceiver = objcclass external (NSObject, NSPasteboardReadingProtocol)
  public
    class function readableDraggedTypes: NSArray; message 'readableDraggedTypes';
    function fileTypes: NSArray; message 'fileTypes';
    function fileNames: NSArray; message 'fileNames';
    procedure receivePromisedFilesAtDestination_options_operationQueue_reader (destinationDir: NSURL; options: NSDictionary; operationQueue: NSOperationQueue; reader: NSFilePromiseReceiverReceivePromisedFilesAtDestinationCallback); message 'receivePromisedFilesAtDestination:options:operationQueue:reader:';

    { Adopted protocols }
    function initWithPasteboardPropertyList_ofType (propertyList: id; type_: NSPasteboardType): id; message 'initWithPasteboardPropertyList:ofType:';
    class function readableTypesForPasteboard (pasteboard: NSPasteboard): NSArray; message 'readableTypesForPasteboard:';
    class function readingOptionsForType_pasteboard (type_: NSPasteboardType; pasteboard: NSPasteboard): NSPasteboardReadingOptions; message 'readingOptionsForType:pasteboard:';
  end;
{$endif}

