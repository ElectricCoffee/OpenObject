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

- (id) initWithCString: (const char*)cstr;

- (const char*) toCString;

@end
