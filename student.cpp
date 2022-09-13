// Define a class student and write a program to enter student details using constructor
// and define member function to display all the details.

#include<iostream>
using namespace std;

class Student{
  private:
    int RollNo;
    char name[20];
 public:
    Student(){
        cout<<"Enter student RollNo and Name"<<endl;
        cin>>RollNo;
        cin.ignore();
        cin.getline(name,20);
    } 

    void displayData(){
        cout<<"RollNo is "<<RollNo<<" and name is "<<name<<endl;
    }  

};

int main(){
    Student s1,s2;
    s1.displayData(); 
    s2.displayData(); 
    return 0;
}