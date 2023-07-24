//Write a progra to find the nummber is positive negative or zero 
#include<iostream>
using namespace std;
int main(){


int a;

cout<<"Enter the  alue of A:"<<endl;
cin>>a;
if(a>0){
   cout<<"A is positive "<<endl; 
}

else if(a<0){
   cout<<"A is Negative "<<endl; 

}
else{
   cout<<"A is Zero "<<endl; 

}
return 0;
}