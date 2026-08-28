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
    int input;
    
    do{
        cout<<"/n/tMenu"<<endl;
        cout<<"1. Add a new student"<<endl;
        cout<<"2. Display all students"<<endl;
        cout<<"3. search student by roll no"<<endl;
        cout<<"4. Save records to file"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter a number to perform operation";
        cin>>input;

        switch(input){
            case 1:
            //add student()
            break;

            case 2:
            //Display all students();
            break;

            case 3:
            //search student by roll no()
            break;

            case 4:
            //save records to files();
            break;

            case 5:
            cout<<"Exiting program..."<<endl;
            break;

            default:
            cout<<"Invalid input... Try again";
            break;
        }
    }while(input!=5);
    
    return 0;
}
