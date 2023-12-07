#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> get_data(){
    int n;
    vector<int> vec;
    cin >> n;
    for (int i = 0; i != n; i++){
        int a;
        cin >> a;
        vec.push_back(a);
    }
    return vec;
}

void sort_vector(vector <int> &vec){
    sort(vec.begin(), vec.end());
}

ostream& operator<<(ostream &os, vector <int> &vec){
    for (int i : vec ){
        os << i << " ";
    }
    return os;
}

int main(){
    vector<int> v1;
    v1 = get_data();
    sort_vector(v1);
    cout << v1 << endl;
    return 0;
}

