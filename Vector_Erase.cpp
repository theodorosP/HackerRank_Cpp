#include <iostream>
#include <vector>
using namespace std;

ostream& operator<<(ostream &os, vector<int> &vec){
    for (int i : vec){
        os << i << " ";
    }
    return os;
}

vector<int> get_data(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i != n; i++){
        cin >> vec[i];
    }
    return vec;
}

vector<int> to_remove(){
    vector<int> vec;
    int del, a, b;
    cin >> del;
    vec.push_back(del);
    cin >> a >> b;
    vec.push_back(a);
    vec.push_back(b);
    return vec;
}

vector<int> parse_data(vector<int> &vec, int &pos, int &a, int &b){
    vec.erase(vec.begin() + pos - 1);
    vec.erase(vec.begin() + a - 1, vec.begin() + b - 1);
    cout << vec.size() << endl;
    cout << vec << endl;
    return vec;
}


int main(){
    vector<int> v1, v2, v3;
    v1 = get_data();
    v2 = to_remove();
    v3 = parse_data(v1, v2[0], v2[1], v2[2]);
    return 0;
}
