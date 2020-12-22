#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int x=0; x < n; x++){
        cin >> arr[x];
    }

    /*
    for(int x=0; x < n; x++){
        cout << arr[x] << endl;
    }
    */

    float pos,neg,zero;
    pos = 0.0;
    neg = 0.0;
    zero = 0.0;

    //check values
    for(int y=0; y < n; y++){
        if(arr[y] > 0)
        {
            pos += 1;
        }
        else if(arr[y] < 0)
        {
            neg += 1;
        }
        else if(arr[y] == 0){
            zero += 1;
        }
        else{

        }
    }

    //ratio check
    float posrat = pos/n;
    float negrat = neg/n;
    float zerorat = zero/n;

    cout << fixed << setprecision(6);

    cout << posrat;
    cout << endl;
    cout << negrat;
    cout << endl;
    cout << zerorat;

    return 0;
}
