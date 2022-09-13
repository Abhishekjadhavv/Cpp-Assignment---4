// Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include <iostream>
using namespace std;

class Cube
{
private:
    int cube, cubeResult;

public:
    Cube(int cube)
    {
        this->cube = cube;
    }
    void calCube()
    {
        cubeResult = cube * cube * cube;
    }
    int getCube()
    {
        return cubeResult;
    }
};

int main()
{
    Cube cube(4);
    cube.calCube();
    cout << cube.getCube() << endl;
    return 0;
}