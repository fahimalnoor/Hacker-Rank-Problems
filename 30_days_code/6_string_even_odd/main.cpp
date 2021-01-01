#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int T;
    cin >> T;

    for(int i = 0; i <= T; i++){
        string s;
        //getline(cin, s);
        cin >> s;

        for (int j = 0; j < s.size(); j++){
            if(j%2 == 0){
                cout << s[j];
            }
        }
        cout << " ";
        for (int k = 0; k < s.size(); k++){
            if(k%2 != 0){
                cout << s[k];
            }
        }
        cout << endl;
    }
    return 0;
}
