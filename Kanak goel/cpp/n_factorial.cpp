#include<iostream>
using namespace std;

int fact(int n){
    if(n==0)
    return 1;
    else return n * fact(n-1); 
}
int main(){
int n;
cout<<"Enter any number to find its factorial : ";
cin>>n;
cout<<fact(n)<<endl;
}