#import "List.h"

@implementation List

@synthesize head, tail;

- (id) initWithHead: (id)hd {
    if(self = [super init]) {
        tail = nil;
        head = hd;
        _count = 1;
        return self;
    }
    else return nil;
}

- (id) initWithHead: (id)hd andTail: (List *)tl {
    if(self = [super init]) {
        tail = tl;
        head = hd;
        _count = [tl count] + 1;
        return self;
    }
    else return nil;
}

- (id) initWithValues:(id)arg1, ... {
    va_list args;
    va_start(args, arg1);
    id arg = nil;
    List *retList = [[List alloc] initWithHead: arg1];

    while((arg = va_arg(args, id))) {
        retList = [retList cons: arg];
    }

    va_end(args);
    return [retList reverse];
}

- (int) count {
    return _count;
}

- (int) index {
  return [self count] - 1;
}

- (id) valueAtIndex: (int)ind {
  List *temp = self;

  while(self) {
    if ([self index] != ind)
        temp = [temp tail];
    else
        return [temp head];
  }
  
  return nil;
}

- (List*) cons: (id) val {
    return [[List alloc] initWithHead: val andTail: self];
}

- (List*) reverse {
    List *temp = self;
    List *retList = nil;

    while(temp) {
            retList = [[List alloc] initWithHead: [temp head] andTail: retList];
        temp = [temp tail];
    }
    return retList;
}

- (String*) toString {
    List *temp = self;
    String *str = @"[";
    while(temp) {
        str = [str appendString: [[temp head] toString]];
        if([temp count] > 1)
            str = [str appendString: @","];

        temp = [temp tail];
    }
    str = [str appendString: @"]"];
    return str;
}

@end
