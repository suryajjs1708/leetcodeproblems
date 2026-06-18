#include<bits/stdc++.h>
using namespace std;
void print(vector<int> arr){
    queue <int> q;
    for(int i=0;i<arr.size();i++){
        q.push(arr[i]);
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
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