#import "String.h"

@implementation String

- (id) initWithCString: (const char*)cstr {
  _val = cstr;
}

- (const char*) toCString {
  return val;
}

@end
