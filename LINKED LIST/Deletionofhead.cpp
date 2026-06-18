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
Node* deletehead(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
// Create linked list from array
Node* createList(int arr[], int n){
    Node* head = new Node{arr[0], NULL};
    Node* curr = head;

    for(int i = 1; i < n; i++){
        curr->next = new Node{arr[i], NULL};
        curr = curr->next;
    }
    return head;
}
int main(){
    int arr[10];
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }

    Node* head = createList(arr, 10);

    head = deletehead(head);

    print(head);

    return 0;
}