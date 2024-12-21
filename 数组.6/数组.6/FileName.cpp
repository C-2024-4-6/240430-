#include<iostream>
using namespace std;
void count(const char str[]) {
    int counts[26] = { 0 };
    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (isalpha(c)) { int index = c - 'a'; counts[index]++; }
    }
        for (int m = 0; m < 26; m++) {
            if (counts[m] != 0)cout << char('a'+m) << ":" << counts[m] << "times" << endl;
        }
    }
int main() {
    char str[100];
    cout << "ÇëÊäÈë×Ö·û´®: ";
    cin.getline(str, 100);//¿É¶ÁÈ¡¿Õ¸ñ
    count(str);
    return 0;
}