// Define a class Bill and define its member function get() to take detail of customer ,
// calculateBill() function to calculate electricity bill using below tariff :
// Upto 100 unit RS. 1.20 per unit
// From 100 to 200 unit RS. 2 per unit
// Above 200 units RS. 3 per unit.


#include<iostream>
using namespace std;

class Bill{
  private:
    
    float amount;int unit;
    string customerName;
  public:
    Bill(){
        amount = 0;
    }

    void get(int unit,string name){
       this->unit = unit;
       this->customerName = name;
    } 
   
    void calculateBill() {
         if(unit < 100){
            amount = unit * 1.20;
         }else if(unit>=100 && unit<=200){
           amount = unit * 2.0;
         }else{
           amount = unit * 3.0;
         }
    }

    int getBill(){
        return amount;
    }

};

int main(){
     Bill b;
     b.get(100,"Abhishek");
     b.calculateBill();
     cout<<b.getBill()<<endl;
    return 0;
}