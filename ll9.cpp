//delete element from linked list by value not by position
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;

    public:
    node(int data1,node*next1){
       this-> data =data1;
        this->next = next1;
    }
    public:
    node(int data1){
         this->data=data1;
        this->next=nullptr;
    }
    
};
node* convertarr2ll(vector<int> &arr){
        node*head=new node(arr[0]);
        node*mover=head;
        for(int i=1;i<arr.size();i++){
            node*temp=new node(arr[i]);
            mover->next=temp;
            mover=temp;
        }
        return head;
}
void display(node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
node* delete_element(node*head,int element){
    if (head==NULL){
        return head;
    }
    if (head->data==element){
        node*temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    
    node*temp=head;
    node*prev=NULL;
    while(temp!=NULL){
        if(temp->data==element){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}


int main(){
    vector<int>arr={10,22,30,41,5};
    node*head=convertarr2ll(arr);
    head=delete_element(head,41);
    display(head);

}
