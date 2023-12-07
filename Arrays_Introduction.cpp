# include <iostream>
#include <vector>
using namespace std;

vector<int> get_data(){
    int N;
    vector<int> numbers;
    cin >> N;
    for (int i = 0; i < N; i++){
        int num;
        cin >> num;
        numbers.push_back(num);
    }
    return numbers;
}

void parse_data(vector<int> vec){
    for (int i = vec.size() - 1; i != -1; i--){
        cout << vec[i] << " ";
    }
}

int main(){
    vector<int> n;
    n = get_data();
    parse_data(n);
    return 0;
}

