//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}


Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution
{
    public:
    
    Node *reverse(Node*head){
        Node*p=head,*q=NULL,*r=NULL;
        while(p){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
            
        }
        return q;
    }
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        // your code goes here
        Node*h1=reverse(node1);
        Node*h2=reverse(node2);
        Node*ans=new Node;
        Node*h=ans;
        while(h1 or h2){
            if(!h1){
                h->next=h2;
               h2=h2->next; 
            }
            else if(!h2){
                 h->next=h1;
               h1=h1->next;
            }
            else if(h1->data>h2->data){
               h->next=h1;
               h1=h1->next;
           }
           else {
               h->next=h2;
               h2=h2->next;
           }
           h=h->next;
        }
      
        return ans->next;
    }  
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }
        
        Solution ob;
        struct Node* result = ob.mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends