#include<iostream>
using namespace std;
class flower
{
  char colour[30];
  char name[30];
  public:
  flower()
 {
  colour=red;
  name=rose;
 }
 int display()
 {
   cout<<colour<<name;
 }
};
  int main()
 {
   flower s1;
   s1.display();
   return 0;
 }