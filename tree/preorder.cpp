#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};
void bstInsert(node*& root, int value) {
    if (root == nullptr) {
        root = new node{value, nullptr, nullptr};
        return;
    }
    if (value < root->data) {
        bstInsert(root->left, value);
    } else {
        bstInsert(root->right, value);
    }
}
void printPreorder(node* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    node* root = nullptr;
    for(int i=0;i<n;i++){
        bstInsert(root, arr[i]);
    }
    printPreorder(root);
}