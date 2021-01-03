#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int x = 0; x < N; x++){
        cin >> A[x];
    }
    for (int y = N-1; y >= 0 ; y--){
        cout << A[y] << " ";
    }
    return 0;
}
