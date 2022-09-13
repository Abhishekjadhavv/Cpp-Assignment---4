// 1. Define a class Complex to represent a complex number with instance variables a and
// b to store real and imaginary parts. Also define following member functions
// a. void setData(int,int)
// b. void showData()
// c. Complex add(Complex)

#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imaginary;

public:
    void setData(int r, int i)
    {
        this->real = r;
        this->imaginary = i;
    }

    void showData()
    {
        cout << real << " + " << imaginary << "i";
    }

    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setData(4, 5);
    c2.setData(5, 7);
    c3 = c1.add(c2);
    c3.showData();
    return 0;
}