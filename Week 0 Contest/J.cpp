#include <iostream>

using namespace std;

int main(){
    string input;

    while(!cin.eof()){
        getline(cin,input);

        for(int i=0; i<input.length(); i++){
            if(input[i]=='A' || input[i]=='B' || input[i]=='C'){
                input[i] = '2';
            }
            else if(input[i]=='D' || input[i]=='E' || input[i]=='F'){
                input[i] = '3';
            }
            else if(input[i]=='G' || input[i]=='H' || input[i]=='I'){
                input[i] = '4';
            }
            else if(input[i]=='J' || input[i]=='K' || input[i]=='L'){
                input[i] = '5';
            }
            else if(input[i]=='M' || input[i]=='N' || input[i]=='O'){
                input[i] = '6';
            }
            else if(input[i]=='P' || input[i]=='Q' || input[i]=='R' || input[i]=='S'){
                input[i] = '7';
            }
            else if(input[i]=='T' || input[i]=='U' || input[i]=='V'){
                input[i] = '8';
            }
            else if(input[i]=='W' || input[i]=='X' || input[i]=='Y' || input[i]=='Z'){
                input[i] = '9';
            }
        }
        cout << input << endl;
    }

return 0;
}
