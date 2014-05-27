#import "String.h"

@implementation String

- (id) initWithCString: (const char*)cstr {
  _val = cstr;
}

- (const char*) toCString {
  return val;
}

- (String*) appendString: (String*) str {
  char *cstr = [str toCString];
  int bufferSize = sizeof(_val) + sizeof(cstr);
  char rcstr[bufferSize];
  strcpy(rcstr, _val);
  strcat(rcstr, cstr);

  return [[String alloc] initWithCString: rcstr];
}

@end
