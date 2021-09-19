{ Parsed from Metal.framework MTLParallelRenderCommandEncoder.h }

{$ifdef TYPES}
type
  MTLParallelRenderCommandEncoderProtocolPtr = ^MTLParallelRenderCommandEncoderProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLParallelRenderCommandEncoderProtocol = objcprotocol external name 'MTLParallelRenderCommandEncoder' (MTLCommandEncoderProtocol)
    function renderCommandEncoder: MTLRenderCommandEncoderProtocol; message 'renderCommandEncoder';
    procedure setColorStoreAction_atIndex (storeAction: MTLStoreAction; colorAttachmentIndex: NSUInteger); message 'setColorStoreAction:atIndex:'; { available in macos 10.12, ios 10.0 }
    procedure setDepthStoreAction (storeAction: MTLStoreAction); message 'setDepthStoreAction:'; { available in macos 10.12, ios 10.0 }
    procedure setStencilStoreAction (storeAction: MTLStoreAction); message 'setStencilStoreAction:'; { available in macos 10.12, ios 10.0 }
    procedure setColorStoreActionOptions_atIndex (storeActionOptions: MTLStoreActionOptions; colorAttachmentIndex: NSUInteger); message 'setColorStoreActionOptions:atIndex:'; { available in macos 10.13, ios 11.0 }
    procedure setDepthStoreActionOptions (storeActionOptions: MTLStoreActionOptions); message 'setDepthStoreActionOptions:'; { available in macos 10.13, ios 11.0 }
    procedure setStencilStoreActionOptions (storeActionOptions: MTLStoreActionOptions); message 'setStencilStoreActionOptions:'; { available in macos 10.13, ios 11.0 }
  end;
{$endif}

