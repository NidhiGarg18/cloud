#include<iostream>
using namespace std;
class greet
{
    public:
    int greeting();
};
int greet::greeting()
{
    cout<<"hello";
}
int main()
{
    greet g1;
    g1.greeting();
    return 0;
}
