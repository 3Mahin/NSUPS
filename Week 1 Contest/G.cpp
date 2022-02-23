#include <bits/stdc++.h>

using namespace std;

int main(){
    int count = 1;
    string s;
    getline(cin, s);

    for (int i = 1; i < s.length(); i++){
        if(s[i]>=65 && s[i]<= 90){
            count++;
        }
    }
    
    cout << count << endl;

return 0;
}