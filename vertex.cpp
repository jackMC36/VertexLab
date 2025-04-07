#include<string>
using namespace std;

class Vertex{
    string name;

    Vertex::Vertex(std::string name){
        this->name =  name;
    }

    Vertex::Vertex(int index){
        this->name = (char) index;
    }

    
};
