#include<iostream>
using namespace std;
class room
{
    private:
    static int a;
    public:
    int getline();
    int display();
};
int room::getline()
{
    a++;
}
int room::display()
{
    cout<<"a"<<a<<endl;
}
int main()
{
    room r1,r2,r3;
    r1.getline();
    r2.getline();
    r3.getline();
    r1.getline();
    r2.getline();
    r3.getline();
    r1.display();
    return 0;
}
