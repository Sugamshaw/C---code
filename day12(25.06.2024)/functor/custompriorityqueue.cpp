#include <iostream>
#include <vector>
#include <queue>
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
        // if (a.marks == b.marks)
        // {
        //     return a.name < b.name;
        // }
        return a.marks < b.marks;
    }
};

int main()
{
    priority_queue<Student, vector<Student>, StudentComparator> pq;
    pq.push(Student(10, "A"));
    pq.push(Student(52, "B"));
    pq.push(Student(80, "C"));
    pq.push(Student(40, "D"));
    pq.push(Student(50, "E"));
    while (!pq.empty())
    {
        cout << pq.top().marks << pq.top().name << endl;
        pq.pop();
    }

    // priority_queue<int> p1;
    // priority_queue<int,vector<int>,less<int>> p2;
    // priority_queue<int,vector<int>,greater<int>> p3;

    return 0;
}