#include<iostram>
using namespace std;

class Tracker{
    private:
    //declaration
    static int objectCount;
    int id;

    public:
    Tracker(){
        objectCount++; //increment the shared counter
    }

    static int getCount(){
        //id=5; //error: static cant access non static variables
        return objectCount; //OK:accessing static data member
    }
};

//mandatory external definition 
int Tracker:objectCount=0;
int main(){
    //call static function without creating an object
    cout<<"initial count"<<Tracker:getCount()<<endl; //output 0

    Tracker obj1;
    Tracker obj2;

    //call static function after object creation 
    cout<<"final count"<<
}