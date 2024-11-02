#include<iostream>
using namespace std;

int main(){
    int n=5;  //O(n^3)
    int arr[5] = {1,2,3,4,5};

    for(int start =0; start<n; start++){
        for(int end=start; end<n; end++){
            for(int i = start; i<=end; i++){
                cout<<arr[i];
            }
            cout<<" ";
       }
       cout<<endl;
    }

    // Brute Force Approch  // O(n^2)
    int n1 = 7;
    int arr1[] = {3,-4,5,4,-1,7,-8};
    int maxSum = INT_MIN;
    for(int start = 0; start < n; start++){
        int currSum = 0;
        for(int end = start ; end<=n; end++){
            currSum = currSum + arr1[end];
            maxSum= max(currSum, maxSum);
        }
        
    }
    cout<<"maximum Subarry sum = "<<maxSum;

    // Kadane's Alogorithm
    int currSum1 =  0;
    int  maxSum1 = INT_MIN;
    for(int i=0; i<n; i++){
        currSum1 += arr1[i];
        maxSum1 = max(currSum1, maxSum1);
        if(currSum1<0){
            currSum1=0;
        }

    }
    cout<<" max = "<<maxSum1<<endl;
    return 0;

}