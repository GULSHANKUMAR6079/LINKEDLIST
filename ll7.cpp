//deleting tail of linked list
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
node* deletetail(node*head){
    if (head==NULL|| head->next==NULL){
        return head;
    }
    node*temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free (temp->next);
    temp->next=nullptr;
    return head;
}


int main(){
    vector<int>arr={10,2,3,4,5};
    node*head=convertarr2ll(arr);
    head=deletetail(head);
    display(head);

}
