#include<iostream>
using namespace std;
class A{
  public:
    int k;
};
class B :virtual public A{   // virtual keyword makes memory shareable of any of the class to overcome diamond problem

};
class C :virtual public A{
 
};
class D : public B , public C{
  
};
int main(){
  D Dobj;
  Dobj.k=10;
  cout<<"K = "<<Dobj.k<<endl;
  return 0;
}
