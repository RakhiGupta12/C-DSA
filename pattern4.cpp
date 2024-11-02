#include<iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i = 1; i<=n; i++){
        for(int j =1; j<=i; j++){
            cout<<j;

        }
        cout<<endl;
    }

    cout<<"done baby"<<endl;

    // Reverse traingle pattern

    // int x = 4;

    // for(int i = 1; i<=n; i++){
    //     for(int j = 1;  j<=i; j++){
    //         cout<<;
    //     }
    //     cout<<endl;
    // }

    // Floyed's Triangle Pattern

    int p = 4;
    int count = 1;
    for(int i =1; i<=p ; i++){
        for(int j =1; j<=i; j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }

    


}