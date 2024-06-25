#include <iostream>
#include <vector>
using namespace std;
class Student
{
public:
    int marks;
    string name;
    Student() {}
    Student(int marks, string name)
    {
        this->marks = marks;
        this->name = name;
    }
};
class StudentComparator
{
public:
    bool operator()(Student a, Student b)
    {
        return a.marks < b.marks;
    }
};

int main()
{
    Student s1(10, "ds");
    Student s2;
    // s1.marks = 90;
    // s1.name = "a";
    s2.marks = 80;
    s2.name = "b";

    StudentComparator cmp;
    if (cmp(s1, s2))
    {
        cout << "s1 is less than s2" << endl;
    }
    else
    {
        cout << "s1 is greater than s2" << endl;
    }
    return 0;
}