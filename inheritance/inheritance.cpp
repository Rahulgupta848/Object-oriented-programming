#include<iostream>
using namespace std;

class Vehicle{
     public:
          string name;
          string model;
          int noOfTyres;

     Vehicle(string name,string model,int tyres){
          this->name = name;
          this->model = model;
          this->noOfTyres = tyres;
     }

     void startEngine(){
          cout<<"Engine has started of "<<name<<" "<<model<<endl;
     }

      void stopEngine(){
          cout<<"Engine has stopped of "<<name<<" "<<model<<endl;
     }

};

class Car  :public Vehicle {
     public:
          int price;
          string color;

     Car(string name,string model,int noOfTyres,int price,string color):Vehicle(name,model,noOfTyres){
          this->price=price;
          this->color = color;
     }

     void getCarDetails(){
          cout<<"Price and color of "<<name<<" "<<model<<" is "<<price<<" "<<color<<endl;
     }
};

int main(){
     Car c1("XUV","500",4,2000000,"white");
     c1.getCarDetails();
     c1.startEngine();
     c1.stopEngine();
     return 0;
}