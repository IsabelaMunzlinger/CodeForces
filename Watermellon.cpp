#include <iostream>
using namespace std;

int main() {
    int w;

    cin >> w;

    if(w % 2 == 0 and w > 2){   // Se o número for par e maior que 2
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}