#include <iostream>
using namespace std;

class baseClass final{
public:
    virtual void perkenalan() {
        cout << "Halo saya function dari base class";
    }
};

class derivedClass : public baseClass {
    public:
        void perkenalan() {
            cout << "halo saya function dari derived Class";
        }
    };

    int main() {
        derivedClass a;
        a.perkenalan();
    
        return 0;
    }
    
    
