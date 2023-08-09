#include<iostream>
using namespace std;
class fruit
{
    private:
    int price;
    char name[30];
    public:
    int getdata();
    int putdata();
};
int fruit::getdata()
{
    cout<<"enter name of fruit"<<endl;
    cin>>name;
    cout<<"enter price"<<endl;
    cin>>price;
}
int fruit::putdata()
{
    cout<<"name"<<name<<endl;
    cout<<"price"<<price<<endl;
}
int main()
{
    fruit f1;
    f1.getdata();
    f1.putdata();
    return 0;
}
