// Reverse an array
// Approach1 : Using stack
#include<bits/stdc++.h>
using namespace std;

void reverseViaStack(int arr[], int size){
    stack<int>s;
    for(int i=0;i<size;i++){
        s.push(arr[i]);
    }
    while(!s.empty()){
        int i = s.top();
        cout<<i<<" ";
        s.pop();
    }
}

// Approach 2 : Using Recursive swap | 2 pointer approach
void reverse(int arr[], int i,int j){
    if(i>=j)
    return;
    
    swap(arr[i],arr[j]);
    reverse(arr,i+1,j-1);
}

// Approach 3 : Same as 2 but using single pointer
void reverse2(int arr[], int size, int i){
    if(i>=size/2)
    return;
    
    swap(arr[i],arr[size-i-1]);
    reverse2(arr,size,i+1);
}

int main(){
    int arr[]={1,2,3,4,8,100};
    reverseViaStack(arr,6);
    /*reverse(arr,0,5);
    cout<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }*/
    cout<<endl;
    reverse2(arr,6,0);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
