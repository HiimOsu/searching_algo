#ifndef NODE_H
#define NODE_H

#include <vector>
#include "constants.h"
struct Node
{   
    //In cartitian coordinate: x = i, y = j;
    Node(long _i = 0, long _j = 0, long _f = MAX_INF): i(_i),j(_j),f(_f){}
    Node(const Node& copy_me, long _f = MAX_INF): i(_i),j(_j),f(_f){}
    long i, j;
    long f;
    friend bool operator ==(const Node& lhs, const Node& rhs);
    friend bool operator <(const Node& lhs, const Node& rhs);
    friend bool operator >(const Node& lhs, const Node& rhs);
};

std::vector<node> its_neighbor(const node& it){
    std::vector<node> v;
    v.push_back(node(it.i + 1, it.j));
    v.push_back(node(it.i - 1, it.j));
    v.push_back(node(it.i, it.j + 1));
    v.push_back(node(it.i, it.j -1));


    return v;
}

#endif

