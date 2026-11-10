/*Arrays of function pointers: 
lets for now make a calculator with 4 operations 
1) subtraction
2) addition 
3) multiplication 
4) division
 */
#include <iostream>

using namespace std;

int subtraction(int a, int b){
    return (a-b);
}

int addition(int a, int b){
    return (a+b);
}

int multipli(int a, int b){
    return (a*b);
}

int division(int a, int b){
    return(a/b);
}

int operation(int a, int b, int (*functionptr)(int, int)){
    int g = (*functionptr)(a, b);
    return(g);
} 


int main(){
    int a,b;
    // 1st manner to use the function pointer
    int (*functionptr)(int, int);

    functionptr = addition;

    cout << (*functionptr)(8,9)<< endl;

    // 2nd manner to do this

    cout<< (*subtraction)(5,1)<< endl;

    //3rd manner:

    cout<< multipli(8,2)<<  endl;

    //4th manner

    int m = operation(125,5, functionptr);

    cout << "m: "<< m << endl;

    functionptr = division;
    m = operation(125,5, functionptr);
    cout<<"m: "<< m << endl;


}
