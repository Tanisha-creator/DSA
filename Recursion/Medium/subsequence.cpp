// Print all the subsequence of the array/string recursively
// Pick / Not Pick Problem

#include<bits/stdc++.h>
using namespace std;

void print( vector<int> arr){
    if(arr.size()==0)
    cout<<"NULL";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    cout<<endl;
}

void allSubsequence(int ind, vector<int> arr, vector<int> ans){
    if(ind>=arr.size()){
        print(ans);
        return;
    }
    // pick this index
    ans.push_back(arr[ind]);
    allSubsequence(ind+1,arr,ans);

    // Don't pick index
    ans.pop_back();
    allSubsequence(ind+1,arr,ans);
}

int main(){
    vector<int> arr = {1,2,3,4};
    allSubsequence(0,arr,{});
    return 0;
}