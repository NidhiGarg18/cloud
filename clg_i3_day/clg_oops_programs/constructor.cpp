// //default constructor
// #include<iostream>
// using namespace std;
// class A
// {
//     int x,y;
//     public:
//     A()
//     {
//         x=2;
//         y=3;
//     }
//     int display();
// };
// int A::display()
// {
//     cout<<x<<endl;
//     cout<<y<<endl;
// }
// int main()
// {
//     A obj1;
//     obj1.display();
// }
//parameterized constructor
// #include<iostream>
// using namespace std;
// class A
// {
//     int x,y;
//     public:
//     A(int a,int b)
//     {
//         x=a;
//         y=b;
//     }
//     int display();
// };
// int A::display()
// {
//     cout<<x<<endl;
//     cout<<y<<endl;
// }
// int main()
// {
// A obj1(4,5);
// obj1.display();
// }
//default argument constructor
// #include<iostream>
// using namespace std;
// class A
// {
//     int x,y;
//     public:
//     A(int x=2,int y=3)
//     {
//         cout<<x+y;
//     }
// };    
// int main()
// {
//     A obj1(4);
// }
//copy constructor