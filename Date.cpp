// Define a class Date and write a program to Display Date and initialise date object
// using Constructors.

#include<iostream>
using namespace std;

class Date{
    private:
     int D,M,Y;
    public:
      Date(){
        D = 0,M = 0,Y = 0 ;
      }
      Date(int d,int m,int y){
        D = d;
        M = m;
        Y = y;
      } 

      void displayDate(){
        cout<<D<<"-"<<M<<"-"<<Y<<endl;
      }
};

int main(){
 Date D(13,9,2022);
 D.displayDate();
 return 0;
}