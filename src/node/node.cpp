#include "node.h"


bool operator ==(const Node& lhs, const Node& rhs){
    return lhs.i == rhs.i && lhs.j == rhs.j;
}

bool operator <(const Node& lhs, const Node& rhs){
    return lhs.f < rhs.f;   
}

bool operator >(const Node& lhs, const Node& rhs){
    return lhs.f > rhs.f;   
}
