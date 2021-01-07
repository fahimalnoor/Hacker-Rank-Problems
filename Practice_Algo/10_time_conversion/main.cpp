#include <bits/stdc++.h>
#include <iostream>
#include<string>
#include <sstream>

using namespace std;

int main()
{
    string s;
    getline(cin >> ws, s);
    string hstr = s.substr(0,2);

    //string str = "07:05:45PM";
    stringstream degree(hstr);
    int hh = 0;
    degree >> hh;
    int hnew = hh + 12;

    if(hh==12 && s[8] == 'A'){    //hour 12 of night
        cout << "00";
        for(int i = 2; i < 8; i++){
            cout << s[i];
        }
    }else if(hh >= 1 && s[8] == 'A'){       //hour 1-11:59AM
        for(int i = 0; i < 8; i++){
            cout << s[i];
        }
    }else if(hh==12 && s[8] == 'P'){    //hour 12 of noon
        for(int i = 0; i < 8; i++){
            cout << s[i];
        }
    }else if(hh>=1 && s[8] == 'P'){    //hour 12 of noon
        cout << hnew;
        for(int i = 2; i < 8; i++){
            cout << s[i];
        }
    }

    return 0;
}
