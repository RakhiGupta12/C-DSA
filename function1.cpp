#include<iostream>
using namespace std;

int minNum(int a, int b){
    if(a>b){
        cout<<"b is min"<<endl;
        return b;
    }
    else{
        cout<<"a is min"<<endl;
        return a;
    }
}

int main(){
    int num = minNum(8,12);
    cout<<"min num = "<<num;

}