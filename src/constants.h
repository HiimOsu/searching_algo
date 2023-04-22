#ifndef CONSTANTS
#define CONSTANTS
#include <cmath>
#include <iostream>
#include <map>

const long ROW = 10;
const long COL = 10;

const long thrseh_hold = 0;
bool is_blocked(long graph[][COL], long x, long y){
    return graph[y][x] < thrseh_hold;
}

bool is_valid(long x, long y){
    return x >= 0 && y >= 0 && x < COL && y < ROW;
}

long hueristic(const node& current, const node& goal){
    return std::abs(current.i - goal.j) + std::abs(current.i - goal.i);
}

void print_path(std::map<node,node> path,const node& goal){
    std::map<node,node> revrse;
    auto dest = goal;
    auto src = path[goal];

    while (! (src == node()))
    {   
        revrse[src] = path[dest];

        dest = src;
        src = path[dest];
        /* code */
    }

    while (!(src == goal))
    {
        printf("(%d,%d)-->", src.i, src.j);
    }
    
    
    
}
#endif