// Factorial of N numbers
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n<=1)
    return 1;
    return (n*fact(n-1));
}

int main(){
    cout<<fact(4);
    cout<<endl;
    cout<<fact(3);
    return 0;
}
