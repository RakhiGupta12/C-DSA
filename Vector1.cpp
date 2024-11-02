#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec; // Size  = 0
    vector<int> vec1 = {1,3,4};  // 3
    cout<<vec1[0]<<endl;

    vector<int> vec2(5,0);  // size and idx value
    cout<<vec2[0]<<endl;
    cout<<vec2[1]<<endl;
    cout<<vec2[2]<<endl;
    cout<<vec2[3]<<endl;

    vector<int> vec3 = {'a','b','c','d'};
    for(char val : vec3){    // for each loop
        cout<<val<<endl;
    }






    return 0;
}
