/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

class Object {
private:
    static int nextID;
    int id;

public:
    Object() {
        nextID++;
        id = nextID;
    }

    int getID(){
        return id;
    }
};

int Object::nextID = 0;

class SpecialObject : public Object {

};

int main() {
    Object example1;
    SpecialObject specialexample1;

    std::cout << "Object 1 ID: " << example1.getID() << std::endl;
    std::cout << "Special Object ID: " << specialexample1.getID() << std::endl;

    return 0;
}

