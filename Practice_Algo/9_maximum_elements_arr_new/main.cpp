#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int i, maxOne, maxNum;
    maxNum = 0;
    cin >> i;

    int candles[i];
    for(int x = 0; x < i; x++){
        cin >> candles[x];
    }

    sort(candles,candles + i);
    maxOne = candles[i-1];

    for(int z = 0; z < i; ++z){
        if(candles[z] == maxOne){
            maxNum += 1;
        }
    }

    cout << maxNum;

    return 0;
}
