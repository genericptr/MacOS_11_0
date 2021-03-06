{ Parsed from MapKit.framework MKMapView.h }

{ Types from MKMapView }
{$ifdef TYPES}


{$endif}


{ Types from OverlaysAPI }
{$ifdef TYPES}

{$endif}


{ Types from MKMapViewDelegateProtocol }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  MKMapViewPtr = ^MKMapView;
  MKMapViewDelegateProtocolPtr = ^MKMapViewDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  MKUserTrackingMode = NSInteger;
  MKUserTrackingModePtr = ^MKUserTrackingMode;

const
  MKUserTrackingModeNone = 0;
  MKUserTrackingModeFollow = 1;
  MKUserTrackingModeFollowWithHeading = 2 { unavailable in macos } { unavailable in tvos };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MKMapViewDefaultAnnotationViewReuseIdentifier: NSString { available in macos 10.13, ios 11.0 } { available in 11_0 }; cvar; external;
  MKMapViewDefaultClusterAnnotationViewReuseIdentifier: NSString { available in macos 10.13, ios 11.0 } { available in 11_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  MKMapView = objcclass external (NSView, NSCodingProtocol)
  public
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure setMapType(newValue: MKMapType); message 'setMapType:';
    function mapType: MKMapType; message 'mapType';
    procedure setRegion(newValue: MKCoordinateRegion); message 'setRegion:';
    function region: MKCoordinateRegion; message 'region';
    procedure setRegion_animated (region_: MKCoordinateRegion; animated: objcbool); message 'setRegion:animated:';
    procedure setCenterCoordinate(newValue: CLLocationCoordinate2D); message 'setCenterCoordinate:';
    function centerCoordinate: CLLocationCoordinate2D; message 'centerCoordinate';
    procedure setCenterCoordinate_animated (coordinate: CLLocationCoordinate2D; animated: objcbool); message 'setCenterCoordinate:animated:';
    function regionThatFits (region_: MKCoordinateRegion): MKCoordinateRegion; message 'regionThatFits:';
    procedure setVisibleMapRect(newValue: MKMapRect); message 'setVisibleMapRect:';
    function visibleMapRect: MKMapRect; message 'visibleMapRect';
    procedure setVisibleMapRect_animated (mapRect: MKMapRect; animate: objcbool); message 'setVisibleMapRect:animated:';
    function mapRectThatFits (mapRect: MKMapRect): MKMapRect; message 'mapRectThatFits:';
    {$if defined(TARGET_OS_IPHONE)}
    procedure setVisibleMapRect_edgePadding_animated (mapRect: MKMapRect; insets: UIEdgeInsets; animate: objcbool); message 'setVisibleMapRect:edgePadding:animated:';
    function mapRectThatFits_edgePadding (mapRect: MKMapRect; insets: UIEdgeInsets): MKMapRect; message 'mapRectThatFits:edgePadding:';
    {$else}
    procedure setVisibleMapRect_edgePadding_animated (mapRect: MKMapRect; insets: NSEdgeInsets; animate: objcbool); message 'setVisibleMapRect:edgePadding:animated:';
    function mapRectThatFits_edgePadding (mapRect: MKMapRect; insets: NSEdgeInsets): MKMapRect; message 'mapRectThatFits:edgePadding:';
    {$endif}
    procedure setCamera(newValue: MKMapCamera); message 'setCamera:'; { available in macos 10.9, ios 7.0 }
    function camera: MKMapCamera; message 'camera'; { available in macos 10.9, ios 7.0 }
    procedure setCamera_animated (camera_: MKMapCamera; animated: objcbool); message 'setCamera:animated:'; { available in macos 10.9, ios 7.0 }
    procedure setCameraZoomRange(newValue: MKMapCameraZoomRange); message 'setCameraZoomRange:'; { unavailable in watchos }
    function cameraZoomRange: MKMapCameraZoomRange; message 'cameraZoomRange'; { unavailable in watchos }
    procedure setCameraZoomRange_animated (cameraZoomRange_: MKMapCameraZoomRange; animated: objcbool); message 'setCameraZoomRange:animated:'; { unavailable in watchos }
    procedure setCameraBoundary(newValue: MKMapCameraBoundary); message 'setCameraBoundary:'; { unavailable in watchos } { available in ios 13.0, macos 10.15, tvos 13.0 }
    function cameraBoundary: MKMapCameraBoundary; message 'cameraBoundary'; { unavailable in watchos } { available in ios 13.0, macos 10.15, tvos 13.0 }
    procedure setCameraBoundary_animated (cameraBoundary_: MKMapCameraBoundary; animated: objcbool); message 'setCameraBoundary:animated:'; { unavailable in watchos } { available in ios 13.0, macos 10.15, tvos 13.0 }
    {$if defined(TARGET_OS_IPHONE)}
    function convertCoordinate_toPointToView (coordinate: CLLocationCoordinate2D; view: UIViewPtr): CGPoint; message 'convertCoordinate:toPointToView:';
    function convertPoint_toCoordinateFromView (point: CGPoint; view: UIViewPtr): CLLocationCoordinate2D; message 'convertPoint:toCoordinateFromView:';
    function convertRegion_toRectToView (region_: MKCoordinateRegion; view: UIViewPtr): CGRect; message 'convertRegion:toRectToView:';
    function convertRect_toRegionFromView (rect: CGRect; view: UIViewPtr): MKCoordinateRegion; message 'convertRect:toRegionFromView:';
    {$else}
    function convertCoordinate_toPointToView (coordinate: CLLocationCoordinate2D; view: NSView): CGPoint; message 'convertCoordinate:toPointToView:';
    function convertPoint_toCoordinateFromView (point: CGPoint; view: NSView): CLLocationCoordinate2D; message 'convertPoint:toCoordinateFromView:';
    function convertRegion_toRectToView (region_: MKCoordinateRegion; view: NSView): CGRect; message 'convertRegion:toRectToView:';
    function convertRect_toRegionFromView (rect: CGRect; view: NSView): MKCoordinateRegion; message 'convertRect:toRegionFromView:';
    {$endif}
    procedure setZoomEnabled(newValue: objcbool); message 'setZoomEnabled:';
    function isZoomEnabled: objcbool; message 'isZoomEnabled';
    procedure setScrollEnabled(newValue: objcbool); message 'setScrollEnabled:';
    function isScrollEnabled: objcbool; message 'isScrollEnabled';
    procedure setRotateEnabled(newValue: objcbool); message 'setRotateEnabled:'; { unavailable in tvos }
    function isRotateEnabled: objcbool; message 'isRotateEnabled'; { unavailable in tvos }
    procedure setPitchEnabled(newValue: objcbool); message 'setPitchEnabled:'; { unavailable in tvos }
    function isPitchEnabled: objcbool; message 'isPitchEnabled'; { unavailable in tvos } { available in macos 10.9, ios 7.0 }
    procedure setShowsPitchControl(newValue: objcbool); message 'setShowsPitchControl:'; { unavailable in tvos } { available in macos 10.9, ios 7.0 }
    function showsPitchControl: objcbool; message 'showsPitchControl'; { unavailable in tvos } { available in macos 10.9, ios 7.0 }
    procedure setShowsZoomControls(newValue: objcbool); message 'setShowsZoomControls:'; { unavailable in tvos } { available in macos 10.9, ios 7.0 }
    function showsZoomControls: objcbool; message 'showsZoomControls'; { unavailable in ios, watchos, tvos } { available in macos 11.0, macCatalyst 14.0 }
    procedure setShowsCompass(newValue: objcbool); message 'setShowsCompass:'; { unavailable in ios, watchos, tvos } { available in macos 11.0, macCatalyst 14.0 }
    function showsCompass: objcbool; message 'showsCompass'; { unavailable in ios, watchos, tvos } { available in macos 10.9, macCatalyst 13.0 }
    procedure setShowsScale(newValue: objcbool); message 'setShowsScale:'; { available in macos 10.9, macCatalyst 13.0 }
    function showsScale: objcbool; message 'showsScale'; { available in macos 10.9, ios 9.0 }
    procedure setPointOfInterestFilter(newValue: MKPointOfInterestFilter); message 'setPointOfInterestFilter:'; { unavailable in tvos } { available in macos 10.9, ios 9.0 }
    function pointOfInterestFilter: MKPointOfInterestFilter; message 'pointOfInterestFilter'; { unavailable in watchos }
    procedure setShowsPointsOfInterest(newValue: objcbool); message 'setShowsPointsOfInterest:'; { unavailable in watchos }
    function showsPointsOfInterest: objcbool; message 'showsPointsOfInterest'; { unavailable in watchos } { available in ios 13.0, macos 10.15, tvos 13.0 }
    procedure setShowsBuildings(newValue: objcbool); message 'setShowsBuildings:'; { available in ios 13.0, macos 10.15, tvos 13.0 }
    function showsBuildings: objcbool; message 'showsBuildings'; { available in macos 10.9, ios 7.0 }
    procedure setShowsTraffic(newValue: objcbool); message 'setShowsTraffic:'; { available in macos 10.11, ios 9.0 }
    function showsTraffic: objcbool; message 'showsTraffic'; { available in macos 10.9, ios 7.0 }
    procedure setShowsUserLocation(newValue: objcbool); message 'setShowsUserLocation:';
    function showsUserLocation: objcbool; message 'showsUserLocation';
    function userLocation: MKUserLocation; message 'userLocation';
    procedure setUserTrackingMode(newValue: MKUserTrackingMode); message 'setUserTrackingMode:'; { unavailable in watchos }
    function userTrackingMode: MKUserTrackingMode; message 'userTrackingMode'; { unavailable in watchos }
    procedure setUserTrackingMode_animated (mode: MKUserTrackingMode; animated: objcbool); message 'setUserTrackingMode:animated:'; { unavailable in watchos }
    function isUserLocationVisible: objcbool; message 'isUserLocationVisible';
    procedure addAnnotation (annotation: id); message 'addAnnotation:';
    procedure addAnnotations (annotations: NSArray); message 'addAnnotations:';
    procedure removeAnnotation (annotation: id); message 'removeAnnotation:';
    procedure removeAnnotations (annotations: NSArray); message 'removeAnnotations:';
    function annotations: NSArray; message 'annotations';
    function annotationsInMapRect (mapRect: MKMapRect): NSSet; message 'annotationsInMapRect:'; { available in macos 10.9, ios 4.2 }
    function viewForAnnotation (annotation: id): MKAnnotationView; message 'viewForAnnotation:';
    function dequeueReusableAnnotationViewWithIdentifier (identifier: NSString): MKAnnotationView; message 'dequeueReusableAnnotationViewWithIdentifier:';
    function dequeueReusableAnnotationViewWithIdentifier_forAnnotation (identifier: NSString; annotation: id): MKAnnotationView; message 'dequeueReusableAnnotationViewWithIdentifier:forAnnotation:'; { available in macos 10.9, ios 4.2 }
    procedure registerClass_forAnnotationViewWithReuseIdentifier (viewClass: pobjc_class; identifier: NSString); message 'registerClass:forAnnotationViewWithReuseIdentifier:'; { available in macos 10.13, ios 11.0 }
    procedure selectAnnotation_animated (annotation: id; animated: objcbool); message 'selectAnnotation:animated:';
    procedure deselectAnnotation_animated (annotation: MKAnnotationProtocol; animated: objcbool); message 'deselectAnnotation:animated:';
    procedure setSelectedAnnotations(newValue: NSArray); message 'setSelectedAnnotations:';
    function selectedAnnotations: NSArray; message 'selectedAnnotations';
    function annotationVisibleRect: CGRect; message 'annotationVisibleRect';
    procedure showAnnotations_animated (annotations_: NSArray; animated: objcbool); message 'showAnnotations:animated:'; { available in macos 10.9, ios 7.0 }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

{$ifdef TYPES}
type
  MKOverlayLevel = NSInteger;
  MKOverlayLevelPtr = ^MKOverlayLevel;

const
  MKOverlayLevelAboveRoads = 0;
  MKOverlayLevelAboveLabels = 1;
{$endif}

{$ifdef CLASSES}

type
  OverlaysAPI = objccategory external (MKMapView)
    procedure addOverlay_level (overlay: id; level: MKOverlayLevel); message 'addOverlay:level:'; { available in macos 10.9, ios 7.0 }
    procedure addOverlays_level (overlays: NSArray; level: MKOverlayLevel); message 'addOverlays:level:'; { available in macos 10.9, ios 7.0 }
    procedure removeOverlay (overlay: MKOverlayProtocol); message 'removeOverlay:'; { available in macos 10.9, ios 7.0 }
    procedure removeOverlays (overlays: NSArray); message 'removeOverlays:'; { available in macos 10.9, ios 7.0 }
    procedure insertOverlay_atIndex_level (overlay: MKOverlayProtocol; index: NSUInteger; level: MKOverlayLevel); message 'insertOverlay:atIndex:level:'; { available in macos 10.9, ios 4.0 }
    procedure insertOverlay_aboveOverlay (overlay: MKOverlayProtocol; sibling: MKOverlayProtocol); message 'insertOverlay:aboveOverlay:'; { available in macos 10.9, ios 4.0 }
    procedure insertOverlay_belowOverlay (overlay: MKOverlayProtocol; sibling: id); message 'insertOverlay:belowOverlay:'; { available in macos 10.9, ios 7.0 }
    procedure exchangeOverlay_withOverlay (overlay1: id; overlay2: id); message 'exchangeOverlay:withOverlay:'; { available in macos 10.9, ios 4.0 }
    function overlays: NSArray; message 'overlays'; { available in macos 10.9, ios 4.0 }
    function overlaysInLevel (level: MKOverlayLevel): NSArray; message 'overlaysInLevel:'; { available in macos 10.9, ios 7.0 }
    function rendererForOverlay (overlay: id): MKOverlayRenderer; message 'rendererForOverlay:'; { available in macos 10.9, ios 4.0 }
    {$if defined(TARGET_OS_IPHONE)}
    function viewForOverlay (overlay: MKOverlayProtocol): MKOverlayViewPtr; message 'viewForOverlay:'; { unavailable in macos, tvos, watchos }
    {$endif}
    procedure addOverlay (overlay: MKOverlayProtocol); message 'addOverlay:'; { available in macos 10.9, ios 4.0 }
    procedure addOverlays (overlays_: NSArray); message 'addOverlays:'; { available in macos 10.9, ios 4.0 }
    procedure insertOverlay_atIndex (overlay: MKOverlayProtocol; index: NSUInteger); message 'insertOverlay:atIndex:'; { available in macos 10.9, ios 4.0 }
    procedure exchangeOverlayAtIndex_withOverlayAtIndex (index1: NSUInteger; index2: NSUInteger); message 'exchangeOverlayAtIndex:withOverlayAtIndex:'; { available in macos 10.9, ios 4.0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MKMapViewDelegateProtocol = objcprotocol external name 'MKMapViewDelegate' (NSObjectProtocol)
  optional
    procedure mapView_regionWillChangeAnimated (mapView: MKMapView; animated: objcbool); message 'mapView:regionWillChangeAnimated:';
    procedure mapView_regionDidChangeAnimated (mapView: MKMapView; animated: objcbool); message 'mapView:regionDidChangeAnimated:';
    procedure mapViewDidChangeVisibleRegion (mapView: MKMapView); message 'mapViewDidChangeVisibleRegion:'; { available in ios , tvos , macos  }
    procedure mapViewWillStartLoadingMap (mapView: MKMapView); message 'mapViewWillStartLoadingMap:';
    procedure mapViewDidFinishLoadingMap (mapView: MKMapView); message 'mapViewDidFinishLoadingMap:';
    procedure mapViewDidFailLoadingMap_withError (mapView: MKMapView; error: NSError); message 'mapViewDidFailLoadingMap:withError:';
    procedure mapViewWillStartRenderingMap (mapView: MKMapView); message 'mapViewWillStartRenderingMap:'; { available in macos 10.9, ios 7.0 }
    procedure mapViewDidFinishRenderingMap_fullyRendered (mapView: MKMapView; fullyRendered: objcbool); message 'mapViewDidFinishRenderingMap:fullyRendered:'; { available in macos 10.9, ios 7.0 }
    function mapView_viewForAnnotation (mapView: MKMapView; annotation: id): MKAnnotationView; message 'mapView:viewForAnnotation:';
    procedure mapView_didAddAnnotationViews (mapView: MKMapView; views: NSArray); message 'mapView:didAddAnnotationViews:';
    {$if defined(TARGET_OS_IPHONE)}
    procedure mapView_annotationView_calloutAccessoryControlTapped (mapView: MKMapView; view: MKAnnotationView; control: UIControlPtr); message 'mapView:annotationView:calloutAccessoryControlTapped:'; { unavailable in tvos }
    {$endif}
    procedure mapView_didSelectAnnotationView (mapView: MKMapView; view: MKAnnotationView); message 'mapView:didSelectAnnotationView:'; { available in macos 10.9, ios 4.0 }
    procedure mapView_didDeselectAnnotationView (mapView: MKMapView; view: MKAnnotationView); message 'mapView:didDeselectAnnotationView:'; { available in macos 10.9, ios 4.0 }
    procedure mapViewWillStartLocatingUser (mapView: MKMapView); message 'mapViewWillStartLocatingUser:'; { available in macos 10.9, ios 4.0 }
    procedure mapViewDidStopLocatingUser (mapView: MKMapView); message 'mapViewDidStopLocatingUser:'; { available in macos 10.9, ios 4.0 }
    procedure mapView_didUpdateUserLocation (mapView: MKMapView; userLocation: MKUserLocation); message 'mapView:didUpdateUserLocation:'; { available in macos 10.9, ios 4.0 }
    procedure mapView_didFailToLocateUserWithError (mapView: MKMapView; error: NSError); message 'mapView:didFailToLocateUserWithError:'; { available in macos 10.9, ios 4.0 }
    procedure mapView_annotationView_didChangeDragState_fromOldState (mapView: MKMapView; view: MKAnnotationView; newState: MKAnnotationViewDragState; oldState: MKAnnotationViewDragState); message 'mapView:annotationView:didChangeDragState:fromOldState:'; { unavailable in tvos }
    procedure mapView_didChangeUserTrackingMode_animated (mapView: MKMapView; mode: MKUserTrackingMode; animated: objcbool); message 'mapView:didChangeUserTrackingMode:animated:'; { unavailable in watchos }
    function mapView_rendererForOverlay (mapView: MKMapView; overlay: id): MKOverlayRenderer; message 'mapView:rendererForOverlay:'; { available in macos 10.9, ios 4.0 }
    procedure mapView_didAddOverlayRenderers (mapView: MKMapView; renderers: NSArray); message 'mapView:didAddOverlayRenderers:'; { available in ios 5.0, tvos 9.2, macos 11.0 }
    {$if defined(TARGET_OS_IPHONE)}
    function mapView_viewForOverlay (mapView: MKMapView; overlay: id): MKOverlayViewPtr; message 'mapView:viewForOverlay:'; { unavailable in macos, tvos, watchos }
    procedure mapView_didAddOverlayViews (mapView: MKMapView; overlayViews: NSArray); message 'mapView:didAddOverlayViews:'; { unavailable in macos, tvos, watchos }
    {$endif}
    function mapView_clusterAnnotationForMemberAnnotations (mapView: MKMapView; memberAnnotations: NSArray): MKClusterAnnotation; message 'mapView:clusterAnnotationForMemberAnnotations:'; { unavailable in macos, tvos, watchos }
  end;
{$endif}
