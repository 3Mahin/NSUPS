#include <iostream>

using namespace std;

int main(){

    string s = "heidi";
    string input;
    int j =0;
    getline(cin, input);

    for(int i=0; i<input.length(); i++){
        if(input[i]==s[j]){
            j++;
        }
        if(j==5){
            cout << "YES" << endl;
        }
    }
    if(j<5){
        cout << "NO" << endl;
    }
return 0;
}
