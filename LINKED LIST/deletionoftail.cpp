#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void print(Node* head){
    while(head != nullptr){
        cout<<head->data<<" ";
        head = head->next;
    }
}
Node* createList(int arr[],int n){
    Node* head= new Node();
    head->data=arr[0];
    Node* curr = head;
    for(int i=1;i<n;i++){
        Node* temp = new Node();
        temp->data = arr[i];
        curr->next = temp;
        curr = curr->next;
    }
    return head;
}
Node* deleteTail(Node * head){
    if(head == nullptr || head->next == nullptr){
        return nullptr;
    }
    Node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}
int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    Node* head = createList(arr, 4);
    head = deleteTail(head);
    print(head);
    return 0;
}