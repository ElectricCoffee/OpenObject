#import <objc/runtime.h>

@class String;

/* it's called "OObject" so it doesn't interfere
 * with the objc runtime's built-in Object class
 * OObject is also fitting given the project's name.
 */
@interface OObject
+ (id) alloc;
- (id) init;
- (void) dealloc;
- (String*) toString;
@end
