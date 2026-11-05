#include <iostream>
// working on while example

using namespace std;

int main(){
    int sayac = 0;
    int coins;
    int total = 0;
    int a = 0; 
    while(sayac < 5){
        cout<<"put your coins into the box: ";
        cin >> coins;
        //cout<<"\n";
        total = total + coins;
   
        sayac = sayac + 1;
    }

    cout<< "you have "<< total <<endl;

    cout<<"\n a = "<< a;
    cout<<"\n a++ = "<< a++;
    cout<<"\n a(new) = "<< a; 
    cout<<"\n ++a = "<< ++a;
    cout<<"\n a(new) = "<< a;
    
    cout<< endl;
    for(int k = 0; k<10; ){ 
        cout << k <<" ";
        k++;
}


}