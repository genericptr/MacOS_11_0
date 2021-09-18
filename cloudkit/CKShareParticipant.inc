{ Parsed from CloudKit.framework CKShareParticipant.h }

{$ifdef TYPES}
type
  CKShareParticipantPtr = ^CKShareParticipant;
{$endif}

{$ifdef TYPES}
type
  CKShareParticipantAcceptanceStatus = NSInteger;
  CKShareParticipantAcceptanceStatusPtr = ^CKShareParticipantAcceptanceStatus;

const
  CKShareParticipantAcceptanceStatusUnknown = 0;
  CKShareParticipantAcceptanceStatusPending = 1;
  CKShareParticipantAcceptanceStatusAccepted = 2;
  CKShareParticipantAcceptanceStatusRemoved = 3;

type
  CKShareParticipantPermission = NSInteger;
  CKShareParticipantPermissionPtr = ^CKShareParticipantPermission;

const
  CKShareParticipantPermissionUnknown = 0;
  CKShareParticipantPermissionNone = 1;
  CKShareParticipantPermissionReadOnly = 2;
  CKShareParticipantPermissionReadWrite = 3;

type
  CKShareParticipantRole = NSInteger;
  CKShareParticipantRolePtr = ^CKShareParticipantRole;

const
  CKShareParticipantRoleUnknown = 0;
  CKShareParticipantRoleOwner = 1;
  CKShareParticipantRolePrivateUser = 3;
  CKShareParticipantRolePublicUser = 4;

type
  CKShareParticipantType = NSInteger;
  CKShareParticipantTypePtr = ^CKShareParticipantType;

const
  CKShareParticipantTypeUnknown = 0;
  CKShareParticipantTypeOwner = 1;
  CKShareParticipantTypePrivateUser = 3;
  CKShareParticipantTypePublicUser = 4;
{$endif}

{$ifdef CLASSES}

type
  CKShareParticipant = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    function userIdentity: CKUserIdentity; message 'userIdentity';
    procedure setRole(newValue: CKShareParticipantRole); message 'setRole:'; { available in macos , ios , tvos , watchos  }
    function role: CKShareParticipantRole; message 'role'; { available in macos , ios , tvos , watchos  }
    procedure setType(newValue: CKShareParticipantType); message 'setType:'; deprecated 'replace with role';
    function type_: CKShareParticipantType; message 'type'; deprecated 'replace with role';
    function acceptanceStatus: CKShareParticipantAcceptanceStatus; message 'acceptanceStatus';
    procedure setPermission(newValue: CKShareParticipantPermission); message 'setPermission:';
    function permission: CKShareParticipantPermission; message 'permission';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

