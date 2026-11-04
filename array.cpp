//let's assume that you have 4 types of bread
// the number of the bread type is constant
// how ever you bake new ones of the same types and you 
// want to add the new number to the total of each one
//so your customers have an idea of the number of the bread left
// that's beacause you know programming and you have an app. :D

#include <iostream>

using namespace std;

void increaseBread(int arr[], int size, int newP){
    //here  we need you to exactly specify what array with what
    //size you want to "do" something to it by how much
    for(int i = 0; i < size; i++ ){
        arr[i] += newP;
    }
}


int main(){
    const int breadType = 4;
    int bread[breadType] = {5,4,8,11};

    increaseBread(bread, breadType, 6);

    for(int j = 0; j< breadType; j++){
        cout << bread[j] << " ";
    }
}