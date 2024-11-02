#include<iostream>

using namespace std;

int singleNumber(int arr[], int size){
    int ans = 0;
    for(int i=0; i<=size; i++){
        ans = ans ^ i;
    }
    return ans;
}

int main(){
    int arr[] = {4,1,2,1,2};
    cout<<singleNumber(arr, 5);
    

    return 0;
}