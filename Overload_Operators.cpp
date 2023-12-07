#include <iostream>
#include <complex>
using namespace std;

class Mycomplex{
    public:
    double Re, Im;
    Mycomplex(){
        complex<double> p;
        Re = 0;
        Im = 0;
    }
    Mycomplex(complex<double> p){
        Re = real(p);
        Im = imag(p);
    }
    Mycomplex operator+(Mycomplex &obj){
        Mycomplex res;
        res.Re = Re + obj.Re;
        res.Im = Im + obj.Im;
        return res;
    }
    friend ostream& operator<<(ostream &os, Mycomplex &obj){
        if (obj.Im >= 0){
            os << obj.Re  << "+i" << obj.Im;
        }
        else{
            os << obj.Re << "-i" <<  noshowpos << -obj.Im;
        }
        return os;
    }
    complex <double> get_data(){
        double re, im;
        char sign, i;
        complex<double> d;
        cin >> re >> sign >> i >> im;
        if (sign == '-'){
            d = complex<double>(re, -im);
        }
        else if (sign == '+'){
            d = complex<double>(re, im);
        }
    return d;
    }
};


int main(){
    complex<double> d1, d2;
    Mycomplex obj1, obj2(d1);
    d1 = obj1.get_data();
    d2 = obj2.get_data();
    Mycomplex obj3(d1), obj4(d2), obj5;
    obj5 = obj3 + obj4;
    cout << obj5 << endl;
    return 0;
}
