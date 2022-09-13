// 10. Define a class StaticCount and create a static variable. Increment this variable in a
// function and call this 3 times and display the result.

#include<iostream>
using namespace std;

class StaticCount{
  private:
    static int count;
  public:
     
    static void incCount(){
        count++;
    }
   
    static int getCount(){
        return count;
    }

};

int StaticCount::count = 0;

int main(){
    StaticCount::incCount();
    StaticCount::incCount();
    StaticCount::incCount();
    cout<<StaticCount::getCount()<<endl;
    return 0;
}