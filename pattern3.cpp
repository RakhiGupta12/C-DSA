#include<iostream>
using namespace std;

int main(){

    int n = 4;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"done baby"<<endl;

    int nn= 4;
    
    for(int i = 1; i<=nn; i++){
        for(int j =1; j<=i; j++){
            cout<<i;
            
        }
        cout<<endl;

    }

    int x = 4;
    char ch = 'A';
    for(int i=1; i<=n; i++){
       for(int j = 1; j<=i; j++){
           cout<<ch;
           
        }
       cout<<endl;
       ch++;
    }

    return 0;
}