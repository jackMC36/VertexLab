#include "vertex.h"
using namespace std;

class Edge{
    private:
         Vertex v1;
         Vertex v2;

    public:
        Edge (const Vertex& v1,const Vertex& v2){
            this->v1 = v1;
            this->v2 = v2; 
        }
        const Vertex& getFirst() const{
            return this->v1;
        }

        const Vertex& getSecond() const{
            return this->v2;
        }



};
