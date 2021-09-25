
{$ifdef INTERFACE}
function MTLOriginMake(x, y, z: NSUInteger): MTLOrigin; inline;
function MTLSizeMake(width, height, depth: NSUInteger): MTLSize; inline;
function MTLRegionMake1D(x, width: NSUInteger): MTLRegion; inline;
function MTLRegionMake2D(x, y, width, height: NSUInteger): MTLRegion; inline;
function MTLRegionMake3D(x, y, z, width, height, depth: NSUInteger): MTLRegion; inline;
function MTLSamplePositionMake (x, y: single): MTLSamplePosition; inline;
function MTLClearColorMake (r, g, b, a: double): MTLClearColor; inline;
{$endif}

{$ifdef IMPLEMENTATION}

function MTLOriginMake(x, y, z: NSUInteger): MTLOrigin;
begin
  result.x := x;
  result.y := y;
  result.z := z;
end;

function MTLSizeMake(width, height, depth: NSUInteger): MTLSize;
begin
  result.width := width;
  result.height := height;
  result.depth := depth;
end;

function MTLRegionMake1D(x, width: NSUInteger): MTLRegion;
begin
  result.origin.x := x; result.origin.y := 0; result.origin.z := 0;
  result.size.width := width; result.size.height := 1; result.size.depth := 1;
end;

function MTLRegionMake2D(x, y, width, height: NSUInteger): MTLRegion;
begin
  result.origin.x := x; result.origin.y := y; result.origin.z := 0;
  result.size.width := width; result.size.height := height; result.size.depth := 1;
end;

function MTLRegionMake3D(x, y, z, width, height, depth: NSUInteger): MTLRegion;
begin
  result.origin.x := x; result.origin.y := y; result.origin.z := z;
  result.size.width := width; result.size.height := height; result.size.depth := depth;
end;

function MTLSamplePositionMake (x, y: single): MTLSamplePosition;
begin
  result.x := x;
  result.y := y;
end;

function MTLClearColorMake (r, g, b, a: double): MTLClearColor;
begin
  result.red := r;
  result.green := g;
  result.blue := b;
  result.alpha := a;
end;
{$endif}

