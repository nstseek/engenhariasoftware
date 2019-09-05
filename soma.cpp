#include<iostream>

using namespace std;

int soma(int a, int b) {
    return b + a;
}

int main() {
    int valor1, valor2;
    cin >> valor1;
	cin >> valor2;
    cout << soma(valor1, valor2) << endl;
    return 0;
}