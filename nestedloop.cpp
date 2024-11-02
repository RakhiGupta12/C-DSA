#include<iostream>
using namespace std;

int main(){
    // nested loops
    // for(int i = 1; i<=n; i++){
    //     cout<<"*****"<<endl;
    // }
    int n = 4;
    for(int i=1; i<=n; i++){
        int m = 5;
        for(int i=1; i<=m; i++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
}