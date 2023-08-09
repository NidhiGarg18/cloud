// #include<iostream>
// using namespace std;
// class abc
// {
//     int x,y;
//     public:
//     abc()
//     {
//         x=2;
//         y=2;
//     }
//     int display();
//     int operator -();
// };
// int abc::display()
// {
//     cout<<x<<endl;
//     cout<<y<<endl;
// }
// int abc::operator -()
// {
//     x=-x;
//     y=-y;
// }
// int main()
// {
//     abc obj;
//     obj.display();
//     -obj;
//     obj.display();
// }
#include<iostream>
using namespace std;
class abc
{
    int x,y;
    public:
    abc()
    {
        x=2;
        y=3;
    }
    int display();
    int operator -();
};
int abc::display()
{
    cout<<x<<endl;
    cout<<y<<endl;
}
int abc::operator -()
{
    x=-x;
    y=-y;
}
int main()
{
    abc obj;
    obj.display();
    -obj;
    obj.display();


}