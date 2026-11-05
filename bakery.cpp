//Bakery Manegment system version 1.01
// here we will add a different number of new bread for each type
// this is option1: 
#include <iostream>

using namespace std;

void increaseBread(int arr[], int size, int arr2[], int res[]){
    //int res[size] = {0}; NO need to do this
    for(int i = 0; i < size; i++ ){
        res[i] = arr[i] + arr2[i];
    }
}


int main(){
    const int breadType = 4;
    int bread[breadType] = {5,4,8,11};
    int baked[breadType] = {8,4,9,4};
    int res[breadType];
    
    increaseBread(bread, breadType, baked, res);

    for(int j = 0; j< breadType; j++){
        cout << res[j] << " ";
    }
}