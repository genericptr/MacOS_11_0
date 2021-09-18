{ Parsed from Contacts.framework CNChangeHistoryFetchRequest.h }

{$ifdef TYPES}
type
  CNChangeHistoryFetchRequestPtr = ^CNChangeHistoryFetchRequest;
{$endif}

{$ifdef CLASSES}

type
  CNChangeHistoryFetchRequest = objcclass external (CNFetchRequest, NSSecureCodingProtocol)
  public
    procedure setStartingToken(newValue: NSData); message 'setStartingToken:';
    function startingToken: NSData; message 'startingToken';
    procedure setAdditionalContactKeyDescriptors(newValue: NSArray); message 'setAdditionalContactKeyDescriptors:';
    function additionalContactKeyDescriptors: NSArray; message 'additionalContactKeyDescriptors';
    procedure setShouldUnifyResults(newValue: objcbool); message 'setShouldUnifyResults:';
    function shouldUnifyResults: objcbool; message 'shouldUnifyResults';
    procedure setMutableObjects(newValue: objcbool); message 'setMutableObjects:';
    function mutableObjects: objcbool; message 'mutableObjects';
    procedure setIncludeGroupChanges(newValue: objcbool); message 'setIncludeGroupChanges:';
    function includeGroupChanges: objcbool; message 'includeGroupChanges';
    procedure setExcludedTransactionAuthors(newValue: NSArray); message 'setExcludedTransactionAuthors:';
    function excludedTransactionAuthors: NSArray; message 'excludedTransactionAuthors';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

