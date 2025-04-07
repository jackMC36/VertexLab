#include<string>
using namespace std;

class Vertex{
    private:
        string name;

        public:
            Vertex(string name){
                this->name =  name;
            }

            Vertex(int index){
                this->name = (char) index;
            }
};
