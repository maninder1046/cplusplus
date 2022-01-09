#include<iostream>
using namespace std;
class Parent{
  public:
    int add(int a,int b){
      return (a+b);
    }
    float add(float a, float b){
      return(a+b);  
	}
 };
class Child:public Parent{
  public:
    int add(int a,int b){
      return (a+b+10);
    } 
}; 
int main(){
  Child C;
  Parent P;
  cout<<P.add(1,2)<<endl;            //3
  cout<<P.add(1.2f,2.3f)<<endl;     //3.5
  cout<<C.add(1,2)<<endl;          //13
  cout<<C.add(5.2f ,5.3f)<<endl;  // it will overload CHILD class INT ADD //20
}
