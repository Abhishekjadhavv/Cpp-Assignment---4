// Define a class Counter and Write a program to Show Counter using Constructor.

#include<iostream>
using namespace std;

class Counter{
   private:
      int count;
   public:
      Counter(){
        count = 0;
     } 
     
     void inc_count(){
        count++;
     }   
     
     int getCount(){
        return count;
     }
};

int main(){
   Counter c;
   cout<<"Before increment"<<endl;
   cout<<c.getCount()<<endl;

   c.inc_count();
   
   cout<<"After increment"<<endl;
   cout<<c.getCount()<<endl;

   return 0;
}