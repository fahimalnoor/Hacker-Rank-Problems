#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n;
    //int a[] = {};

    cin >> n;

    int i = n;
    int j = n;

    int x[i][j];

    //cin >> i >> j;

    //array input
    for(int a=0; a < i; a++){
        for(int b=0; b < j; b++){
            cin >> x[a][b];
        }
    }

    /*
    //array output
    for(int a=0; a < i; a++){
        for(int b=0; b < j; b++){
            cout << x[a][b] << " ";
        }
        cout << endl;
    }
    */

    //d1sum and d2sum
    int d1sum = 0;
    int d2sum = 0;

    for(int a=0; a < i; a++){
        for(int b=0; b < j; b++){
            if(a==b)
                d1sum += x[a][b];

            if(a+b == n-1)
                d2sum += x[a][b];
        }
    }

    /*
    cout << "Dimension 1 is: " << d1sum;
    cout << endl;
    cout << "Dimension 2 is: " << d2sum;
    cout << endl;
    */

    //int diff = abs(d1sum - d2sum);
    //cout << diff;
    int diff = d1sum - d2sum;
    if(diff < 0){
        diff = diff * (-1);
        cout << diff;
    }
    else{
        cout << diff;
    }

    return 0;
}
