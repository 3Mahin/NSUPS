#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int a,pos,pos2;
    cin >> t;
    string input1,input2;
    while(t--)
    {
        a=0, pos=0, pos2=0;
        cin >> input1;
        for(int i=0; i<input1.length(); i++)
        {
            if(input1[i] == '1')
            {
                pos=i;
                break;
            }
        }
        for(int i=input1.length(); i>=pos; i--)
        {
            if(input1[i] == '1')
            {
                pos2=i;
                break;
            }
        }
        for(int i=pos; i<pos2; i++)
        {
            if(input1[i] == '0')
                a++;
            else
                input2 += '1';
        }
        
        cout<< a <<endl;
    }
}