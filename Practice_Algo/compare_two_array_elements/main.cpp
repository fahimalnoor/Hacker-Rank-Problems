#include <iostream>
using namespace std;

int main()
{
    int a[3] = {};
    int b[3] = {};

    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];

    int a0,a1,a2,b0,b1,b2;

    if(a[0] > b[0]){
        a0 = 1;
        b0 = 0;
    }else if(a[0] < b[0]){
        b0 = 1;
        a0 = 0;
    }else{
        a0 = 0;
        b0 = 0;
    }

    if(a[1] > b[1]){
        a1 = 1;
        b1 = 0;
    }else if(a[1] < b[1]){
        b1 = 1;
        a1 = 0;
    }else{
        a1 = 0;
        b1 = 0;
    }

    if(a[2] > b[2]){
        a2 = 1;
        b2 = 0;
    }else if(a[2] < b[2]){
        b2 = 1;
        a2 = 0;
    }else{
        a2 = 0;
        b2 = 0;
    }

    int suma = a0 + a1 + a2;
    int sumb = b0 + b1 + b2;

    int res[2] = {suma,sumb};

    for(int i = 0; i <= 1; i++){
        cout << res[i] << " ";
    }

    return 0;
}
