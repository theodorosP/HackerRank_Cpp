#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	char ch;
    int value;
    vector<int> vec;
    stringstream ss(str);
    ss >> value;
    vec.push_back(value);
    while(ss >> ch >> value ){
        vec.push_back(value);
    }
    return vec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
