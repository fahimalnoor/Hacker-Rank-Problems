#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for(int i = 1; i < 11; i++){

        int mul = n*i;
        cout << n;
        cout<< " x " << i;
        cout << " = " << mul << endl;
    }
    return 0;
}
