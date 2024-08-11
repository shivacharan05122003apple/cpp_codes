#include<iostream>
using namespace std;
int main(){


    int pocketmoney=2000;
    int date;
    cout<<"enter date"<<endl;
    cin>>date;
    int n;

   for(date=1;date<=n;date++){

    if(date%2==1){
        continue;
    }
   
    if(pocketmoney==0){
        break;
    }
   }
   cout<<"go out today"<<endl;
   pocketmoney=pocketmoney-300;
    

   
        

    return 0;
}