// #include<iostream>
// using namespace std;
// int main(){

// int n;
// int i;

// cout<< "Enter the value of n"<<endl;
// cin>>n;

// for(i=1; i<=n; i++){

//     cout<< i <<endl;


// }
// return 0;
// }

//-------------------------------------------------------++-----------------------------------------------------------

#include<iostream>
using namespace std;
int main(){

int n;
int i;

cout<< "Enter the value of n"<<endl;
cin>>n;
i=1;
for( ; ; ){

     if(i<=n){
        cout<< i <<endl;
     }
     else{
        break;
     }
     i++;

}
return 0;
}