#include<iostream>
using namespace std;

int linearSearch(int arr[], int target, int size){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int reverseArray(int arr1[], int size){
    int start = 0;
    int end = size-1;
    while(start<end){
        swap(arr1[start], arr1[end]);
        start++, end--;
    }

}

int main(){
    int arr[] =  {1, 3, 4, 7, 8, 9 };
    int size = 7;
    cout<<"so the target is .."<<linearSearch(arr, 9, 6)<<endl;

    int arr1[] = {4,2,7,8,1,2,5};
    reverseArray(arr1,7);
    for(int i=0; i<size; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    return 0;
}