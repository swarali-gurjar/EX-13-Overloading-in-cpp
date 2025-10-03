#include<iostream>
using namespace std;
class Addition{
    public:
    int add(int a, int b){
        return a+b;
    }
    double add(double a, double b, double c){
        return a+b+c;
    }
};
int main(){
    Addition a1;
    cout<<"Sum of 2.5 and 5 is: "<<a1.add(2.5,5)<<endl;
    cout<<"Sum of 3.4,9.7,2.6 is: "<<a1.add(3.4,9.7,2.6)<<endl;
    return 0;
}
