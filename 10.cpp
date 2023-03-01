#include<iostream>
#include<string>
using namespace std;

struct speaker
{
    string name;
    string phno;
    string topic;
    double fee;
    speaker *next;
    void input()
    {
    cin.ignore();
    cout<<"Enter name: ";
    getline(cin,name);
    cout<<"Enter Phno: ";
    getline(cin,phno);
    cout<<"Enter Topic: ";
    getline(cin,topic);
    fee=-1;
    while(fee<0)
    {
        cout<<"Enter fee: ";
        cin>>fee;
        if(fee<0)
            cout<<"negative value not allowed\n";

    }
    next=NULL;
    }

    void display()
    {
    cout<<"Name: "<<name<<endl;
    cout<<"Phno: "<<phno<<endl;
    cout<<"Topic: "<<topic<<endl;
    cout<<"Fee: "<<fee<<endl;
    }
};

speaker * insert(speaker * root)
{
    if(root==NULL)
    {
    root= new speaker();
    root->input();
    return root;
    }
    speaker * s= new speaker();
    s->input();
    s->next=root;
    root=s;
    return root;
}

//modify
speaker * modify(speaker *root,string key)
{
    if(root==NULL)
        return NULL;
    speaker * cur = root;
    while(cur!=NULL)
    {
        if(cur->name.compare(key)==0)
            return cur;
        cur=cur->next;
    }
    return NULL;

}
void search(speaker *root,string key)
{
    if(root==NULL)
        return;
    speaker * cur = root;
    while(cur!=NULL)
    {
        if(cur->topic.find(key)!=string::npos)
            cur->display();
        cur=cur->next;
    }
    return;

}


void  display(speaker *root)
{
    if(root==NULL)
        return;
    speaker * cur = root;
    while(cur!=NULL)
    {
        cur->display();
        cur=cur->next;
    }
    return;

}


int main()
{
    int choice=0;
    speaker * root=NULL;
    while(choice!=5)
    {
        cout<<"1.Add a new node\n";
        cout<<"2.Modify a node\n";
        cout<<"3.Search for a node\n";
        cout<<"4.Display all nodes\n";
        cout<<"5.Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)

        {
            case 1:
            {
                root=insert(root);
            }
            break;
            case 2:
            {
                string key;

                cout<<"Enter Name : ";
                cin>>key;

                speaker * ele=modify(root,key);
                if(ele!=NULL)
                {
                    ele->input();
                }
                else
                cout<<"Speaker not found\n";
            }
            break;
            case 3:
            {
                string key;
                cout<<"Enter key: ";
                cin>>key;

                search(root,key);

            }
            break;
            case 4:
            {
                display(root);
            }
            break;
            case 5:
            {
                cout<<"BYE!!\n";
            }
            break;
            default: cout<<"Enter a valid choice\n";
        }
    }
    return 0;
}
