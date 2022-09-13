// Define a class Box and write a program to enter length, breadth and height and
// initialise objects using constructor also define member functions to calculate volume
// of the box.

#include<iostream>
using namespace std;

class Box{
   private:
     int len,breadth,height,result;
   public:
     
     Box(){
      len = 0, breadth = 0, height = 0;
     }  

     Box(int l,int b,int h){
      len = l, breadth = b, height = h;
     }  

     void calculateBox(){
        result = len * breadth * height;
     }

     int getCalculateResult(){
        return result;
     }

     int getLength(){
        return len;
     }

     int getBreadth(){
        return breadth;
     }

     int getHeight(){
        return height;
     }


};

int main(){
  Box b(5,10,20);
  b.calculateBox();
  cout<<"lenght of box is "<<b.getLength()<<endl;
  cout<<"Height of box is "<<b.getHeight()<<endl;
  cout<<"Breadth of box is "<<b.getBreadth()<<endl;
  cout<<"calculated volume is "<<b.getCalculateResult()<<endl;
  return 0;
}