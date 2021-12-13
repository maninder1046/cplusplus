#include<iostream>
using namespace std;
class A{
    int a;
  public :
    A(){
      a=0;
      cout<<"default A's constructor\n";
	}
	A(int x){
	 a=x;
	 cout<<"parameterized A's constructor\n";
	}
	~A(){
	  cout<<"A's Desturctor\n";
	}
	void displayA(){
	  cout<<"A :"<<a<<endl;
	}
};
class B{
    int b;
  public :
    B(){
      b=0;
      cout<<"default B's constructor\n";
	}
	B(int x){
	 b=x;
	 cout<<"parameterized B's constructor\n";
	}
	~B(){
	  cout<<"B's Desturctor\n";
	}
	void displayB(){
	  cout<<"B :"<<b<<endl;
	}
};
class C : public B , public A{
    int c;
  public :
    C(){
      c=0;
      cout<<"default C's constructor\n";
	}
	C(int a, int b,int c):B(b),A(a){
	 C::c=c;
	 cout<<"parameterized C's constructor\n";
	}
	~C(){
	  cout<<"C's Desturctor\n";
	}
	void displayC(){
	 displayA();
	 displayB();
	  cout<<"C :"<<c<<endl;
	}
};
int main(){
 C Cobj;
   Cobj.displayC();
 C Cobj2(100,200,300);
   Cobj2.displayC();
   return 0;
}


