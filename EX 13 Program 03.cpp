//Constructor overloading
#include<iostream>
using namespace std;
class Student{
    string name;
    int age;
    public:
    Student(){
        name="Swarali";
        age=20;
    }
    Student(string n ,int a){
        name=n;
        age=a;
        
    }
    void display(){
        cout<<"Name:"<<name<<endl<<"Age"<<age<<endl;
    }
};
int main(){
    Student s1;
    Student s2("Tarushi",19);
    s1.display();
    s2.display();
    return 0;
}
