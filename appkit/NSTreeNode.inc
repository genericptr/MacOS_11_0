{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSTreeNode.h }

{$ifdef TYPES}
type
  NSTreeNodePtr = ^NSTreeNode;
{$endif}

{$ifdef CLASSES}

type
  NSTreeNode = objcclass external (NSObject)
  public
    class function treeNodeWithRepresentedObject (modelObject: id): id; message 'treeNodeWithRepresentedObject:';
    function initWithRepresentedObject (modelObject: id): id; message 'initWithRepresentedObject:';
    function representedObject: id; message 'representedObject';
    function indexPath: NSIndexPath; message 'indexPath';
    function isLeaf: objcbool; message 'isLeaf';
    function childNodes: NSArray; message 'childNodes';
    function mutableChildNodes: NSMutableArray; message 'mutableChildNodes';
    function descendantNodeAtIndexPath (indexPath_: NSIndexPath): NSTreeNode; message 'descendantNodeAtIndexPath:';
    function parentNode: NSTreeNode; message 'parentNode';
    procedure sortWithSortDescriptors_recursively (sortDescriptors: NSArray; recursively: objcbool); message 'sortWithSortDescriptors:recursively:';
  end;
{$endif}

