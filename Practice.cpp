#include<iostream>
#include<fstream>
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
    cin.ignore( numeric_limits <streamsize> :: max(), '\n');
    getline(cin,s.name);
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
    
    vector <string> subjectnames;
    string subject;
    for( int i=0; i<totalsubject; i++ ){
        cout<<"Enter subject " << i+1 << " name" <<endl;
        cin>>subject;
        subjectnames.push_back(subject);
    }

    for(int i=0; i<totalsubject; i++){
        float tempmarks;
        cout<<"Enter marks of "<< subjectnames[i] <<endl;
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

void file( vector <student> & filesave , vector <string> & subjectnames){
    ofstream file("student data file.txt");
    if(file.is_open()){
        for( student datafile : filesave){
            int totalmarks=0;
            file<<"Student name\t= "<< datafile.name<<endl;
            file<<"Student rollno\t= "<< datafile.rollno<<endl;
            for(float stdmarks : datafile.marks){
                for( string stdsubject : subjectnames){
                    file<< stdsubject << " = " << stdmarks << endl;
                }
                totalmarks += stdmarks;
            }
            file<<"Total Marks = " << totalmarks<<endl;
            file<<"Grade = "<< datafile.grade<<endl;
        }
        file.close();
        cout<<"Data has been saved sucessfully."<<endl;
        cout<<"Closing file...."<<endl;
    }
}

int main(){
    int input;
    vector <student> mainstd;
    vector <string> subjectname;
    
    do{
        cout<<"\n\ntMenu"<<endl;
        cout<<"1. Add a new student"<<endl;
        cout<<"2. Display all students"<<endl;
        cout<<"3. search student by roll no"<<endl;
        cout<<"4. Save records to file"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter a number to perform operation"<<endl;

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
            file(mainstd,subjectname);
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
