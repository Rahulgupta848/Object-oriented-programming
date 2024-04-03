#include<iostream>
using namespace std;
class Student {
     string name;
     int id;

     public:
     //default constructor
     Student(){
          cout<<"default constructor is called"<<endl;
     }
     
     //parameterized constructor
     Student(int id,string name){
          this->id = id;
          this->name = name;
     }

     //copy construction
     Student (const Student &obj){
          this->id  = obj.id;
          this->name = obj.name;
     }

     void getDetails(){
          cout<<this->id<<" : "<<name<<endl;
     }
     
};

int main(){
     Student s1(1,"Rahul");
     Student s2(2,"Mahi");
     Student s3 = s2;
     s1.getDetails();
     s3.getDetails();
     return 0;
}