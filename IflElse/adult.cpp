#include<iostream>
using namespace std;

int main(){
    int age;

    cout<<"Enter the age of the person :"<<endl;
    cin>>age;

    if(age<12){
        cout<<"It is child"<<endl;
    }
    else if(age>18){
        cout<<"It is adult"<<endl;
    }
    else{
        cout<<"Teenager"<<endl;
    }
    return 0;
}