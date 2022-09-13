// Define a class Bank and define member functions to read principal , rate of interest
// and year. Another member functions to calculate

#include<iostream>
using namespace std;

class Bank{
   private:
    int principal,rate,year,interest;
   public:
       Bank(){
         principal = 0;rate = 0; year = 0,interest = 0;
       }
       
       void setData(int prin,int rate,int year){
         this->principal = prin, this->rate = rate,this->year = year; 
       }
      
      void calculateInterest(){
         interest = (principal*rate*year)/100;
      }

      int getInterest(){
        return interest;
      }

      int getPrincipal(){
        return principal;
      }

      int getRate(){
        return rate;
      }

      int getYear(){
        return year;
      }
};

int main(){
 Bank b;
 b.setData(10,4,3);
 b.calculateInterest();
 cout<<"Interest is "<<b.getInterest()<<endl;
 return 0;
}