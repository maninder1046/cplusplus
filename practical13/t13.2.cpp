#include<iostream>
using namespace std;
class Parent{
  public:
    virtual int add(int a,int b){
      return (a+b);
    }
    virtual int multi(int a ,int b)=0;
 };
class Child:public Parent{
  public:
    int  add(int a,int b){
      return (a+b+10);
    } 
    int multi(int a, int b){
      return (a*b);
	}
};
 int main(){
   Child c;
   Parent *p;      // we can only make pointers of ABSTRACTED Class
   p=&c;
   cout<<p->add(5,2)<<endl;   //it will access child's ADD() //17
   cout<<p->multi(5,2)<<endl; //10
 }    
 //If any class is abstracted we can't make their objects but can make pointers only...
