#include <iostream>
#include <vector>
#include <set>
using namespace std;

ostream& operator<<(ostream &os, vector<vector<int>> &vec){
    for (vector<int> i : vec){
            for (int j = 0; j != i.size(); j++){
                os << i[j] << " ";
            }
            os << endl;
    }
    return os;
}

vector<vector<int>> get_input(){
    vector<vector<int>> vec_out;
    int query;
    cin >> query;
    for (int i = 0; i != query; i++){
        vector<int> vec_in(2);
        cin >> vec_in[0];
        cin >> vec_in[1];
        vec_out.push_back(vec_in);
    }
    //cout << vec_out << endl;
    return vec_out;
}


void parse_data(vector<vector<int>> &vec) {
    set<int> set;
    for (const vector<int> &i : vec) {
        if (i[0] == 1) {
            set.insert(i[1]);
        } else if (i[0] == 2) {
            auto it = set.find(i[1]);
            if (it != set.end() && *it == i[1]) {
                set.erase(it);
            }
        } else if (i[0] == 3) {
            auto it = set.find(i[1]);
            if (it != set.end() && *it == i[1]) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
}


int main(){
    vector<vector<int>> vec;
    vec = get_input();
    parse_data(vec);
    return 0;
}
