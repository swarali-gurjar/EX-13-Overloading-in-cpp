//Operator overloading

#include <iostream>
using namespace std;

class Distance {
    int feet;
    int inches;

public:
    
    Distance(int f = 0, int i = 0) {
        feet = f;
        inches = i;
    }

    
    Distance operator+(const Distance& d) {
        Distance temp;
        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;

    
        if (temp.inches >= 12) {
            temp.feet += temp.inches / 12;
            temp.inches = temp.inches % 12;
        }

        return temp;
    }

    
    void display() {
       cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Distance d1(5, 8); 
    Distance d2(3, 10);  

    Distance d3 = d1 + d2; 

    cout << "First Distance: ";
    d1.display();

    cout << "Second Distance: ";
    d2.display();

    cout << "Total Distance: ";
    d3.display();

    return 0;
}
