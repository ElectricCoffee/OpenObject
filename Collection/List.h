#import "Core/OObject.h"

/* The list.
 * The list implementation in OpenObject
 * is akin to the "Cons List" found in many other languages.
 * a cons list is simply a linked list, that favours prepending,
 * rather than appending items, since prepending is much faster,
 * given the fact that you don't need to traverse the entire list to
 * add a new value.
 * Another primary feature of the cons list is that it's immutable,
 * meaning every time you prepend a value, you'll get a new list
 * containing the new value as the head, and the old list as the tail.
 * Here "head" refers to the value at the front of the list,
 * and "tail" refers to the rest of the values.
 *
 * [a]->[b]->[c]->[d]->[]
 *  ^   |_______________|
 * head.      tail.
 */

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
