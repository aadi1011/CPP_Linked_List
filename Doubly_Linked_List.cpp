//Menu driven C++ Program to perform operations on a doubly linked list
//Code by Aadith Sukumar (https://github.com/aadi1011)

#include<iostream>
using namespace std;

// Definining structure for node
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

//Traverse the list
void traverse(struct node* head)
{
    struct node* temp = head->link;
    cout << endl;
    cout<<head->data<<" -> ";   //Base head printing
    while (temp != head)
        {
            cout << temp->data << " -> ";
            temp = temp->link;
        }
}

void menu(struct node* head)
{
    //Creating a menu
    int choice;
    cout<<"\n\n1. Traverse the list"<<endl;
    cout<<"2. Insert at the beginning"<<endl;
    cout<<"3. Insert at the end"<<endl;
    cout<<"4. Insert at a position"<<endl;
    cout<<"5. Delete at the beginning"<<endl;
    cout<<"6. Delete at the end"<<endl;
    cout<<"7. Delete at a position"<<endl;
    cout<<"8. Concatenate two lists"<<endl;
    cout<<"9. Exit"<<endl;
    
    //Taking input from user
    cout<<"Enter your choice: ";
    cin>>choice;
    
    if (choice==1)
    {
        traverse(head);
    }
    else if (choice==2)
    {
        insert_beg(head);
    }
    else if (choice==3)
    {
        insert_end(head);
    }
    else if (choice==4)
    {
        insert_pos(head);
    }
    else if (choice==5)
    {
        delete_beg(head);
    }
    else if (choice==6)
    {
        delete_end(head);
    }
    else if (choice==7)
    {
        delete_pos(head);
    }
    else if (choice==8)
    {
        concatenate(head);
    }
    else if (choice==9)
    {
        exit(0);
    }
    else
    {
        cout<<"Invalid choice"<<endl;
    }
    menu(head);
}


// Main function
int main()
{
    struct node *head=NULL;
    struct node *second=NULL;
    struct node *third=NULL;

    // Allocating memory for nodes
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    // Assigning values to nodes
        //First (head) value
    head->prev=NULL;
    head->data=45;
    head->next=second;
        //second value    
    second->prev=head;
    second->data=80;
    second->next=third;
        //third value
    third->prev=second;
    third->data=95;
    third->next=NULL;
    
    menu(head); 
    return 0;
}

