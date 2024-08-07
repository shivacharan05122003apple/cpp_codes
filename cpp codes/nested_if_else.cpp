#include<iostream>
using namespace std;
int main(){

    int savings;
    cout<<"enter savings";
    cin>>savings;

    if(savings>5000){
        if(savings>8000){
            cout<<"roadtrip with neha";
        }
        else{
            cout<<"shopping with neha";
        }
    }
    
    else if(savings>2000){
        cout<<"reshmi";
    }

    else{
        cout<<"dost";
    }

}