#ifndef NODE_H
#define NODE_H

#include <vector>

struct node
{   
    //In cartitian coordinate: x = i, y = j;
    node(long _i = 0, long _j = 0, long _f = 10000): i(_i),j(_j),f(_f){}
    node(const node& copy_me, long _f = 10000): i(copy_me.i),j(copy_me.j),f(_f){}
    long i, j;
    long f;
    friend bool operator ==(const node& lhs, const node& rhs);
    friend bool operator <(const node& lhs, const node& rhs);
    friend bool operator >(const node& lhs, const node& rhs);
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

