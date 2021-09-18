{ Parsed from WebKit.framework NSAttributedString.h }

{$ifdef EXTERNAL_SYMBOLS}
var
  NSReadAccessURLDocumentOption: NSAttributedStringDocumentReadingOptionKey; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSAttributedStringCompletionHandler = reference to procedure (param1: NSAttributedString; param2: NSDictionary; param3: NSError); cblock; cdecl;
{$endif}

{$ifdef CLASSES}

type
  NSAttributedStringWebKitAdditions = objccategory external (NSAttributedString)
    class procedure loadFromHTMLWithRequest_options_completionHandler (request: NSURLRequest; options: NSDictionary; completionHandler: NSAttributedStringCompletionHandler); message 'loadFromHTMLWithRequest:options:completionHandler:';
    class procedure loadFromHTMLWithFileURL_options_completionHandler (fileURL: NSURL; options: NSDictionary; completionHandler: NSAttributedStringCompletionHandler); message 'loadFromHTMLWithFileURL:options:completionHandler:';
    class procedure loadFromHTMLWithString_options_completionHandler (string_: NSString; options: NSDictionary; completionHandler: NSAttributedStringCompletionHandler); message 'loadFromHTMLWithString:options:completionHandler:';
    class procedure loadFromHTMLWithData_options_completionHandler (data: NSData; options: NSDictionary; completionHandler: NSAttributedStringCompletionHandler); message 'loadFromHTMLWithData:options:completionHandler:';
  end;
{$endif}

