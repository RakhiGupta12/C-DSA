#include<iostream>
using namespace std;
// dought
// waf tp print nth fibonacci
int fibbonaci(int n){
    int first = 0;
    int second = 1;
    
    for(int i=1; i<=n; i++){
    
     cout<<first<<" ";
     int third = first+ second;
     
     first = second;
     second = third;
    }

}



int main(){
    int n = 10;
    fibbonaci(n);
}