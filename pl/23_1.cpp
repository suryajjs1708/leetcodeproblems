// //RANGE OF ARRAY

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int le,ri;
//     cin>>le>>ri;
//     int count =0;
//     for(int i=0;i<n;i++){
//         if(arr[i] < le && arr[i] > ri){
//             count++;
//         }
//     }
//     cout<<count;
// }




// // SADDLE POINT
// #include <iostream>
// using namespace std;

// int main() {
//     int rows, cols;
//     cin >> rows >> cols;

//     int mat[100][100];

//     // Input matrix
//     for(int i = 0; i < rows; i++) {
//         for(int j = 0; j < cols; j++) {
//             cin >> mat[i][j];
//         }
//     }

//     bool found = false;

//     for(int i = 0; i < rows; i++) {

//         // Find minimum element in the current row
//         int minVal = mat[i][0];
//         int colIndex = 0;

//         for(int j = 1; j < cols; j++) {
//             if(mat[i][j] < minVal) {
//                 minVal = mat[i][j];
//                 colIndex = j;
//             }
//         }

//         // Check if minVal is maximum in its column
//         bool saddle = true;

//         for(int k = 0; k < rows; k++) {
//             if(mat[k][colIndex] > minVal) {
//                 saddle = false;
//                 break;
//             }
//         }

//         if(saddle) {
//             cout << "Saddle Point: " << minVal;
//             found = true;
//             break;
//         }
//     }

//     if(!found) {
//         cout << "No Saddle Point";
//     }

//     return 0;
// }







// // MIDDLE ELEMENT IN MATRIX

// #include <iostream>
// using namespace std;
// int main() {
//     int n, m;
//     cin >> n >> m;
//     int mat[100][100];
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             cin >> mat[i][j];
//         }
//     }
//     int sum = 0;
//      for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             if(i == n/2 && j == m/2) {
//                 sum += mat[i][0];
//                 sum += mat[0][j];
//             }
//         }
//     }
//     cout  << sum - mat[n/2][m/2];
//     return 0;
// }

//ARRANGED
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    bool same = true;

    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[0]) {
            same = false;
            break;
        }
    }

    if(same) {
        cout << "All elements are same";
    }
    else {
        cout << "Arranged elements: ";
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}