#include<iostream>
#include<vector>
using namespace std;

int main(){
    // size()
    vector<int> vec = {1, 3, 5, 6, 7};
    cout<<" size = "<<vec.size()<<endl;  // size function

    // push_back()
    vector<int> vec1 ;  // empty vector
    cout<<"befor push back size = "<<vec1.size()<<endl;
    vec1.push_back(12);  // push an element in the end of the vector
    cout<<"after push back size = "<<vec1.size()<<endl;

    // pop_back()
    vector<int> vec2 ; 
    vec2.push_back(2);
    vec2.push_back(89);
    vec2.push_back(78);
    vec2.pop_back();
    cout<<"size after pop_back() = "<<vec2.size()<<endl;
    for(int i : vec2){
        cout<<i<<endl;
    }

    // front : to print front val
    cout<<"front function...";
    cout<<vec2.front()<<endl;
    // back : to print back value 
    cout<<"back function...";
    cout<<vec2.back()<<endl;

    // at(): to get element from specfic idex
    cout<<"at "<<vec2.at(0)<<endl;

    return 0;
}