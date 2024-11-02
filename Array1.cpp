#include<iostream>
using namespace std;

int main(){

    int marks[5] = {25,67,89,90, 45};
    int size = 5;
    // cout<<marks<<endl;
    cout<<marks[1]<<endl;  // accessing index 
    cout<<marks[4]<<endl;
    cout<<sizeof(marks)<<endl;
    cout<<sizeof(marks)/sizeof(int)<<endl; // array size 

    // taking input
    for(int i=0; i<size; i++){
        cin>>marks[i];
    }
    
    // loops in array
    for(int i=0; i<size; i++){
        cout << marks[i] <<endl;
    }
    

    double price[] = {23.56, 67.5, 78.90};

    return 0;
}