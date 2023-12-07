#include <iostream>
using namespace std;
#include <vector>

vector<string> get_data(){
    string a, b;
    vector<string> vec;
    cin >> a >> b;
    vec.push_back(a);
    vec.push_back(b);
    return vec;
}

void parse_data(vector<string> vec){
    string a_aux, b_aux;
    cout << vec[0].size() << " " << vec[1].size() << endl;
    cout << vec[0] << vec[1] << endl;
    a_aux = vec[1][0];
    b_aux = vec[0][0];
    for (int i = 1;  i != vec[0].size(); i++){
        a_aux +=  vec[0][i];
    }
    for (int i = 1; i !=vec[1].size(); i++){
        b_aux += vec[1][i];
    }
    cout << a_aux << " " << b_aux << endl;
}

int main(){
    vector<string> v;
    v = get_data();
    parse_data(v);
    return 0;
}
