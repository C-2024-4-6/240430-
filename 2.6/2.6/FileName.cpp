#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b, int A) {
    return (a * b) / A;
}

int main() {
    int a, b;

cout << "�������һ��������: ";
cin >> a;

cout << "������ڶ���������: ";
cin >> b;

    int M= gcd(a, b);
    int N = lcm(a, b, M);

cout << a << " �� " << b << " �����Լ����: " << M<< endl;
cout << a << " �� " << b << " ����С��������: " << N <<endl;

    return 0;
}