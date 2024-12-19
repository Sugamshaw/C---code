#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int func()
{
}
class Student
{
public: // attributes //////////////////////////////////
    int id;
    int age;     //
    string name; //////////////////////////////////////////////////////////////////
    int nos;

    Student(int id, int age, string name)
    {
        this->id = id;
        this->age = age;
        this->name = name;
    }
    Student(const Student &srcobj)
    {
        cout << "copy constructor" << endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
    }
    void study()
    {
        cout << this->name << " is Studying" << endl;
    }
    void sleep()
    {
        cout << this->name << " is sleeping" << endl;
    }
    void bunk()
    {
        cout << this->name << " is bunking" << endl;
    }

    ~Student()
    {
        cout << this->name << " is leaving" << endl;
    }
};
int main()
{
    Student s1(10, 19, "Sugam");
    // s1.name = "Sugam2";
    // s1.bunk();
    // cout << 10 + 20 << endl;
    // Student s2(10, 19, "ravi");
    // s2.study();
    // cout << 15 << endl;
    // Student s3(10, 19, "saswat");
    // s3.study();
    // cout << 70 << endl;
    // cout<<s3.name << endl;

    // Student s2 = s1;
    // s2.sleep();
    Student *a = new Student(10, 19, "Sas");
    cout << a->name << endl;
    delete a;
    return 0;
}



