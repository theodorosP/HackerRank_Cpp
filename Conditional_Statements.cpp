#include <iostream>
using namespace std;

int get_data(){
    int num;
    cin >> num;
    return num; 
}

void parse_data(int num){
    if (num >= 1 && num <= 9){
        if (num == 1){
            cout << "one" << endl;
        }
        else if (num == 2){
            cout << "two" << endl;
        }
        else if (num == 3){
            cout << "three" << endl;
        }
        else if (num == 4){
            cout << "four" << endl;
        }
        else if (num == 5){
            cout << "five" << endl;
        }
        else if (num == 6){
            cout << "six" << endl;
        }
        else if (num == 7){
            cout << "seven" << endl;
        }
        else if (num == 8){
            cout << "eight" << endl;
        }
        else if (num == 9){
            cout << "nine" << endl;
        }
    }
    else{
        cout << "Greater than 9" << endl;
    }
}

int main()
{
    int n;
    n = get_data();
    parse_data(n);
    return 0;
}
