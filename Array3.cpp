#include<iostream>
using namespace std;
// pass by value
void changeArr(int arr[], int size){
    cout<<"in Void....";
    for(int i=0; i<size; i++){
        arr[i] = 2*arr[i];  // 1,2,3 = 2,4,6 then pass to main
    }
}



int main(){
    int arr[] = {1,2,3};
    changeArr(arr,3);
    cout<<"In main ...";
    for(int i=0; i<3; i++){
        arr[i] = 2*arr[i];  // 2,4,6 = 4,8,12
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
