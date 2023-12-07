#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

vector<vector<double>> get_data(){
    vector<vector<double>> vec_out;
    int T;
    cin >> T;
    for (int i = 0; i != T; i++){
            vector<double> vec_in(3);
        for (int j = 0; j != 3; j++){
            cin >> vec_in[j];
        }
        vec_out.push_back(vec_in);
    }
    return vec_out;
}


void print(vector<vector<double>> &vec){
    for (vector<double> i : vec){
        long long truncated;
        truncated = static_cast<long long>(i[0]);
        cout << "0x" << hex << truncated << endl;

        if (i[1] > 0){
             cout << setw(15) << setfill('_')  << showpos << fixed << setprecision(2) << i[1] << endl;
            //cout << setw(15) << setfill('_') << showpos << setprecision(2) << i[1]  << endl;
        }
        else if (i[1] < 0){
             cout << setw(15) << setfill('_')  << fixed << setprecision(2) << i[1] << endl;
            //cout << setw(15) << setfill('_')  << i[1] << endl;
        }
        cout << scientific << uppercase << setprecision(9) << noshowpos << i[2] << endl;
        //cout << scientific << uppercase << setprecision(9) << noshowpos << setprecision(2) << i[2] << endl;
        cout << resetiosflags(ios::scientific | ios::uppercase);
    }
}


int main(){
    int c;
    vector<vector<double>> data;
    data = get_data();
    print(data);
    return 0;
}
