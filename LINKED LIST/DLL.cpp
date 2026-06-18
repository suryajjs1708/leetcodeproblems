#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* back;
};

Node* createList(int arr[], int n){

    Node* head = new Node();
    head->data = arr[0];
    head->next = nullptr;
    head->back = nullptr;
    Node* temp = head;
    for(int i = 1; i < n; i++){
        Node* newNode = new Node();
        newNode->data = arr[i];
        newNode->next = nullptr;

        temp->next = newNode;
        newNode->back = temp;

        temp = newNode;
    }

    return head;
}

void print(Node* head){
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}

int main(){

    int arr[5] = {1,2,3,4,5};

    Node* head = createList(arr, 5);

    print(head);

    return 0;
}