#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
    vector<int> ls = {10, 2, 3, 4, 4, 4, 5, 1, 2, 3};
    map<int, int> countDupMap;

    for(int num: ls){
        if(countDupMap.find(num) !=countDupMap.end()){
            //increment each time we find a duplicate
            countDupMap[num]++;
        }
        else{
            // first time we see the number, initialize it to 1
            countDupMap[num] = 1;
        }
    }
    for(const auto& pair: countDupMap){
        cout<< "Number: " << pair.first << " Count: " << pair.second << endl;
    }
    return 0;
}