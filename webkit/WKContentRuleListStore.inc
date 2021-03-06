{ Parsed from WebKit.framework WKContentRuleListStore.h }

{$ifdef CALLBACKS}
type
  WKContentRuleListStoreCompileContentRuleListForIdentifierCallback = reference to procedure (param1: WKContentRuleList; param2: NSError); cblock; cdecl;
  WKContentRuleListStoreLookUpContentRuleListForIdentifierCallback = reference to procedure (param1: WKContentRuleList; param2: NSError); cblock; cdecl;
  WKContentRuleListStoreRemoveContentRuleListForIdentifierCallback = reference to procedure (param1: NSError); cblock; cdecl;
  WKContentRuleListStoreGetAvailableContentRuleListIdentifiersCallback = reference to procedure (param1: NSArray); cblock; cdecl;
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

