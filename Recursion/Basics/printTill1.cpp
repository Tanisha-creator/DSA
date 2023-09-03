// Print linearly from N to 1
#include<bits/stdc++.h>
using namespace std;

void f(int n){
if(n<1)
return;
cout<<n<<endl;
f(--n);
}

int main(){
    int n =10;
    f(n);
    return 0;
}