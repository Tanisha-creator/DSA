// Print name 5 times using recursion

#include<bits/stdc++.h>
using namespace std;

void f(string s, int i){
    if(i==6)
    return;
    cout<<s<<endl;
    f(s,i+1);
}
int main(){
    string name = "Tanu";
    int i=1;
    f(name,i);
    return 0;
}