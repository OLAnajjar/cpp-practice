#include <iostream>
using namespace std;

int addition(int a, int b){
    return(a+b);
}

int subtra(int a, int b){
    return(a-b);
}

int multi(int a, int b){
    return(a*b);
}

int divi(int a, int b){
    return(a/b);
}


int main(){
    int a,b;
    int i;
    //lets define and array of function pointers
    int is_valid = false;
    int is_divi = true;

    int (*funcptr[4])(int, int) = {addition, subtra, multi, divi};
    cout << "please enter the first number: ";
    cin >> a; 

    cout << "enter the 2nd number: ";
    cin >> b; 

    cout<< "\nwhat is the deired operation 1)+  2)-  3)*  4)/  : ";
    cin >> i;

    if((i < 5 && i> 0)){
        is_valid = true; //for operation
    }if(i == 4){
        if(b == 0){
            is_valid = false;
            is_divi = false;
        }
    }


    if(is_valid){
        cout << (*funcptr[i-1])(a,b)<< endl; 
    } else if(not is_divi){
        cout<< "Enter a valid b variable please\n";
    }
    else{
        cout<< "Enter a valid operation choice please\n";
        return 0;
    }

    return 0; 
}