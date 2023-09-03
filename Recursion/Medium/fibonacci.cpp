// Multiple Recursion Calls
// Fibocacci Numbers

#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n<=1)
    return n;
    return (fibo(n-1)+fibo(n-2));   // TC = 2^n  bcs har func call pe 2 calls hori hai
}

int main(){
    cout<<fibo(3);
    cout<<endl;
    cout<<fibo(6);
    return 0;
}
