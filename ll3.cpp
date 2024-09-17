//traversing a linkedlist
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
node* convertarr(vector<int> &arr){
        node*head=new node(arr[0]);
        node*mover=head;
        for(int i=1;i<arr.size();i++){
            node*temp=new node(arr[i]);
            mover->next=temp;
            mover=temp;
        }
        return head;
    }
int main(){
    vector<int>arr={10,2,3,4,5};
    node*head=convertarr(arr);
    node*temp=head;
    while(temp){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
    
}
