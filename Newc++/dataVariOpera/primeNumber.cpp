//write a program  to find gien number prime or not.
#include<iostream>
using namespace std;

int main(){
    int n;
   
    cout<<"Enter any number"<<endl;
    cin>>n;
    int i=2;
    while(i<n){

        if(n%i==0){
                cout<<"Not prime number"<< i <<endl;

        }
      
        else{
                cout<<"prime number"<< i <<endl;

        }
        i=i+1;
    }

    return 0;
}