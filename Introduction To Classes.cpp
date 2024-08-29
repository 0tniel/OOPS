//Otniel Jhirad
//23070123069
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    float age;
    int year;
};

int main() {
    Student S1;
    S1.name = "Otniel";
    S1.age = 18;
    S1.year = 2006;
    cout << "Name: " << S1.name << endl;
    cout << "Age: " << S1.age << endl;
    cout << "Year: " << S1.year << endl;
    Student S2;
    S2.name = "Vipin"; 
    S2.age = 19;
    S2.year = 2005;
    cout << "Name 2: " << S2.name << endl;
    cout << "Age 2: " << S2.age << endl;
    cout << "Year 2: " << S2.year << endl;
    
    return 0;
}
/*
Output
Name: Otniel
Age: 18
Year: 2006
Name 2: Vipin
Age 2: 19
Year 2: 2005
*/
