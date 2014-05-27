#import "OObject.h"

@interface String : OObject {
  const char* _val;
}

- (id) initWithCString: (const char*)cstr;

- (const char*) toCString;

@end
