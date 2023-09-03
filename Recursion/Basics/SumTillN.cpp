// Sum of first N numbers
#include<bits/stdc++.h>
using namespace std;

// Parameterized way
int add(int n, int i, int sum){
if(i>n)
return sum;
//cout<<i<<endl;
add(n,++i,sum+i);
}

// Functional way
int add2(int n){
if(n<=0)
return 0;
return (n+add2(n-1));
}
int main(){
    int n =10;
    cout<<add(5,1,0);
    cout<<endl;
    cout<<add2(3);
    return 0;
}