#include<iostream>
#include<vector>
using namespace std;

struct student{
    string name;
    int rollno;
    vector <float> marks;
    char grade;
};

int main(){
    int X;
    vector <student> st;

    while(true){
        cout<<"Ghelp";
        cout<<"Add a new student";
        cout<<"Display all students";
        cout<<"Save records to file";
        cout<<"Exit";
    }
}
