// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     unordered_map<int,int> freq;
//     for(int x : arr) {
//         freq[x]++;
//     }
//     bool found = false;
//     for(int x : arr) {
//         if(freq[x] > 1) {
//             cout << x << " ";
//             freq[x] = 0; 
//             found = true;
//         }
//     }

//     if(!found) {
//         cout << "No repeating";
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int , int> freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    bool found = false;
    for(int i=0;i<n;i++){
        if(freq[arr[i]] > 1){
            cout<<arr[i]<<" ";
            freq[arr[i]] = 0;
            found = true;
        }
    }
    if(!found){
        cout<<"No rep";
    }

}