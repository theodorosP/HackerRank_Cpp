#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> get_data(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i != n; i++){
        cin >> vec[i];
    }
    return vec;
}


void check(vector<int> &vec1, vector<int> &vec2){
    for (int i : vec2){
        auto l = lower_bound(vec1.cbegin(), vec1.cend(), i);
        if ( *l == i){
            cout << "Yes" << " " << l - vec1.cbegin() + 1<< endl;
        }
        else{
            cout << "No" << " " << l - vec1.cbegin()  + 1 << endl;
        }
    }
}


int main(){
    vector<int> Ndata, Qdata;
    Ndata = get_data();
    Qdata = get_data();
    check(Ndata, Qdata);
    return 0;
}

