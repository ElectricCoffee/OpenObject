#import OObject.h

@implementation OObject

+ (id) alloc {
  return class_createInstance(self, 0);
}

- (id) init {
  return self;
}

- (void) destroy {
  object_dispose(self);
}

- (String*) toString {
  return [[String alloc] initWithCString: object_getClassName(self)];
}

- (Class) class {
  return object_getClass(self);
}

@end
