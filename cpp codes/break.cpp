#include<iostream>
using namespace std;
int main(){
int num;
cout<<"enter num :"<<endl;
cin>>num;
int i;

for( i=2;i<num;i++){
    if(num%i==0){
        cout<<"non prime"<<endl;
        break;
    }

}
if(i==num){
cout<<"prime"<<endl;}




return 0;
}