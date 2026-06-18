#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
void print(node* head){
    if(head == nullptr){
        cout<<"LL IS EMPTY";
    }
    while(head!=nullptr){
        cout<<head->data<<" ";
        head = head->next;
    }
}
node* createlist(int arr[],int n){
    node* head = new node();
    head->data = arr[0];
    head->next = nullptr;
    node* curr = head;
    for(int i=1;i<n;i++){
        node* temp = new node();
        temp->data = arr[i];
        temp->next = nullptr;
        curr->next = temp;
        curr = temp;
    }
    return head;
}
node* insertatbegin(node* head,int val){
    node* newnode = new node();
    newnode->data = val;
    newnode->next = head;
    return newnode;
}
int main(){
    int n;
    cin>>n;
    int val;
    cin>>val;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    node* head=createlist(arr,n);
    head = insertatbegin(head,val);
    print(head);
}