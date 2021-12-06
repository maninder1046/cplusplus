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
class B: private A{        //private inheritance
  public:
     void display(){
        x=10;              //we can access x,y within inherited class only since it is privately inherited
        y=20;
       //z=30; //  ERROR because Z is private in base class
       cout<<"value of inherited X  "<<x<<endl;
       cout<<"value of inherited Y  "<<y<<endl;
       //cout<<"value of inherited Z"<<z<<endl;
    }
};
int main(){
 B obj;
  //obj.x=10; we cant access any variable because B privately inherited A
  //obj.y=20;
  //obj.z=30;
 
  obj.display();
}
