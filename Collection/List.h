#import "Core/OObject.h"

@interface List : OObject{
    int _count;
}
@property id head;
@property List* tail;

- (id) initWithHead: (id)hd;
- (id) initWithHead: (id)hd andTail: (List*)tl;
- (id) initWithValues: (id)arg1, ...;
- (int) count;
- (int) index;
- (List*) cons:(id) val;
- (List*) reverse;
- (String*) toString;
@end
