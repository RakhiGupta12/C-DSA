#include<iostream>
using namespace std;

int main(){
    // Questions
    // find out the smallest/ largest number in array
     int  nums[] = {2,5,7,1,-3};
     int size = 5;

     int smallest = INT_MAX;  //this not working
     int largest = INT_MIN;   //this not working

     for(int i=0; i<size; i++){
        if(nums[i]<smallest){
            smallest = nums[i];
        }
        if(nums[i]>largest){
            largest = nums[i];
        }
     }

     // instead of if statement 
     // smallest = min(smallest, num[i]) works
     // largest = max(largest, nums[i])
     cout<<"smallest = "<<smallest<<endl;;
     cout<<"largest = "<<largest;
    return 0;
}