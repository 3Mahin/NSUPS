#include <iostream>

using namespace std;

int main(){

    int i, price = 700;
    string input;
    cin>>input;

    for (i = 0; i < input.length(); i++)
        if (input[i] == 'o'){
            price += 100;
        }
    cout<< price <<endl;

return 0;
    }
