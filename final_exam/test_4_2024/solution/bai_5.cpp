#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 1e6 + 1;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

class Person
{
private:
    string name, address;

public:
    Person() {};
    Person(string name, string address)
    {
        this->name = name;
        this->address = address;
    };
    string getName()
    {
        return this->name;
    }
    string getAddress()
    {
        return this->address;
    }
};

class Student : public Person
{
private:
    string program;
    int year, fee;

public:
    Student() {};
    Student(string name, string address, string program, int year, int fee) : Person(name, address)
    {
        this->program = program;
        this->year = year;
        this->fee = fee;
    };
    int getFee()
    {
        return this->fee;
    }
    int getYear()
    {
        return this->year;
    }
    string getProgram()
    {
        return this->program;
    };
};

class Staff : public Person
{
private:
    string school;
    int pay;

public:
    Staff() {};
    Staff(string name, string address, string school, int pay) : Person(name, address)
    {
        this->school = school;
        this->pay = pay;
    };
    int getPay()
    {
        return this->pay;
    }
    string getSchool() { return this->school; }
};

void input(Student students[], Staff staffs[], int n, int m)
{
    for (int i = 0; i < n; ++i)
    {
        cin.ignore();
        string tmp;
        getline(cin, tmp);
        string name, address, program;
        int year, fee;
        getline(cin, name);
        getline(cin, address);
        getline(cin, program);
        cin >> year >> fee;
        students[i] = Student(name, address, program, year, fee);
    }
    for (int i = 0; i < m; ++i)
    {
        cin.ignore();
        string tmp;
        getline(cin, tmp);
        string name, address, school;
        int pay;
        getline(cin, name);
        getline(cin, address);
        getline(cin, school);
        cin >> pay;
        staffs[i] = Staff(name, address, school, pay);
    }
    cin.ignore();
    string tmp;
    getline(cin, tmp);
}

int cmp1(Student a, Student b)
{
    if (a.getFee() != b.getFee())
        return a.getFee() > b.getFee();
    return a.getName() < b.getName();
}

int cmp2(Staff a, Staff b)
{
    if (a.getPay() != b.getPay())
        return a.getPay() > b.getPay();
    return a.getName() < b.getName();
}

void output(Student students[], Staff staffs[], int n, int m)
{
    cout << "Student List : " << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << "-----------------\n";
        cout << "Full Name : " << students[i].getName() << endl;
        cout << "Address : " << students[i].getAddress() << endl;
        cout << "Program : " << students[i].getProgram() << endl;
        cout << "Year : " << students[i].getYear() << endl;
        cout << "Fee : " << students[i].getFee() << " $" << endl;
    }
    cout << "-----------------\n";
    cout << "Staff List : " << endl;
    for (int i = 0; i < m; ++i)
    {
        cout << "-----------------\n";
        cout << "Full Name : " << staffs[i].getName() << endl;
        cout << "Address : " << staffs[i].getAddress() << endl;
        cout << "School : " << staffs[i].getSchool() << endl;
        cout << "Pay : " << staffs[i].getPay() << " $" << endl;
    }
    cout << "-----------------\n";
}

int main()
{
    faster();
    int n, m;
    cin >> n >> m;

    Student students[n];
    Staff staffs[m];
    input(students, staffs, n, m);
    sort(students, students + n, cmp1);
    sort(staffs, staffs + m, cmp2);
    output(students, staffs, n, m);
    return 0;
}