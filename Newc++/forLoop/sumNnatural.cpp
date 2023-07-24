//how to print the sum. of n natural number.
#include<iostream>
using namespace std;

int main(){
    int n;
    int i;
   int  sum = 0;

    cout<<"enter the number of n: "<<endl;
    cin>>n;

    for(i=1; i<=n; i++){

        sum = sum + i;

    }

    cout<<"sum of n natural is :"<< sum <<endl;
    return 0;

}