// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int mul =1;
//     for(int i=0;i<5;i++){
//         mul *= arr[i];
//     }
//     for(int i=0;i<5;i++){
//         int ans = mul/arr[i];
//         cout<<ans<<" ";
//     }
// }


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;
    vector<vector<int>> matrix(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        if (cols % 2 == 1) {
            cout << matrix[i][cols / 2] << endl;
        } else {
            double median = (matrix[i][cols / 2 - 1] + matrix[i][cols / 2]) / 2.0;
            cout << median << endl;
        }
    }

    return 0;
}