#include <iostream>
using namespace std;
void passbyvalue(int x, int y, int z)
{
  cout<<"In function passbyvalue: passed "
     <<" x = "<<x<<"  y =  "<<y<<"  z =  "<<z<<endl;
  x=6;
  y=7;
  z=8;
  cout<<"After Assignment in passbyvalue   ";
  cout<<"x= "<<x<<"y = "<<y<<"z = "<<z<<endl;
}
int main()
{
  int a,b,c;
  a=3;
  b=4;
  c=5;
  passbyvalue(a,b,c);
  cout<<"In Main after call to passbyvalue  ";
  cout<<"a= "<<a<<"b= "<<b<<"c = "<<c<<endl;
}
