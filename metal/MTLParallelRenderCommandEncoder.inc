{ Parsed from Metal.framework MTLParallelRenderCommandEncoder.h }

{$ifdef TYPES}
type
  MTLParallelRenderCommandEncoderProtocolPtr = ^MTLParallelRenderCommandEncoderProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLParallelRenderCommandEncoderProtocol = objcprotocol external name 'MTLParallelRenderCommandEncoder' (MTLCommandEncoderProtocol)
    function renderCommandEncoder: MTLRenderCommandEncoderProtocol; message 'renderCommandEncoder';
    procedure setColorStoreAction_atIndex (storeAction: MTLStoreAction; colorAttachmentIndex: NSUInteger); message 'setColorStoreAction:atIndex:'; { available in macos , ios  }
    procedure setDepthStoreAction (storeAction: MTLStoreAction); message 'setDepthStoreAction:'; { available in macos , ios  }
    procedure setStencilStoreAction (storeAction: MTLStoreAction); message 'setStencilStoreAction:'; { available in macos , ios  }
    procedure setColorStoreActionOptions_atIndex (storeActionOptions: MTLStoreActionOptions; colorAttachmentIndex: NSUInteger); message 'setColorStoreActionOptions:atIndex:'; { available in macos , ios  }
    procedure setDepthStoreActionOptions (storeActionOptions: MTLStoreActionOptions); message 'setDepthStoreActionOptions:'; { available in macos , ios  }
    procedure setStencilStoreActionOptions (storeActionOptions: MTLStoreActionOptions); message 'setStencilStoreActionOptions:'; { available in macos , ios  }
  end;
{$endif}

