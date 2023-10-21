#include<iostream>
using namespace std;
class   node
{
public:
    int data ;
    node*next;
    node *head;
    node(){
        data=0;
        next=NULL;
    }

};
node*head;
void insertATbeginning (int data)
{
	node*newnode=new node;
	newnode->data=data;
	newnode->next=head;
	head=newnode;
}
int main()
{
    node*model1=new node;
    model1->data=10;

    node*model2=new node;
    model2->data=20;

    node*model3=new node;
    model3->data=30;

    model1->next=model2;
    model2->next=model3;

    cout<<"data1"<<model1->data<<"self address"<<model1<<"next address"<<model1->next<<endl;
    cout<<"data2"<<model2->data<<"self address"<<model2<<"next address"<<model2->next<<endl;
    cout<<"data1"<<model3->data<<"self address"<<model3<<"next address"<<model3->next<<endl;    
    
    cout<<endl;
    cout<<"Pritinng through loop"<<endl;
    cout<<endl;
    intsertAtbeginning(50);
    node*temp=head;
    while(temp!=NULL){
    	cout<<"data"<<temp->data<<"self address1"<<temp<<" next address"<<temp->next<<endl;
    	temp=temp->next;
	}

	return 0;

}

