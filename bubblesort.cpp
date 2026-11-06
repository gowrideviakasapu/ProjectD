#include<iostream>
using namespace std;

int main(){

    //bubble sort
    // sort array without using sort
    // Vector can be used instead of array
    int arr[] = {10,2,3,1,5};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    int temp = 0;
    //instead of temp std::swap can be used
    
    for(int i =0; i<arrSize; i++){
        bool isSorted = false;
        for(int j=0; j<arrSize-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSorted = true; //for each element swap
            }
        }
        if(!isSorted){  //if no element is swapped by the inner loop break
            break;
        }
    }

    for( int i:arr){
        cout<<i<<endl;
    }

    return 0;
}