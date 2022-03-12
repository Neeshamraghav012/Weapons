#include <iostream>
using namespace std;

class Animal{

    public:

        int a, b;
        
        void walk(){

            cout << "I can walk" << endl;
        }


};

class Dog : private Animal{




};

int main()
{

}