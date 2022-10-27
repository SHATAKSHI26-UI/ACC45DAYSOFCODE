#include<iostream>
using namespace std;

class Solution
{
    public:

    bool detectLoop(Node* head)
    {
    struct Node* temp=head;
        for(int i=0;i<10000;i++){
            if(temp==NULL) return false;
            temp=temp->next;
        }
            return true;
        
        
    }
};

