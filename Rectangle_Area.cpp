#include<iostream>
using namespace std;

class Rectangle{
    public:
    int a, b;
    void display(){
        cout << a << " " << b << endl;
    }
};

class RectangleArea : public Rectangle{
    public:
    void read_input(){
        cin >> a >> b;
    }
    void display(){
        cout << a* b << endl;
    }
};

