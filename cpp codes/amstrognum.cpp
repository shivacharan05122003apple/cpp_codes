#include<iostream>
#include<math.h>
using namespace std;
int main(){
  
int n;
cin>>n;
int sum=0;
int sumoriginal=n;

while(n>0){
   int lastdigit=n%10;
   sum=sum+pow(lastdigit,3);
   n=n/10;
}if(sum==sumoriginal){
    cout<<"an"<<endl;
}else
{
    cout<<"nan"<<endl;}
  return 0;
}