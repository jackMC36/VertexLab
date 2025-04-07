#ifndef GRAPH_H
#define GRAPH_H

#include "vertex.h"
#include <vector>

using namespace std;

#include "vertex.h"
using namespace std;

class Edge{
    private:
         Vertex v1;
         Vertex v2;

    public:
        Edge (const Vertex& v1,const Vertex& v2);
        const Vertex& getFirst() const;
        const Vertex& getSecond() const;

};

#endif