// #include<bits/stdc++.h>
// using namespace std;    
// int main(){
//     vector<vector<int>> mat(4,vector<int> (4));
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             cin>>mat[i][j];
//         }
//     }
//     int mi = INT_FAST16_MAX;
//     int ma = INT_FAST16_MIN;
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             mi = min(mi, mat[i][j]);
//             ma = max(ma, mat[i][j]);
//         }
//     }
//     cout<<"Minimum element: "<<mi<<endl;
//      for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             if(mat[i][j] == mi){
//                 cout<<"Index" <<i<<" "<<j<<endl;
//             }
//         }
//     }
//     cout<<"Maximum element: "<<ma<<endl;
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             if(mat[i][j] == ma){
//                 cout<<"Index" <<i<<" "<<j<<endl;
//             }
//         }
//     }
// }





#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> mat(2,vector<int> (2));
    vector<int> row(2,0);
    vector<int> col(2,0);
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>mat[i][j];
            if(mat[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }

        }
        }
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                if(row[i] == 1 || col[j] == 1){
                    mat[i][j] = 0;
                }
            }
        }
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
}