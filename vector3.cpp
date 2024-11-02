#include<iostream>
#include<vector>
using namespace std;

int main(){
    // property of vector
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(9);

    cout<<"size = "<<vec.size()<<endl;
    cout<<"capacity = "<<vec.capacity()<<endl;  // capacity always double if we put an element 

    return 0;
}