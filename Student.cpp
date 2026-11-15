#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Student{
public:
    // the constructor
    Student(string namey = "lana", int identity = 48585, double gpa_1 = 2.50){
        name = namey;
        id = identity;
        gpa = gpa_1;
    }

    void setName(string newName){
        name = newName;
    }

    void updateGpa(double newGpa){
        gpa = newGpa;
    }

    void display(){
        cout << "student name: "<< name << endl;
        cout << "id number: "<< id <<endl;
        cout << "gpa: "<< fixed << setprecision(2) << gpa << endl;
    }


private:
    string name;
    int id;
    double gpa;
};


int main(){
    string name = "ola";
    Student s1(name, 22104536, 3.00);
    
    s1.display();
}