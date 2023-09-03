// Print linearly from 1 to N
#include<bits/stdc++.h>
using namespace std;

void f(int n, int i){
if(i>n)
return;
cout<<i<<endl;
f(n,++i);
}

int main(){
    int n =10;
    f(n,1);
    return 0;
}