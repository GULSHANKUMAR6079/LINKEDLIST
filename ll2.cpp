//convert array to LINKED LIST
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
        node*head=new node(arr[0]);//it will assign the 0th index value of an array to the head
        node*mover=head;//mover initially points to head
        for(int i=1;i<arr.size();i++){//iterate
            node*temp=new node(arr[i]);//storing the value in temporary
            mover->next=temp;//mover next should points to next
            mover=temp;//movers has to move to temp
        }
        return head;
    }
int main(){
    vector<int>arr={100,2,3,4,5};
    node*head=convertarr2ll(arr);
    cout<<"first element= "<<head->data<<endl;//the first element of head will get printed;
}
