#include <iostream>
using namespace std;
class Person {
public:
    string name;
    int age;
    Person() {
        name = "Abdullah";
        age = 5;
    }
    Person(string n) {
        name = n;
        age = 0;
    }
    Person(string n, int a) {
        name = n;
        age = a;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
   
    Person p1;               
    Person p2("Talha");
    Person p3("Raghib", 2);
    p1.display();
    p2.display();
    p3.display();
    return 0;
}