{ Parsed from StoreKit.framework SKProductStorePromotionController.h }

{$ifdef CALLBACKS}
type
  SKProductStorePromotionControllerFetchStorePromotionVisibilityForProductCallback = reference to procedure (storePromotionVisibility: SKProductStorePromotionVisibility; error: NSError); cblock; cdecl;
  SKProductStorePromotionControllerUpdateStorePromotionVisibilityCallback = reference to procedure (error: NSError); cblock; cdecl;
  SKProductStorePromotionControllerFetchStorePromotionOrderWithCompletionHandlerCallback = reference to procedure (storePromotionOrder: NSArray; error: NSError); cblock; cdecl;
  SKProductStorePromotionControllerUpdateStorePromotionOrderCallback = reference to procedure (error: NSError); cblock; cdecl;
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
    class function defaultController: id; message 'defaultController'; { unavailable in watchos } { available in ios 11.0, macos 11.0, macCatalyst 14.0 }
    procedure fetchStorePromotionVisibilityForProduct_completionHandler (product: SKProduct; completionHandler: SKProductStorePromotionControllerFetchStorePromotionVisibilityForProductCallback); message 'fetchStorePromotionVisibilityForProduct:completionHandler:'; { unavailable in watchos } { available in ios 11.0, macos 11.0, macCatalyst 14.0 }
    procedure updateStorePromotionVisibility_forProduct_completionHandler (promotionVisibility: SKProductStorePromotionVisibility; product: SKProduct; completionHandler: SKProductStorePromotionControllerUpdateStorePromotionVisibilityCallback); message 'updateStorePromotionVisibility:forProduct:completionHandler:';
    procedure fetchStorePromotionOrderWithCompletionHandler (completionHandler: SKProductStorePromotionControllerFetchStorePromotionOrderWithCompletionHandlerCallback); message 'fetchStorePromotionOrderWithCompletionHandler:'; { unavailable in watchos } { available in ios 11.0, macos 11.0, macCatalyst 14.0 }
    procedure updateStorePromotionOrder_completionHandler (storePromotionOrder: NSArray; completionHandler: SKProductStorePromotionControllerUpdateStorePromotionOrderCallback); message 'updateStorePromotionOrder:completionHandler:';
  end;
{$endif}

