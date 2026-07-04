#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : public Person {
private:
    string student_admission_number;
    string class_name;

public:
    void setStudent(string adm, string cls) {
        student_admission_number = adm;
        class_name = cls;
    }

    void display_student() {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
        cout << "Admission Number: " << student_admission_number << endl;
        cout << "Class Name: " << class_name << endl;
    }
};

int main() {
    Student s1;

    s1.setPerson("John Doe", 20);
    s1.setStudent("ADM12345", "Computer Science");

    s1.display_student();

    return 0;
}            