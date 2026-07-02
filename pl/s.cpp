// // // // // // #include<bits/stdc++.h>
// // // // // // using namespace std;

// // // // // // int main(){
// // // // // //     string s;
// // // // // //     getline(cin, s);
    
// // // // // //     int vowel = 0;
// // // // // //     int cons = 0;
    
// // // // // //     for(int i = 0; i < s.size(); i++){
// // // // // //         char ch = tolower(s[i]); 
        
// // // // // //         if(isalpha(ch)){ 
// // // // // //             if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
// // // // // //                 vowel++;
// // // // // //             }
// // // // // //             else{
// // // // // //                 cons++;
// // // // // //             }
// // // // // //         }
// // // // // //     }
    
// // // // // //     cout << "Vowels: " << vowel << endl;
// // // // // //     cout << "Consonants: " << cons << endl;
    
// // // // // //     return 0;
// // // // // // }


// // // // // //ARRAY TWO SUM
// // // // // #include<bits/stdc++.h>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     int n;
// // // // //     cin>>n;
// // // // //     vector<int> arr(n);
// // // // //     for(int i=0;i<n;i++){
// // // // //         cin>>arr[i];
// // // // //     }
// // // // //     int target;
// // // // //     cin>>target;
// // // // //     int sum=0;
// // // // //     for(int i=0;i<n;i++){
// // // // //         for(int j=i+1;j<n;j++){
// // // // //             if(arr[i] + arr[j] == target){
// // // // //                 cout<<arr[i]<<" "<<arr[j]<<endl;
// // // // //             }
// // // // //         }
// // // // //     }


// // // // // }



// // // // // //FIZZBUZZ

// // // // // #include<bits/stdc++.h>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     int n;
// // // // //     cin>>n;
// // // // //     for(int i=1;i<=n;i++){
// // // // //         if(i%3==0 && i%5==0){
// // // // //             cout<<"FizzBuzz"<<endl;
// // // // //         }
// // // // //         else if(i%3==0){
// // // // //             cout<<"Fizz"<<endl;
// // // // //         }
// // // // //         else if(i%5==0){
// // // // //             cout<<"Buzz"<<endl;
// // // // //         }
// // // // //         else{
// // // // //             cout<<i<<endl;
// // // // //         }
// // // // //     }
// // // // // }


// // // // //INPUT A1B2 OUTPUT ABB
// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // int main(){
// // // //     string s;
// // // //     getline(cin,s);
// // // //     string result ="";
// // // //     char last =' ';
// // // //     for(int i=0;i<s.size();i++){
// // // //         if(isalpha(s[i])){
// // // //             last =s[i];
// // // //         }
// // // //         else if(isdigit(s[i])){
// // // //             int count = s[i] - '0';
// // // //             result += string(count, last);
// // // //         }
// // // //     }
// // // //     cout<<result<<endl;
// // // // }


// // // //INPUT A1B2 OUTPUT ABB
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main(){
// // //     string s;
// // //     cin>>s;
// // //     string di="";
// // //     string le="";
// // //     for(int i=0;i<s.size();i++){
// // //         if(isalpha(s[i])){
// // //             le += s[i];
// // //         }
// // //         else if(isdigit(s[i])){
// // //             di += s[i];
// // //         }   
// // //     }
// // //     // for(int i=0;i<di.size();i++){
// // //     //     int count = di[i] - '0';
// // //     //     le += string(count, le[i]);
// // //     // }
// // //     cout<<le+di<<endl;
// // // // }
// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // int main() {
// // //     string s;
// // //     cin >> s;

// // //     for(char &c : s) {
// // //         c = tolower(c);
// // //     }

// // //     cout << s << endl;
// // // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
// //     vector<int> arr(n);
// //     for(int i=0;i<n;i++){
// //         cin>>arr[i];
// //     }
// //     int pro =0;
// //     for(int i=0;i<n;i++){
// //         for(int j=i+1;j<n;j++){
// //             pro = max(pro, arr[i] * arr[j]);
// //         }
// //     }
// //     cout<<pro<<endl;
// // }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    string s;
//    cin>>s;
//    int n = s.size();
//    vector<string> arr(n);
//    for(int i=0;i<n;i++){
//     cin>>arr[i];
//    }
//    int count=0;
//    for(int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++){
//            if(arr[i] == s.substr(i,j-i)){
//             count++;
//             cout<<count<<" ";
//         }
//        }
//    }
// }




#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    vector<vector<int>> mat(row, vector<int>(col));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           if(mat[i][j] ==0 ){
            mat[i][0] =0;
            mat[0][j] =0;
           }
        }
    }
        // for(int i=0;i<row;i++){
        //     for(int j=0;j<col;j++){
        //         if(mat[i][0] ==0 || mat[0][j] ==0){
        //             mat[i][j] =0;
        //         }
        //     }
        // }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
