#import "Core/OObject.h"

@interface List : OObject{
    int _count;
}
@property id head;
@property List* tail;

// initialises the class with a head and no tail
- (id) initWithHead: (id)hd;

// initialises the class with a head and a tail
- (id) initWithHead: (id)hd andTail: (List*)tl;

// initialises the class based on a variable number of args
- (id) initWithValues: (id)arg1, ...;

// gets the current number of items in the list
- (int) count;

// returns a new list with the new value prepended
- (List*) cons:(id) val;

// returns a reversed list
- (List*) reverse;

// returns a string representation of the list
- (String*) toString;
@end
