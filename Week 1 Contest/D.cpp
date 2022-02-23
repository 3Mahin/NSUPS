#include <bits/stdc++.h>

using namespace std;

int main(){
    long size = 10000;
    int track = -1;
    int input;
    string s;
    for (int i = 1; i <= size; i++)
    {
        s += to_string(i);
    }
    cin >> input;

    cout << s[input-1] << endl;

return 0;
}