{ Parsed from ModelIO.framework MDLCamera.h }

{$ifdef TYPES}
type
  MDLCameraPtr = ^MDLCamera;
  MDLStereoscopicCameraPtr = ^MDLStereoscopicCamera;
{$endif}

{$ifdef TYPES}
type
  MDLCameraProjection = NSUInteger;
  MDLCameraProjectionPtr = ^MDLCameraProjection;

const
  MDLCameraProjectionPerspective = 0;
  MDLCameraProjectionOrthographic = 1;
{$endif}

{$ifdef CLASSES}

type
  MDLCamera = objcclass external (MDLObject)
  public
    function projectionMatrix: matrix_float4x4; message 'projectionMatrix';
    procedure setProjection(newValue: MDLCameraProjection); message 'setProjection:';
    function projection: MDLCameraProjection; message 'projection';
    procedure frameBoundingBox_setNearAndFar (boundingBox: MDLAxisAlignedBoundingBox; setNearAndFar: objcbool); message 'frameBoundingBox:setNearAndFar:';
    procedure lookAt (focusPosition: vector_float3); message 'lookAt:';
    procedure lookAt_from (focusPosition: vector_float3; cameraPosition: vector_float3); message 'lookAt:from:';
    function rayTo_forViewPort (pixel: vector_int2; size: vector_int2): vector_float3; message 'rayTo:forViewPort:';
    procedure setNearVisibilityDistance(newValue: single); message 'setNearVisibilityDistance:';
    function nearVisibilityDistance: single; message 'nearVisibilityDistance';
    procedure setFarVisibilityDistance(newValue: single); message 'setFarVisibilityDistance:';
    function farVisibilityDistance: single; message 'farVisibilityDistance';
    procedure setWorldToMetersConversionScale(newValue: single); message 'setWorldToMetersConversionScale:';
    function worldToMetersConversionScale: single; message 'worldToMetersConversionScale';
    procedure setBarrelDistortion(newValue: single); message 'setBarrelDistortion:';
    function barrelDistortion: single; message 'barrelDistortion';
    procedure setFisheyeDistortion(newValue: single); message 'setFisheyeDistortion:';
    function fisheyeDistortion: single; message 'fisheyeDistortion';
    procedure setOpticalVignetting(newValue: single); message 'setOpticalVignetting:';
    function opticalVignetting: single; message 'opticalVignetting';
    procedure setChromaticAberration(newValue: single); message 'setChromaticAberration:';
    function chromaticAberration: single; message 'chromaticAberration';
    procedure setFocalLength(newValue: single); message 'setFocalLength:';
    function focalLength: single; message 'focalLength';
    procedure setFocusDistance(newValue: single); message 'setFocusDistance:';
    function focusDistance: single; message 'focusDistance';
    procedure setFieldOfView(newValue: single); message 'setFieldOfView:';
    function fieldOfView: single; message 'fieldOfView';
    procedure setFStop(newValue: single); message 'setFStop:';
    function fStop: single; message 'fStop';
    procedure setApertureBladeCount(newValue: NSUInteger); message 'setApertureBladeCount:';
    function apertureBladeCount: NSUInteger; message 'apertureBladeCount';
    procedure setMaximumCircleOfConfusion(newValue: single); message 'setMaximumCircleOfConfusion:';
    function maximumCircleOfConfusion: single; message 'maximumCircleOfConfusion';
    function bokehKernelWithSize (size: vector_int2): MDLTexture; message 'bokehKernelWithSize:';
    procedure setShutterOpenInterval(newValue: NSTimeInterval); message 'setShutterOpenInterval:';
    function shutterOpenInterval: NSTimeInterval; message 'shutterOpenInterval';
    procedure setSensorVerticalAperture(newValue: single); message 'setSensorVerticalAperture:';
    function sensorVerticalAperture: single; message 'sensorVerticalAperture';
    procedure setSensorAspect(newValue: single); message 'setSensorAspect:';
    function sensorAspect: single; message 'sensorAspect';
    procedure setSensorEnlargement(newValue: vector_float2); message 'setSensorEnlargement:';
    function sensorEnlargement: vector_float2; message 'sensorEnlargement';
    procedure setSensorShift(newValue: vector_float2); message 'setSensorShift:';
    function sensorShift: vector_float2; message 'sensorShift';
    procedure setFlash(newValue: vector_float3); message 'setFlash:';
    function flash: vector_float3; message 'flash';
    procedure setExposureCompression(newValue: vector_float2); message 'setExposureCompression:';
    function exposureCompression: vector_float2; message 'exposureCompression';
    procedure setExposure(newValue: vector_float3); message 'setExposure:';
    function exposure: vector_float3; message 'exposure';
  end;

type
  MDLStereoscopicCamera = objcclass external (MDLCamera)
  public
    procedure setInterPupillaryDistance(newValue: single); message 'setInterPupillaryDistance:';
    function interPupillaryDistance: single; message 'interPupillaryDistance';
    procedure setLeftVergence(newValue: single); message 'setLeftVergence:';
    function leftVergence: single; message 'leftVergence';
    procedure setRightVergence(newValue: single); message 'setRightVergence:';
    function rightVergence: single; message 'rightVergence';
    procedure setOverlap(newValue: single); message 'setOverlap:';
    function overlap: single; message 'overlap';
    function leftViewMatrix: matrix_float4x4; message 'leftViewMatrix';
    function rightViewMatrix: matrix_float4x4; message 'rightViewMatrix';
    function leftProjectionMatrix: matrix_float4x4; message 'leftProjectionMatrix';
    function rightProjectionMatrix: matrix_float4x4; message 'rightProjectionMatrix';
  end;
{$endif}

