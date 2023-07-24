#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENter the value of n"<<endl;
    cin>>n;

    for(int i=2;i<n; i++){
        if(n%i==0){
            cout<<"Not a prime number"<<endl;
            break;
        }
        else{
                cout<<"It is prime number"<<endl;
        }
    }
    return 0;
}


not epeted out put