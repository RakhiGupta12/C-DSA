#include<iostream>
using namespace std;

int main(){
    //square pattern

    int n = 4;
    for(int i=1; i<=n; i++){
        int m = 4;
        for(int j = 1; j<=m; j++){
            cout<<j;
        }
        cout<<endl;
    }
    cout<<"done"<<endl;

    int nn = 4;
    for(int i=1; i<=nn; i++){  // row(outer loop)
        int mm = 4;
        for(int j = 1; j<=mm; j++){  // col(inner lopp)
            cout<<i;
        }
        cout<<endl;
    }
    cout<<"done"<<endl;

    int x = 4;
    for(int i = 1; i<=n; i++){
        int y = 5;
        for(int j = 1; j<=y; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

}