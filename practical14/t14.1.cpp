 //---------Early Binding---------------
#include<iostream>
using namespace std;
class Parent{
  public:
    int add(int a,int b){
      return (a+b);
    }
 };
class Child:public Parent{
  public:
    int add(int a,int b){
      return (a+b+10);
    } 
}; 
int main(){
  cout<<"EARLY BINDING \n";
  Parent P,*p;
  Child C;
  p=&P;                       //reference of Parent object
  cout<< p->add(1,2) <<endl;
  p= &C;                     // it still hold address of Base because it is done in EARLY BINDING(compile time)
  cout<< p->add(1,2) <<endl;
}

//---------Late Binding---------------
#include<iostream>
using namespace std;
class Parent{
  public:
    virtual int add(int a,int b){
      return (a+b);
    }
 };
class Child:public Parent{
  public:
    virtual int add(int a,int b){
      return (a+b+10);
    } 
}; 
int main(){
  cout<<"LATE BINDING \n";
  Parent P,*p;
  Child C;
  p=&P;         //reference of Parent object
  cout<< p->add(1,2) <<endl;
  p= &C;        // now it will hold address of child's C because using virtual 
                // compiler left the assignment for RUNTIME  
  cout<< p->add(1,2) <<endl;
}
