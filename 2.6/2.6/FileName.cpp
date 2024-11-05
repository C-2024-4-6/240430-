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

cout << "请输入第一个正整数: ";
cin >> a;

cout << "请输入第二个正整数: ";
cin >> b;

    int M= gcd(a, b);
    int N = lcm(a, b, M);

cout << a << " 和 " << b << " 的最大公约数是: " << M<< endl;
cout << a << " 和 " << b << " 的最小公倍数是: " << N <<endl;

    return 0;
}