//Otniel Jhirad
//23070123069
//ENTC A3
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    float age;
    int year;
    void mymethod() const; 
};

void Student::mymethod() 
const {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Year: " << year << endl;
}

int main() {
    Student S1;
    S1.name = "Otniel";
    S1.age = 18;
    S1.year = 2006;
    S1.mymethod();
    Student S2;
    S2.name = "Vipin";
    S2.age = 19;     
    S2.year = 2005; 
    S2.mymethod();
    
    return 0;
}

/*
Output
I am In Second Year
Name: Otniel
Age: 18
Year: 2006
I am In Second Year
Name: Vipin
Age: 19
Year: 2005
*/
