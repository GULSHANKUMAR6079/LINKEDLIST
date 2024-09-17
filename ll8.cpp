//deleting kth element of linked list
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
node* delete_kth_element(node*head,int k){
    if (head==NULL){
        return head;
    }
    if (k==1){
        node*temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int count =0;
    node*temp=head;
    node*prev=NULL;
    while(temp!=NULL){
        count++;
        if(count==k){
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
    head=delete_kth_element(head,4);
    display(head);

}
