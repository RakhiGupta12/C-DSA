#include<iostream>
using namespace std;

int main(){
    // charecter
    int n = 4;
    for(int i = 1; i<=n; i++){
        char ch = 'A';
        for(int j=1; j<=n; j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }

    cout<<"done baby"<<endl;
   
    int nnn = 3 ;
    int num =1;
    for(int i = 0; i<nnn; i++){
        int mmm = 4;
        for(int j = 0; j<mmm; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

    // abcd
    cout<<"done baby"<<endl;

    int x = 3;
    char ch = 'A';
    for(int i=0; i<x; i++){
        for(int j =0; j<x; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

}