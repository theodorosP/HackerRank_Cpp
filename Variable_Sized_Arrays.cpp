#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> get_data(){
    int n, q;
    cin >> n >> q;
    vector< vector <int> > outer_vector, outer_pos;
    vector<int> positions;
    for (int i = 0; i != n; i++){
        vector<int> inner_vector;
        int k, out_pos, in_pos;
        cin >> k;
        for (int m = 0; m != k; m++){
            int k_i;
            cin >> k_i;
            inner_vector.push_back(k_i);
        }
        outer_vector.push_back(inner_vector);
    }
    
    for (int i = 0; i != q; i++){
        int x, y;
        vector<int> inner_pos;
        cin >> x >> y;
        inner_pos.push_back(x);
        inner_pos.push_back(y);
        outer_pos.push_back(inner_pos);
    }


    for (vector<int> i : outer_pos){
            cout << outer_vector[i[0]][i[1]] << endl;
    }
    return outer_vector;
}


int main(){
    vector<vector<int>> vec;
    vec = get_data();
    return 0;
}
