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
Node* deletek(Node* head,int k){
    if(head == nullptr){
        return head;
    }
    if(k==1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int coun = 0;
    Node* temp = head;
    Node* prev = nullptr;
    while(temp!= nullptr){
        coun++;
        if(coun == k){
            prev->next = prev->next->next;
            delete temp;
            return head;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    Node* head = createList(arr, 4);
    head = deletek(head,3);
    print(head);
    return 0;
}