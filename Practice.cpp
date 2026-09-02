#include<iostream>
#include<vector>
#include<limits>
using namespace std;

struct student{
    string name;
    int rollno;
    vector <float> marks;
    char grade;
};

void addstudent(vector <student> & students){
    student s;
    cout<<"Enter student name"<<endl;
    cin>>s.name;
    cout<<"Enter student rollno"<<endl;
    cin>>s.rollno;
    int totalsubject;
    do{
        cout<<"Enter a total number of subjects... "<<endl;
        if(!(cin>>totalsubject) || totalsubject <=0){
            cout<<"Enter a valid number of subject must be greater than zero"<<endl;
            cin.clear();
            cin.ignore(numeric_limits <streamsize>::max(), '\n');
            totalsubject=0;
        }
        else{
            break;
        }
    }while (true);
    
    for(int i=0; i<totalsubject; i++){
        float tempmarks;
        cout<<"Enter marks of subject "<< i+1<<endl;
        cin>>tempmarks;
        s.marks.push_back(tempmarks);
    }
    float sum=0;
    for(float numbers: s.marks){
        sum+=numbers;
    }
    cout<<s.name<<" total is "<< sum<<endl;
    float avg=(sum/totalsubject);
    if(avg>=90){
        s.grade='A';
    }
    else if(avg>=80){
        s.grade='B';
    }
    else if(avg>=70){
        s.grade='C';
    }
    else if(avg>=60){
        s.grade='D';
    }
    else{
        s.grade='F';
    }
    cout<<s.name <<" is = "<<s.grade<<endl;

    students.push_back(s);

}

int main(){
    int input;
    vector <student> mainstd;
    
    do{
        cout<<"\n\ntMenu"<<endl;
        cout<<"1. Add a new student"<<endl;
        cout<<"2. Display all students"<<endl;
        cout<<"3. search student by roll no"<<endl;
        cout<<"4. Save records to file"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter a number to perform operation";

        if(!(cin >> input)){
            cout<<"Invalid input! please enter a valid number";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch(input){
            case 1:
            addstudent(mainstd);
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
