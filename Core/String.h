#import "OObject.h"

/* The premise of this project
 * is to have all the built-in types be
 * prefix-less, simply because it's much more
 * natural to write String *str = @"Hello";
 * than it is to write NSString *str = @"Hello";
 */
@interface String : OObject {
  const char* _val;
}

// creates the object with a C-String
- (id) initWithCString: (const char*)cstr;

// returns a character array
- (const char*) toCString;

// returns the current string, with a new string appended to it
- (String*) appendString: (String*)str;

@end
