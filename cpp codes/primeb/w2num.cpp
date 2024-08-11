#include<iostream>
#include<math.h>
using namespace std;

bool prime(int num){
    int i=2;
    while(i<=sqrt(num)){
        if(num%i==0){
            return false;
             
            
        }i++;
    

    }return true;
}

int main(){

int a,b;
cin>>a>>b;
int i=a;

while(i<=b){
    
    if(prime(i)){
        cout<<i<<endl;
    }i++;
}
  return 0;
}