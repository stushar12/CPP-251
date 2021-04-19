Node * removeDuplicates( Node *head) 
    {
     unordered_map<int,int> m;
     
     Node *curr=head;
     m[curr->data]=1;
     Node * prev=curr;
     curr=curr->next;
     
     while(curr!=NULL)
     {
         if(m.find(curr->data)!=m.end())
         {
             prev->next=curr->next;
             free(curr);
         }
         else
         {
             m[curr->data]=1;
             prev=curr;
         }
         curr=prev->next;
     }
     return head;
    }