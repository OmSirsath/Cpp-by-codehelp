#include<iostream>
using namespace std;
int main(){


char ch;


cout<<"Enter your choise:"<<endl;
cin>>ch;
if(ch >= 97 && ch <= 122){
   cout<<"This is lower case  "<<endl; 
}

else if(ch >= 65 && ch <= 90){
   cout<<"This is a Upper case "<<endl; 

}
else if(ch >= 48 && ch <= 57){
   cout<<"This is numeric "<<endl; 

}
return 0;
}