//CHECK GIVEN ELEMENT IS PRESENT IN LINKEDLIST OR NOT
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
int checkpresesnt(node*head,int val){
    node*temp=head;
    while(temp){
        if(temp->data==val){
            return 1;
        }
       
        temp=temp->next;
    }
    return 0;
}


int main(){
    vector<int>arr={10,2,3,4,5};
    node*head= convertarr(arr);
    cout<<"present or not by 1 or 0 : "<<checkpresesnt(head,4)<<endl;
    cout<<"present or not by 1 or 0 : "<<checkpresesnt(head,19)<<endl;
}
//time complexity =o(n):worst
//time complexity =o(1):best
//time complexity =o(n/2):average