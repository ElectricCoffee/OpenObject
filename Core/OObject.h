#import <objc/runtime.h>

@class String;

@interface OObject
+ (id) alloc;
- (id) init;
- (void) dealloc;
- (String*) toString;
@end
