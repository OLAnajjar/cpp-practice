#include <iostream>

using namespace std;

//part b:
void print(int){cout<< "int: ";}
void print(double){cout<< "double: ";}
void print(char){cout<<"char: ";}

//part c
int check(int &x){
    x+=2;
    return x%3 == 0;
}

int main(){
    cout<< "part a:"<< endl;
    //part a
    int arr[] = {1,2,3,4};
    int *ptr = arr +1;
    cout << *ptr << " ";
    ptr ++;
    cout << *ptr << endl;

    cout<< "\n\npart b:"<<endl;
    //part b
    print(2.0f);
    print('A' + 1.0);
    print(5);

    cout<< "\n\npart c:"<< endl;
    //partc
    int x= 4;
    if(x>3 && check(x) && check(x)){
        cout <<x;
    }else{
        cout << x;
    }

    cout<< "\n\npart d:"<< endl;
    //part d
    int a =1, b=2, c =3;
    while(a<3 && b<5){
        b++;c--;
        if(c>1){
            a++;
        }
        else{
            break;
        }
    }
    cout<< a << " "<< b<< " "<< c <<endl;
}