#include<iostream>
using namespace std;
class vehicle
{
    private:
    int price;
    char name[30];
    public:
    int getdata();
    int putdata();
};
int vehicle::getdata()
{
  cout<<"name"<<endl;
  cin>>name;
  cout<<"price"<<endl;
  cin>>price;
}
int vehicle::putdata()
{
    cout<<"name"<<name<<endl;
    cout<<"price"<<price<<endl;
}
int main()
{
    vehicle v1;
    v1.getdata();
    v1.putdata();
    return 0;
}