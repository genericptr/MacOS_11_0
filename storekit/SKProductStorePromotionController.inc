{ Parsed from StoreKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/StoreKit.framework/Headers/SKProductStorePromotionController.h }

{$ifdef CALLBACKS}
type
  SKProductStorePromotionControllerFetchStorePromotionVisibilityForProductCallback = reference to function (storePromotionVisibility: SKProductStorePromotionVisibility; error: NSError): pointer; cblock; cdecl;
  SKProductStorePromotionControllerUpdateStorePromotionVisibilityCallback = reference to function (error: NSError): pointer; cblock; cdecl;
  SKProductStorePromotionControllerFetchStorePromotionOrderWithCompletionHandlerCallback = reference to function (storePromotionOrder: NSArray; error: NSError): pointer; cblock; cdecl;
  SKProductStorePromotionControllerUpdateStorePromotionOrderCallback = reference to function (error: NSError): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  SKProductStorePromotionControllerPtr = ^SKProductStorePromotionController;
{$endif}

{$ifdef TYPES}
type
  SKProductStorePromotionVisibility = NSInteger;
  SKProductStorePromotionVisibilityPtr = ^SKProductStorePromotionVisibility;

const
  SKProductStorePromotionVisibilityDefault = 0;
  SKProductStorePromotionVisibilityShow = 1;
  SKProductStorePromotionVisibilityHide = 2;
{$endif}

{$ifdef CLASSES}

type
  SKProductStorePromotionController = objcclass external (NSObject)
  public
    class function defaultController: id; message 'defaultController'; { unavailable in watchos }
    procedure fetchStorePromotionVisibilityForProduct_completionHandler (product: SKProduct; completionHandler: SKProductStorePromotionControllerFetchStorePromotionVisibilityForProductCallback); message 'fetchStorePromotionVisibilityForProduct:completionHandler:'; { unavailable in watchos }
    procedure updateStorePromotionVisibility_forProduct_completionHandler (promotionVisibility: SKProductStorePromotionVisibility; product: SKProduct; completionHandler: SKProductStorePromotionControllerUpdateStorePromotionVisibilityCallback); message 'updateStorePromotionVisibility:forProduct:completionHandler:';
    procedure fetchStorePromotionOrderWithCompletionHandler (completionHandler: SKProductStorePromotionControllerFetchStorePromotionOrderWithCompletionHandlerCallback); message 'fetchStorePromotionOrderWithCompletionHandler:'; { unavailable in watchos }
    procedure updateStorePromotionOrder_completionHandler (storePromotionOrder: NSArray; completionHandler: SKProductStorePromotionControllerUpdateStorePromotionOrderCallback); message 'updateStorePromotionOrder:completionHandler:';
  end;
{$endif}

