#include<iostream>
#include<string.h>
using namespace std;
class student
{
    private:
    char name[30];
    float per;
    int p,q;
    public:
    int getdata();
    int putdata();
int student::getdata()
{
    cout<<"name"<<endl;
    cin>>name;
    cout<<"per"<<endl;
    cin>>per;
}
int student::putdata()
{
    cout<<"name"<<name<<endl;
    cout<<"per"<<per<<endl;
}
int hello()
{
    cout<<"total fees"<<calculate<<endl;
}
int calculate()
{
    return p+q;
}
};
int main()
{
    student s1;
    s1.getdata();
    s1.putdata();
    s1.hello();

}