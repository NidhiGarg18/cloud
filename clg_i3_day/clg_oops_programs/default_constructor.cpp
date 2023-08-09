#include<iostream>
using namespace std;
class vehicle
{
    int price;
    char colour[30],red;
    public:
    vehicle()
    {
        price=20000;
        colour=red;
    } 
    int display()
    {
        cout<<price<<colour;
    }
}
int main()
{
    vehicle v1;
    v1.display();
}
