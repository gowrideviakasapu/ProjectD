// Swap 2 numbers
#include <iostream>
using namespace std;

class SwapNumbers{
    public:
    // call by variable (int a, int b) calling func (num1, num2)
    // call by reference (int &a, int &b) calling func (num1, num2)
    // call by address   (int *a, int *b) calling func (&num1, &num2)
    void swapping_numbers(int *a, int *b){
        int t; // *a = &num1 
        t = *a;
        std::cout << t << endl;
        *a = *b;
        std::cout << *a << endl;
        *b = t;
        std::cout << *b <<endl;
    }

};

int main(){
    SwapNumbers s;
    int num1 = 1;
    int num2 = 2;
    std::cout << "Before swapping: num1:" <<num1 << " num2: "<<num2<< endl;
    s.swapping_numbers(&num1, &num2);
    std::cout << "After Swapping: num1:" <<num1 << " num2: "<<num2<< endl;
}