#include<bits/stdc++.h>
using namespace std;
void print(vector<int> arr){
    stack <int> st;
    for(int i=0;i<arr.size();i++){
        st.push(arr[i]);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    print(arr);
}