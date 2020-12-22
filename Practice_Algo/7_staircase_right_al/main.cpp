#include <iostream>

using namespace std;

void stair(int n){

    for(int x = 0; x < n; x++){
        for(int y = x; y < (n-1); y++){
            cout << " ";
        }
        for(int z = 0; z < (x+1); z++){
            cout << "#";
        }
        cout << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    stair(n);
    return 0;
}
