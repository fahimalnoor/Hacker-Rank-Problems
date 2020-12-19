#include <iostream>

using namespace std;

int simpleArraySum(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    simpleArraySum(arr, n);

    return 0;
}

int simpleArraySum(int arr[], int a) {

    int sum = 0;
    for (int j = 0; j < a; j++){
        sum = sum + arr[j];
    }

    cout << sum;
    return 0;
}
