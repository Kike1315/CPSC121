//============================================
//  File: No7Part2.cpp
//============================================
//============================================

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

struct PERSON {
    int age; float gpa; char name[20];
};

void numFiles(string fname, int& n);
void readData(string fname, PERSON x[], int n);
void display(PERSON x[], int n);

int main()
{
    int len;
    numFiles("two.txt", len);

    PERSON* p = new PERSON[len];
    readData("two.txt", p, len);
    
    display(p, len);
    
    return 0;
}

void numFiles(string fname, int& n)
{
    fstream f;
    f.open(fname, ios::in);
    f >> n;
    f.close();
}

void readData(string fname, PERSON x[], int n)
{
    fstream f;
    f.open(fname, ios::in);
    f.ignore();
    for(int i = 0; i < n; i++)
    {
        f >> x[i].age;
        f.ignore();
        f >> x[i].gpa;
        f.ignore();
        f.get(x[i].name, 20, '\n');
        f.ignore();
    }
}

void display(PERSON x[], int n)
{
    cout << left << setw(5) << "Age";
    cout << setw(5) << "GPA";
    cout << right << setw(20) << "Name\n";
    for(int i = 0; i < 30; i++)
    {
        cout << '_';
    }
    cout << endl;
    
    for(int i = 0; i < n; i++)
    {
        cout << fixed << showpoint << setprecision(1);
        cout << left << setw(5);
        cout << x[i].age;
        cout << setw(5) << x[i].gpa;
        cout << right << setw(20);
        cout << x[i].name << endl;
    }
}