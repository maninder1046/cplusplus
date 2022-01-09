#include<iostream>
using namespace std;
class Base{
 public:
   Base(){
     cout<<"Base constructor\n";
    }
   ~Base(){
     cout<<"Base destuctor \n";  
   }
};
class Child:public Base{
 public:
   Child(){
     cout<<"child constructor\n";
    }
   ~Child(){
     cout<<"child destuctor \n";  
   }
};
int main(){
  Base *p = new Child;
  cout<<"CALLING BASE CLASS DESTRUCOR FROM POINTER\n";
   p->~Base();
  
}
