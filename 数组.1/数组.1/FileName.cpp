#include<iostream>
using namespace std;
int main()
{
        int numbers[10];
        cout << "ÇëÊäÈë10¸öÊı×Ö" << endl;
        for (int i = 0; i < 10; i++) 
        {
            cin >> numbers[i];
        }
        for (int i = 0; i < 10; i++)
        {
            bool a = false;
            for (int j = 0; j < i; j++)
            {
                if (numbers[i] == numbers[j]) { a = true; break; }
            }
                if (!a) { cout << numbers[i] << " "; }
            
        }

        return 0;
}