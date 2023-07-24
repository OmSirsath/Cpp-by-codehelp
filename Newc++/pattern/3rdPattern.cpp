#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){

        int j=i;
        while(j<=n){                                                     
            cout<<i;
            j=j+1;
        }
         cout<<endl;
         i=i+1;
    }
    return 0;
}