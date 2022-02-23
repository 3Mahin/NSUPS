#include <iostream>

using namespace std;

int main(){
    char keyboard[] ={'`','1','2','3','4','5','6','7','8','9','0','-','=',
                        'Q','W','E','R','T','Y','U','I','O','P','[',']','\\',
                        'A','S','D','F','G','H','J','K','L',';','\'',
                        'Z','X','C','V','B','N','M',',','.','/'};
    string input;
    while(!cin.eof()){
        getline(cin,input);

        for(int i=0; input[i] != '\0'; i++){
            for(int j=0; true ; j++){
                if(input[i]==' '){
                    break;
                }
                else if(input[i]==keyboard[j]){
                    input[i]=keyboard[j-1];
                    break;
                }
            }
        }
        cout << input;
        cout << endl;

    }
return 0;
}
