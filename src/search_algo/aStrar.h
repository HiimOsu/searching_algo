#ifndef SEARCH_ALGO
#define SEARCH_ALGO
#include <map>
#include <queue>

#include  "../node/node.h"
#include "../constants.h"
using namespace std;

bool a_star(long graph[][COL], const node& start, const node& goal){
    priority_queue<node> frontier;
    map<node, long> cost_so_far;
    map<node, node> path;

    frontier.push((start,0));
    node noll;
    path.insert(start, noll);
    cost_so_far.insert(pair<node, long>(start, 0));

    while (!frontier.empty())
    {   
        node q = frontier.top();
        for(node x : its_neighbor(q)){
            if(x == q) {
                print_path(path, goal);
                return true;
            }

            x.f = q.f + 1 + hueristic(x, goal);
            if(is_valid(x.i,x.j) && !is_blocked(graph, x.i,x.j))
                if(cost_so_far.count(x) != 1 || x.f < cost_so_far[x]){
                    path[x] = q;
                    cost_so_far[x] = x.f;
                }
        }
    }
    
}
#endif