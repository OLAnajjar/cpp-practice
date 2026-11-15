#include <iostream>
#include <string>

using namespace std;

class Course{
public: 
    Course(string defCourseCode = "ENG101", string defCourseName = "English", int defCredit = 2, int defCapacity = 50){
        //initialization/defitation
        courseCode = defCourseCode;
        courseName = defCourseName;
        credit = defCredit;
        capacity = defCapacity;
    }

    void setCapacity(int newCapacity){
        if (newCapacity <= 0){
            cout<< "enter a valid capacity number ";
        }else{
            capacity = newCapacity;
        }
    }

    void display(){
        cout <<" welcode to obs. the course's "<<endl;
        cout << "code: " << courseCode<<endl;
        cout << "name: " << courseName<<endl;
        cout << "credit "<< credit<<endl;
        cout <<"capacity: "<<capacity<<endl;
    }



private:
    string courseCode;//BLM101
    string courseName;//object oriented programming
    int credit;
    int capacity;

};

int main(){
    Course c1;
    Course c2("MAT2145", "şifreleme", 4, 50);

    c1.display();
    c2. display();
}


