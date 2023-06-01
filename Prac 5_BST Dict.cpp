#include <iostream>
#include <string>
#include<stdlib.h>
using namespace std;
string key;
int flag=0;
class node{
   
    public:
    node *left;
    string wdata,mean;
    node *right;
};


class binary{  
    public:  
    node *root;
    node *temp;

    binary()
    {
       root=NULL;
    }
void create();
void Display();
void inorder(node *);
void insert(node *,node *);
void search(node *);
void update(node *);

};


void binary::create()
{
int op;
do
{
temp=new node;

cout<<"Enter the word :";
cin>> temp->wdata;
cout<<"Enter the Meaning of word :";
cin>>temp->mean;
temp->left=NULL;
temp->right=NULL;

if(root==NULL){
root=temp;
}
else{
insert(root,temp);
}
cout<<"Do you want to continue, press 1 : ";
cin>>op;
}while (op==1);

}

void binary::inorder(node *root)
{
    if(root!=NULL)
    { 
        inorder(root->left);
        cout<<"Word:"<<root->wdata<<" Meaning:"<<root->mean<<"\n";
        inorder(root->right);
    }
}


void binary::insert(node *root,node *temp)
{
  char ch;
  //cout<<"Root Node:-"<<root->data;
  if(temp->wdata<root->wdata)
  {
      if(root->left==NULL)
      {
          root->left=temp;
      }
      else
      insert(root->left,temp);

  }
  else if (temp->wdata>root->wdata)
 {
 
      if(root->right==NULL)
      {
          root->right=temp;
      }
      else
      insert(root->right,temp);
  }
   
}

//void binary::search(node *root,string key)
void binary::search(node *root)
{
   if(root!=NULL)
{
   if(key==root->wdata)
 //if(key.compare(root->wdata))
	
 {
  cout<<"Element is Found\n";
  cout<<"Word:"<<root->wdata<<" Meaning:"<<root->mean<<"\n";
  flag=1;
 }
 else if(key<root->wdata)
 {
  search(root->left);
 }
 else if(key>root->wdata)
 {
  search(root->right);
 }
 }   
 else
{
  cout<<"Element is not found...\n";
 }
  
}

void binary::update(node *root)
 {
   if(root!=NULL)
{
   if(key==root->wdata)
 //if(key.compare(root->wdata))
	
 {
  cout<<"\nEnter New Meaning of Keyword:";
  cin>>root->mean;
  cout<<"Word:"<<root->wdata<<" Meaning:"<<root->mean<<"\n";
  flag=1;
 }
 else if(key<root->wdata)
 {
  update(root->left);
 }
 else if(key>root->wdata)
 {
  update(root->right);
 }
 }   
 else
{
  cout<<"Element is not found...\n";
 }
  
}
   



void binary::Display()
{
    cout<<"BST Traversal...";
    cout<<"\nInorder Representation:\n";
    inorder(root);
   
}


int main() {
    binary nd;
    int ch;
    
    
    while (1)
    { 
    cout<<"\n1) Create and insert node in BST\n2)Traversal Tree\n3)Search element from BST\n4) Update\n5)Exit\n\n";
    cout<<"\nEnter your choice:";
    cin>>ch;
    switch (ch)
    {
    case 1:
    nd.create();
    break;
   
    case 2:
    nd.Display();
    break;
    
    case 3:
    cout<<"\nSearch Operation on BST..\n";
    cout<<"Enter search key:";
     cin>>key;
    nd.search(nd.root);
    break;
    
    case 4:
    cout<<"\nUpdate Operation on BST..\n";
    cout<<"Enter search key:";
    cin>>key;
    nd.update(nd.root);
    break;
    
    case 5:
    exit(1);
    cout<<"Thank you...!!";
    break;
    
    default:
    cout<<"Invalid choice..\n";
    }
    }
    return 0;
}
