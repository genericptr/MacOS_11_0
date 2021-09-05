{ Parsed from SpriteKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SpriteKit.framework/Headers/SKRenderer.h }

{$ifdef TYPES}
type
  SKRendererPtr = ^SKRenderer;
{$endif}

{$if defined(SKVIEW_AVAILABLE)}
{$ifdef CLASSES}

type
  SKRenderer = objcclass external (NSObject)
  public
    class function rendererWithDevice (device: MTLDeviceProtocol): SKRenderer; message 'rendererWithDevice:';
    procedure renderWithViewport_commandBuffer_renderPassDescriptor (viewport: CGRect; commandBuffer: MTLCommandBufferProtocol; renderPassDescriptor: MTLRenderPassDescriptorPtr); message 'renderWithViewport:commandBuffer:renderPassDescriptor:';
    procedure renderWithViewport_renderCommandEncoder_renderPassDescriptor_commandQueue (viewport: CGRect; renderCommandEncoder: MTLRenderCommandEncoderProtocol; renderPassDescriptor: MTLRenderPassDescriptorPtr; commandQueue: MTLCommandQueueProtocol); message 'renderWithViewport:renderCommandEncoder:renderPassDescriptor:commandQueue:';
    procedure updateAtTime (currentTime: NSTimeInterval); message 'updateAtTime:';
    procedure setScene(newValue: SKScene); message 'setScene:';
    function scene: SKScene; message 'scene';
    procedure setIgnoresSiblingOrder(newValue: objcbool); message 'setIgnoresSiblingOrder:';
    function ignoresSiblingOrder: objcbool; message 'ignoresSiblingOrder';
    procedure setShouldCullNonVisibleNodes(newValue: objcbool); message 'setShouldCullNonVisibleNodes:';
    function shouldCullNonVisibleNodes: objcbool; message 'shouldCullNonVisibleNodes';
    procedure setShowsDrawCount(newValue: objcbool); message 'setShowsDrawCount:';
    function showsDrawCount: objcbool; message 'showsDrawCount';
    procedure setShowsNodeCount(newValue: objcbool); message 'setShowsNodeCount:';
    function showsNodeCount: objcbool; message 'showsNodeCount';
    procedure setShowsQuadCount(newValue: objcbool); message 'setShowsQuadCount:';
    function showsQuadCount: objcbool; message 'showsQuadCount';
    procedure setShowsPhysics(newValue: objcbool); message 'setShowsPhysics:';
    function showsPhysics: objcbool; message 'showsPhysics';
    procedure setShowsFields(newValue: objcbool); message 'setShowsFields:';
    function showsFields: objcbool; message 'showsFields';
  end;
{$endif}

{$endif}
