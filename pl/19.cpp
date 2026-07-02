// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int row, col;
//     cin >> row >> col;
//     vector<vector<int>> matrix(row, vector<int>(col));
//     for(int i = 0; i < row; i++) {
//         for(int j = 0; j < col; j++) {
//             cin >> matrix[i][j];
//         }
//     }
//     int r1, r2;
//     cin >> r1 >> r2;
//     if(r1 < 0 || r1 >= row || r2 < 0 || r2 >= row) {
//         cout << "Invalid row number";
//         return 0;
//     }
//     swap(matrix[r1], matrix[r2]);
//     for(int i = 0; i < row; i++) {
//         for(int j = 0; j < col; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    vector<vector<int>> matrix(row, vector<int> (col));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
     }
     int row1,row2;
     cin>>row1>>row2;
     if(row1<0 || row1>=row || row2<0 || row2>=row){
         cout<<"Invalid row numbers";
         return 0;
     }

     swap(matrix[row1], matrix[row2]);
     
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}