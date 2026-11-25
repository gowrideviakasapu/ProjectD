#include <iostream>
#include <bitset>
using namespace std;

inline unsigned int set_bit(unsigned int num, int bit_position){
    num = num | (1 << bit_position);
    return num;
}

inline unsigned int clear_bit(unsigned int num, int bit_position){
    num = num & ~(1 << bit_position);
    return num;
}

inline unsigned int get_bit(unsigned int num, int bit_position){
    num = num & (1 << bit_position);
    return num;
}

inline unsigned int toggle_but(unsigned int num, int bit_position){
    num = num ^ (1 << bit_position);
    return num;
}

int main(){
    unsigned int num = 14;
    int bitPos=0;
    unsigned int set_result;
    std::cout << "Main Number:" << std::bitset<8>(num) << endl;
    set_result = set_bit(num, bitPos);
    std::cout << "set:" <<std::bitset<8>(set_result) << endl;
    unsigned int clear_result = clear_bit(num, 3);
    std::cout << "clear:" <<std::bitset<8>(clear_result) << endl;
    unsigned int get_result = get_bit(num, 1);
    std::cout << "get:" <<std::bitset<8>(get_result) << endl;
    unsigned int toggle_result = get_bit(num, 3);
    std::cout << "toggle:" <<std::bitset<8>(toggle_result) << endl;
    return 0;
}