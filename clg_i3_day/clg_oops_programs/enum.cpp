#include<iostream>
using namespace std;
enum{jan=1,feb=2,march=3,april=4,may=5,june=6,july=7,aug=8,sept=9,oct=10,nov=11,dec=12};
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    switch(n)
    {
        case jan:cout<<"jan";break;
        case feb:cout<<"feb";break;
        case march:cout<<"march";break;
        case april:cout<<"april";break;
        case may:cout<<"may";break;
        case june:cout<<"june";break;
       case july:cout<<"juiy";break;
       case aug:cout<<"aug";break;
       case sept:cout<<"sept";break;
        case oct:cout<<"oct";break;
       case nov:cout<<"nov";break;
        case dec:cout<<"dec";break;
    }
}