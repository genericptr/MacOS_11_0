{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKContentRuleListStore.h }

{$ifdef CALLBACKS}
type
  WKContentRuleListStoreCompileContentRuleListForIdentifierCallback = reference to function (param1: WKContentRuleList; param2: NSError): pointer; cblock; cdecl;
  WKContentRuleListStoreLookUpContentRuleListForIdentifierCallback = reference to function (param1: WKContentRuleList; param2: NSError): pointer; cblock; cdecl;
  WKContentRuleListStoreRemoveContentRuleListForIdentifierCallback = reference to function (param1: NSError): pointer; cblock; cdecl;
  WKContentRuleListStoreGetAvailableContentRuleListIdentifiersCallback = reference to function (param1: NSArray): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  WKContentRuleListStorePtr = ^WKContentRuleListStore;
{$endif}

{$ifdef CLASSES}

type
  WKContentRuleListStore = objcclass external (NSObject)
  public
    class function defaultStore: id; message 'defaultStore';
    class function storeWithURL (url: NSURL): id; message 'storeWithURL:';
    procedure compileContentRuleListForIdentifier_encodedContentRuleList_completionHandler (identifier: NSString; encodedContentRuleList: NSString; completionHandler: WKContentRuleListStoreCompileContentRuleListForIdentifierCallback); message 'compileContentRuleListForIdentifier:encodedContentRuleList:completionHandler:';
    procedure lookUpContentRuleListForIdentifier_completionHandler (identifier: NSString; completionHandler: WKContentRuleListStoreLookUpContentRuleListForIdentifierCallback); message 'lookUpContentRuleListForIdentifier:completionHandler:';
    procedure removeContentRuleListForIdentifier_completionHandler (identifier: NSString; completionHandler: WKContentRuleListStoreRemoveContentRuleListForIdentifierCallback); message 'removeContentRuleListForIdentifier:completionHandler:';
    procedure getAvailableContentRuleListIdentifiers (completionHandler: WKContentRuleListStoreGetAvailableContentRuleListIdentifiersCallback); message 'getAvailableContentRuleListIdentifiers:';
  end;
{$endif}

