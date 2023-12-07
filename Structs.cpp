#include <iostream>
#include <vector>
#include <any>
using namespace std;

vector<any> get_data(){
    vector<any> v;
    int age;
    string fname, lname;
    int st;
    cin >> age;
    cin >> fname;
    cin >> lname;
    cin >> st;
    v.push_back(age);    
    v.push_back(fname);
    v.push_back(lname);
    v.push_back(st);
    return v;
}

struct datast{
    int age;
    string fname;
    string lname;
    int st;
};

int main(){
    datast d;
    vector<any> v;
    v = get_data();
    d.age = any_cast<int>(v[0]);
    d.fname = any_cast<string>(v[1]);
    d.lname = any_cast<string>(v[2]);
    d.st = any_cast<int>(v[3]);
    cout << d.age << " " << d.fname << " " << d.lname << " " << d.st << endl;
    return 0;
}
