#include <iostream>
using namespace std;

void update(int *a,int *b) {
    int aux;
    aux = *a;
    *a = *a + *b;
    *b = aux - *b;
    if (*b < 0){
        *b = - *b;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    cin >> a >> b ;
    update(pa, pb);
    cout << a << endl;
    cout << b << endl;
    
    
    return 0;
}
