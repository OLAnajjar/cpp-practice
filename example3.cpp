//Frequency Counter 
/*Counts how many times each number 
(1–4) appears when rolling a dice 10,000 times.*/
// YES a dice with only 4 sides and not 6 :D
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main(){
    // the sides number is constant 
    // here we may create an array with the number of the faces
    const int arraysize = 4;
    int sideFrequence[arraysize] = {0};
    //initializing with 0 

    /* to assume that we through the dice and get a random
    between 1 to 4 we will need to use the random random number generator*/
    srand(time(0));
    for (int roll = 1; roll <= 10000; roll++)
    {
        sideFrequence[rand() % 4]++;
    }

    cout << " side " << setw(14) << " frequency " <<endl;
    for(int side = 0; side < arraysize; side++){
        cout<< setw(4) << side+1 << setw(14) << sideFrequence[side]<< endl;
    }
    


}