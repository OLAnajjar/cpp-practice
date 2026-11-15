/*write the implementation for the BankAccount class in which
it's used as given  below . Note that you must use the private 
variables given in the code. your're responsible for writing 
everything that will come before the code given. There're 5 
member functions.*/


// n1 is an object which is created via the constructor
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


class BankAccount {
public: 
    BankAccount(string namey = "Fofo", int num = 00000, double balancey = 0.0 ){
        owner = namey;
        accountNumber = num;
        balance = balancey;
    }
    void setName(string name){
        owner = name;
    }
    void display(){
        cout << "owner's name: "<< owner<<endl;
        cout << "Account number: "<< accountNumber<<endl;
        cout << "Balance: "<< fixed << setprecision(2)<< balance<<endl;;
    }
    void deposit(double money){
        balance += money;
    }

    void withdraw(double money){
        balance -= money;
    }

//write anything that must be written above this part
//most of the things below are given
private: 
    string owner;
    int accountNumber;
    double balance;
};//end of BankAccount class


int main(){
    string name = "Super Man";
    BankAccount n1(name, 12345, 500.0); //1


    string name2 = "Spider Man";
    n1.setName(name2);                  //2
    n1.display();                       //3

    /* owner's name: Spider Man
       Account number: 123456
       Balance: 500.00*/

    n1.deposit(250.0);                   //4
    n1.withdraw(150.0);                  //5
    n1.display();
    /*owner's name: Spider man
      Account number: 12345
      Baance: 600.0*/

    return 0;
}