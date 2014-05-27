#import OObject.h

@implementation OObject

+ (id) alloc {
  return class_createInstance(self, 0);
}

- (id) init {
  return self;
}

- (void) dealloc {
  object_dispose(self);
}

- (String*) toString {
  return [[String alloc] initWithCString: "object"];
}

@end
