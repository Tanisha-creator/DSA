// Check if a string is a palindrome
#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string s, int i, int j){
    if(i>=j)
    return true;

    if(s[i]!=s[j])
    return false;

    ispalindrome( s, i+1, j-1);

}

int main(){
    string s = "Tanisha";
    string s2 = "tomot";
    cout<<ispalindrome(s,0,s.length()-1);
    cout<<endl;
    cout<<ispalindrome(s2,0,s2.length()-1);
    return 0;
}