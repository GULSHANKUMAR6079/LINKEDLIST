//deleting head of linked list
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
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
node* deletehead(node*head){
    if (head==NULL){
        return head;
    }
    node*temp=head;
    head=head->next;
    delete temp;
    return head;
}


int main(){
    vector<int>arr={10,2,3,4,5};
    node*head=convertarr2ll(arr);
    head=deletehead(head);
    print(head);

}
