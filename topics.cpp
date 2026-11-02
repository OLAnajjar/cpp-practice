#include <iostream>
// working on while example

using namespace std;

int main(){
    int sayac = 0;
    int coins;
    int total = 0;

    while(sayac < 5){
        cout<<"put your coins into the box: ";
        cin >> coins;
        //cout<<"\n";
        total = total + coins;
        sayac = sayac + 1;
    }

    cout<< "you have "<< total <<endl;

}