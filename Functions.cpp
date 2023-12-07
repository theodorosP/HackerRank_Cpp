# include <iostream>
# include <tuple>
# include <vector>
using namespace std;

tuple<int, int, int, int> get_data(){
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    return make_tuple(a, b, c, d);
}

int get_max(int a, int b, int c, int d){
    int max;
    vector<int> values;
    values = {a, b, c, d}; 
    max = a;
    for (int i : values){
        if ( i > max){
            max = i;
        }
    }
    cout << max << endl;
    return max;  

}

int main()
{
    int n1, n2, n3, n4, max;
    tie(n1, n2, n3, n4) = get_data();
    max = get_max(n1, n2, n3, n4);
    return 0;
}
