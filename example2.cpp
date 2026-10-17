/*here we will go one step forward on the same class- 
yes ir is Gradebook :D. 
- we need to set the course name (setCourseName() "function")
- then to get the course name via (getCourseName() "function")
- and ofcoursr to greet the user (displayMessage()) with
"Welcome to the grade book for [courseName]!"

=> so as you may be noticed we need a variable to store the 
course name hence as private member we need courseName to 
be a string variable
*/
// including the libraries
#include <iostream>
// also we need to include the string lib. so we can deal with them
#include <string>

using namespace std; 

class Gradebook 
/*here we do not need colon which is needed in python
 class Gradebook: X */
{
    public:

    void setCourseName(string name){
        courseName = name; //store the course name in the "class"
    }

    string getCourseName(){
        return courseName;
    }

    void displayMessage(){
        cout<< "Welcome to the grade book for "<< getCourseName() <<"!"<< endl;
    /* cout<< "Welcome to the grade book for "<< courseName<<"!"<< endl;
       this wont work because we need getCourseName() function*/
    }   

    private:
    string courseName;
};


int main(){
    // creating object
    Gradebook mybook;
    string nameOfCourse;

    cout<< "Enter the course name, please: "<< endl;
    getline(cin, nameOfCourse); /*read the input with blanks and store 
    it in the variable nameOfCourse */
    mybook.setCourseName(nameOfCourse); //do not forget to inform the class with the var.
    mybook.displayMessage();
    return 0;

}   


