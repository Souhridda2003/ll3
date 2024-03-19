#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(node* head){
        while(head!=NULL){
            cout<<head->val<<" ";
            head=head->next;
        }
        cout<<endl;
    }
// node* deletenode(node* head,node* target){
//     if(head==target){
//         head=head->next;
//         return head;
//     }
//     node* temp=head;
//     while(temp->next!=target){
//         temp=temp->next;
//     }
//     temp->next=temp->next->next;
//     return head;
// }
node* deletenode(node* head,int targetval){
    if(head->val==targetval){
        head=head->next;
        return head;
    }
    node* temp=head;
    while(temp->next->val!=targetval){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}
int main(){
    node* a=new node(10);
   node* b=new node(20);
   node* c=new node(30);
   node* d=new node(40);
   node* e=new node(50);
   a->next=b;
   b->next=c;
   c->next=d;
   d->next=e;
   node* head=a;
   display(head);
   head=deletenode(head,30);
   display(head);
}