//write a program to print the value if it is even and divisible by 3.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter the number :"<<endl;
    cin>>num;
    
    if((num%2==0) && (num%3==0)){
        cout<<"it is even number "<<endl;
        cout<<"it is divisible by 3 "<<endl;

    }
    else if(num%2==0 && num%3!=0){
        cout<<"it is  even number "<<endl;
        cout<<"it is not divisible by 3 "<<endl;
    }
    else if(num%2!=0 && num%3==0){
        cout<<"it is not even number "<<endl;
        cout<<"it is  divisible by 3 "<<endl;
    }
    else{
        cout<<"Condition not satisfy"<<endl;
    }
    return 0;
}
