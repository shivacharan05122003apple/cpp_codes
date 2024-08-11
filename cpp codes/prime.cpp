#include<iostream>
using namespace std;
int main(){
  
  int a,b;
  cout<<"enter a and b";
  cin>>a>>b;

  int i;
  for(i=2;a<i<b;i++)
  {
    if(a%i==0){
        cout<<i<<endl;
        
        
    }
    
  
    }
   
  
   
        

    return 0;
}