//Bakery Manegment system version 1.02
/*You are developing a Bakery Management System using C++.
Your task is to create a program that manages the quantities of different bread types using a vector.*/

#include <iostream>
#include <vector> //needed to able to use them
using namespace std;

//here we may create a function and use the vector in it
void increaseBread(vector<int>& bread, vector<int>& baked, vector<int>& res ){
    res.resize(bread.size());
    for(int i = 0; i< bread.size(); i++){
        res[i] = bread[i] + baked[i];
    }
}

int main(){
    vector<int> bread = {8, 5, 9, 7, 5};
    vector<int> baked = {5, 5, 5, 5, 5};
    vector<int> res;
    cout<<bread.size()<< endl; 
    cout<<baked.size()<< endl; 
    cout<<res.size()<< endl; 
    increaseBread(bread, baked, res);

    cout<<res.size()<< endl; 
    for(int k = 0; k < res.size(); k++){
        cout<< res[k]<< " ";
    }

}
