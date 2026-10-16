// week 2 page 13
// Define class Gradebook with a member function displayMessage;
// create a Gradebook object and call its displayMessage
//function 
// 1st we need to include the header
#include <iostream>
// incluse the std to be able to use cout&cin
using namespace std; //"please do not forget using the ;"

//creating the Gradebook class

class Gradebook
{
    //public for member functions 
    public:
        //I will show a welcoming message so the function type
        //may be void
        void displayMessage(){
            cout << "Welcome to Gradebook"<<endl;
        }; // here also do not forget using the semicolon

};

// one of the most important parts if not the most important one is the main function
int main(){
    //creating the object
    //Gradebook = myBook1; => this is done in python not here
    Gradebook myBook1;
    myBook1.displayMessage();
    return 0;
}//no semicolon here!