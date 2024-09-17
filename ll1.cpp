// CREATING A LINKEDLIST
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;  // public declaration

    public:
    node(int data1,node*next1){
       data =data1;
       next = next1;  //constructor where the next will always contain the address of another node and not null
    }
    public:
    node(int data1){
        data=data1;
        next=NULL;  // constructor automatically points next to null pointer in case i dont want to write again and again that it is null
    }
};
int main(){
    vector<int>arr={1,2,3,4,5};
    node*y=new node(arr[1]);
    cout<<"linkedlist data : "<<y->data<<endl;
     cout<<"linkedlist address : "<<y->next<<endl;
    node* y1= new node(arr[1],NULL);
    cout<<"\n 24. "<<y1->data;
     cout<<"\n 25. "<<y1->next;
    node y2= node(arr[3]);
    cout<<"\n 28. "<<y2.data;
    cout<<"\n 29. "<<y2.next;
}
