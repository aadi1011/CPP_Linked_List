// C++ code for Linked list with stack Push, Pop, Display operation
// By Aadith Sukumar (https://github.com/aadi1011)

#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node* link;
};  
node*top;

//Display function
void display()
{
    struct node* temp = top;
    cout<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->link;
    }
}