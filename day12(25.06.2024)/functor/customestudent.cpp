#include <iostream>
#include <vector>
#include <algorithm>
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
        if (a.marks == b.marks)
        {
            return a.name < b.name;
        }
        return a.marks < b.marks;
    }
};

int main()
{
    vector<Student> arr;
    arr.push_back(Student(90, "A"));
    arr.push_back(Student(90, "B"));
    arr.push_back(Student(95, "C"));

    sort(arr.begin(), arr.end(), StudentComparator());

    for (auto i : arr)
    {
        cout << i.name << " " << i.marks << endl;
    }
    return 0;
}