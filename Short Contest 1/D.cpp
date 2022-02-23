#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int t,flag,n;
    cin>>t;

    while(t--){
        flag=0;
        cin>>n;

        int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);

        for(int i=1; i<n; i++){
            if(a[i]-a[i-1]>1){
                flag=1;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag==0){
            cout<<"YES"<<endl;
        }
    }
}
