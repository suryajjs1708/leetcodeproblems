#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void print(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
Node* createlist(int arr[], int n) {
    Node* head = new Node();
    head->data = arr[0];
    head->next = NULL;
    Node* curr = head;
    for (int i = 1; i < n; i++) {
        Node* temp = new Node();
        temp->data = arr[i];
        temp->next = NULL;
        curr->next = temp;
        curr = temp;
    }
    return head;
}
void sortlist(Node* head){
    vector<int> v;
    Node* temp = head;
    while(temp!= nullptr){
        v.push_back(temp->data);
        temp = temp->next;
    
    }
    sort(v.begin(),v.end());
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* head = createlist(arr,n);
    sortlist(head);
    print(head);
}