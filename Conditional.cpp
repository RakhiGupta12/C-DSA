#include<iostream>
using namespace std;

int main(){
    // Conditionals
    int n = -2;
    if(n>=0){
        cout<<n<<endl;
    }
    else{
        cout<<"you are duff"<<endl;
    }
   // AGE
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
   

    if(age>=18){
        cout<<"You can vote";
    }
    else if(age<18 && age>10){
        cout<<"you cant think either"<<endl;
    }
    else if(age<10 && age>1){
        cout<<"just play dont think much of it"<<endl;;
    }
    else{
        cout<<"get lost"<<endl;
    }

    // ODD AND EVEN
    int x;
    cout<<"Enter the number as per your demmand"<<endl;
    cin>>x;
    cout<<"your Result is : ";

    if(x%2==0){
        cout<<"number is even"<<endl;
    }
    else{
        cout<<"your number is odd"<<endl;
    }
    //MARKS
    int marks;
    cout<<"Enter your marks"<<endl;
    cin>>marks;
    
    if(marks>90){
        cout<<"A"<<endl;
    }
    else if(marks<=70 || marks>=50){
        cout<<"B"<<endl;
    }
    else if(marks<=40 || marks>=20){
        cout<<"C";
    }
    else{
        cout<<"fail";
    }

}

