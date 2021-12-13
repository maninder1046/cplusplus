#include<iostream>
using namespace std;
class Mammals{
  public:
    void print(){
      cout<<"I am Mammal\n";
  }
};
class MarineAnimal{
  public:
    void print(){
      cout<<"I am Marine animal\n";
  }
};
class BlueWhale:public Mammals,public MarineAnimal{       //Multiple Inheritance
  public:
    void print(){
      cout<<"I am BlueWhale\n";
  }
};
int main(){
  Mammals M;
  MarineAnimal MA;
  BlueWhale BW;
  M.print();
  MA.print();
  BW.print();
  BW.Mammals::print();           //calling func. of base class using scope resolution
  BW.MarineAnimal::print();      //                  ,,
  return 0;
}
