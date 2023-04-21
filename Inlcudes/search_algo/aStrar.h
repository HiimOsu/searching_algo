#ifndef ASTAR_ALGO_H
#define ASTAR_ALGO_H
#include <queue>
#include <map>
#include "../node/node.h"

bool search(Node[][COL], Node start, Node goal){
    std::priority_queue<Node> frontier;
    frontier.push(Node(start, 0));      
}
#endif