# include <iostream>
# include <tuple>
using namespace std;

pair <int, int> get_data(){
    int a, b;
    cin >> a;
    cin >> b;
    return make_pair(a, b);
}

void  parse_data(int num1, int num2){
    for (int i = num1; i<= num2; i++)
        if (i == 1){
            cout << "one" << endl;
        }
        else if (i == 2){
            cout << "two" << endl;
        }
        else if (i == 3){
            cout << "three" << endl;
        }
        else if (i == 4){
            cout << "four" << endl;
        }
        else if (i == 5){
            cout << "five" << endl;
        }
        else if (i == 6){
            cout << "six" << endl;
        }
        else if (i == 7){
            cout << "seven" << endl;
        }
        else if (i == 8){
            cout << "eight" << endl;
        }
        else if (i == 9){
            cout << "nine" << endl;
        }
        else if ( i > 9 && i % 2 == 0){
            cout << "even" << endl;
        }
        else if (i > 9 && i % 2 != 0){
            cout << "odd" << endl;
        }

}

int main(){
    int c, d;
    tie(c, d) = get_data();
    parse_data(c, d);
    return 0;
}
