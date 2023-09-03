// 1. Print all the subsequence of the array/string recursively with SUM K
// 2. Print only one subsequence with SUM K
// 3. Print the count of subsequences with sum K.
// Pick / Not Pick Problem

#include<bits/stdc++.h>
using namespace std;

void print( vector<int> arr){
    if(arr.size()==0)
    cout<<"NULL";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int sum(vector<int> ans){
    int c=0;
    for(int i=0;i<ans.size();i++){
        c += ans[i];
    }
    return c;
}

void allSubsequence(int ind, vector<int> arr, vector<int> ans, int K){
    if(ind>=arr.size()){
        if(sum(ans)==K){
            print(ans);
        }
        return;
    }
    // pick this index
    ans.push_back(arr[ind]);
    allSubsequence(ind+1,arr,ans,K);

    // Don't pick index
    ans.pop_back();
    allSubsequence(ind+1,arr,ans,K);
}

bool oneSubsequence(int ind, vector<int> arr, vector<int> ans, int K){
    if(ind==arr.size()){

        // condition satisfied
        if(sum(ans)==K){
            print(ans);
            return true;
        }
        // condition not satisfied
        else return false;
    }
    // pick this index
    ans.push_back(arr[ind]);
    // put func call in if statement
    if(oneSubsequence(ind+1,arr,ans,K)== true)
    return true;
    // Don't pick index
    ans.pop_back();
    if(oneSubsequence(ind+1,arr,ans,K)== true)
    return true;

    // if both return false
    return false;
}

int countAllSubsequence(int ind, vector<int> arr, vector<int> ans, int K, int count){
    if(ind>=arr.size()){
        if(sum(ans)==K){
            return 1;
        }
        return 0;
    }
    // pick this index
    ans.push_back(arr[ind]);
    int left = countAllSubsequence(ind+1,arr,ans,K, count);

    // Don't pick index
    ans.pop_back();
    int right = countAllSubsequence(ind+1,arr,ans,K,count);

    return left+right;
}

int main(){
    //vector<int> arr = {1,2,3,4};
    vector<int> arr = {1,2,1};
    int target=2;
    int count=0;
    //allSubsequence(0,arr,{}, target);
    //oneSubsequence(0,arr,{}, target);
    cout<<countAllSubsequence(0,arr,{}, target, count);

    return 0;
}