#import <objc/runtime.h>

@class String;

/* it's called "OObject" so it doesn't interfere
 * with the objc runtime's built-in Object class
 * OObject is also fitting given the project's name.
 */
@interface OObject {
  Class isa;
}
// allocate memory
+ (id) alloc;
// initialise class with default variables
- (id) init;
// destroy instance
- (void) destroy;
// returns a string representing the current object
- (String*) toString;
// returns the type of the current object
- (Class) class;
@end
