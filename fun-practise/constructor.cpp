#include <iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
    // Non parameterized constructor
    Rectangle();
    int area();  //facilitator
    int getLength();
    void setLength(int l);

};

Rectangle::Rectangle(){
 length = 1;
 breadth = 1;
}
int Rectangle::area(){
    return length * breadth;
}
void Rectangle::setLength(int l){
    std::cout << "set length:" << l << endl;
    length = l;
}
int Rectangle::getLength(){
    return length;
}

int main(void){
    Rectangle r1;
    r1.setLength(2);
    std::cout << "get length :" << r1.getLength() << endl;
}

