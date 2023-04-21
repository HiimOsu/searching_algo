#ifndef NODE_H
#define NODE_H

#include <vector>
#include "constants.h"
struct Node
{   
    //In cartitian coordinate: x = i, y = j;
    Node(long _i = 0, long _j = 0, long _f = MAX_INF): i(_i),j(_j),f(_f){}
    Node(const Node& copy_me, long _f = MAX_INF): i(copy_me.i),j(copy_me.j),f(_f){}
    long i, j;
    long f;
    friend bool operator ==(const Node& lhs, const Node& rhs);
    friend bool operator <(const Node& lhs, const Node& rhs);
    friend bool operator >(const Node& lhs, const Node& rhs);
};


#endif