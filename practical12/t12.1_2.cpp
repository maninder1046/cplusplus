#include<iostream>
using namespace std;

class A{
  public:
    int x;
  protected:
    int y;
  private:
   int z;
};
class B: protected A{        //protected inheritance
  public:
     void display(){
        x=10;
        y=20;
       //z=30; //  ERROR because Z is private in base class
       cout<<"value of inherited X  "<<x<<endl;
       cout<<"value of inherited Y  "<<y<<endl;
       //cout<<"value of inherited Z"<<z<<endl;
    }
};
int main(){
 B obj;
  //obj.x=10; we cant access any variable because B protectedly inherited A
  //obj.y=20;
  //obj.z=30;
 
  obj.display();
}
