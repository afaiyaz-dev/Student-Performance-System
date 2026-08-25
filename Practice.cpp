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
    cout<<"Do you want to go to the menu "<<endl;
    cout<<"press 'Y' for yes or 'N' for no "<<endl;
    cin>>input;

    while( input == 'Y' || input == 'y'){
        cout<<"\t\tMenu";
        cout<<"1. Add New Student"<<endl;
        cout<<"2. Display All Students"<<endl;
        cout<<"3. Search Student by Roll Number"<<endl;
        cout<<"4. Save Records to File"<<endl;
        cout<<"5. Exit"<<endl;
        int choice;
        cout<<"Enter the number to perform the following operations";
        cin>>choice;
        switch(choice){
            
        }

    }
}
