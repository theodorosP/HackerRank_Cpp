#include <iostream>
#include <vector>
#include <any>
using namespace std;

class Student{
    public:
    string first_name, last_name;
    int age, standard;

    void get_age(){
        cin >> age;
    }
    void get_first_name(){
        cin >> first_name;
    }
    void get_last_name(){
        cin >> last_name;
    }
    void get_standard(){
        cin >> standard;
    }
    void print_data(){
        cout << age << endl;
        cout << last_name << ", " << first_name << endl;
        cout << standard << endl;
        cout << "\n";
        cout << age << "," << first_name << "," << last_name << "," << standard << endl;
    }

};

int main(){
    Student object;
    object.get_age();
    object.get_first_name();
    object.get_last_name();
    object.get_standard();
    object.print_data();
    return 0;
}
