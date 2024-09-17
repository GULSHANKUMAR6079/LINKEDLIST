//length of linkedlist:
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
int lengthofll(node*head){
    int count=0;
    node*temp=head;//i donot want to destroy my head thats why i first stored it in different variable and done operations on that variables;
    while(temp){
        temp=temp->next;
        count++;
    }
    return count;
}
int main(){
    vector<int>arr={100,2,3,4,5};
     node*head=convertarr(arr);
    cout<<"length of linked list is: "<<lengthofll(head)<<endl;
}
//time complexity is o(n)