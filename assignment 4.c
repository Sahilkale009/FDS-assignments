#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
int roll;
int prn;
char name[20];
struct node *next;

};
struct node* create()
{
struct node * head;
int p,r;
char na[20];
  head=(struct node *)malloc(sizeof(struct node ));
printf("enter urprn_no,roll_no and name\n");
scanf("%d%d%s",&p,&r,na);
  head->prn=p;
  head->roll=r;
strcpy(head->name,na);
  head->next =NULL;
return head;
}
voidadd(struct node *head)
{
int a;
struct node *temp,*q;
  q=head;
printf("how many members u want to add\n");
scanf("%d",&a);
for(int i=0;i<a;i++)
  {
    temp=(struct node *)malloc(sizeof(struct node));
printf("enter ur prn-no,roll_no and name\n");
scanf("%d %d %s",&temp->prn,&temp->roll,temp->name);
    q->next=temp;
    q=temp;
  }

}
voiddisplay(struct node *head)
{
while(head!=NULL)
  {
printf("\nprn_no=%d\n",head->prn);
printf("roll_no=%d\n",head->roll);
printf("name=%s\n",head->name);
    head=head->next;
  }
}
voiddelp(struct node *head)
{
struct node *q;
  q=head->next;
  free(head);
}
voidadds(struct node * head)
{
struct node *s;
char ja[30];
s=(struct node *)malloc(sizeof(struct node));
printf("enter prn-no,roll-no and name\n");
scanf("%d%d",&s->prn,&s->roll);
scanf("%s",ja);
strcpy(s->name,ja);
while(head!=NULL && head->next!=NULL)
{
head=head->next;
}
head->next=s;
s->next=NULL;

}
voiddels(struct node *head)
{
while(head!=NULL&& head->next!=NULL)
  {
    head=head->next;
  }
  free(head);
}
voiddelm(struct node *head)
{ int n;
struct node *p;


printf("enter the prn no to delete the node\n");
scanf("%d",&n);

while(head->prn!=n)
{
  p=head;
  head=head->next;

}

p->next=head->next;
free(head);

}



int main()
{
int a;
char ch;
struct node *head;
do{
printf("\n1)add president\n2)add member\n3)add secratery\n4)delete president\n5)delete secratery\n6)display\n7)exit\n8)delete member\n");
printf("enter your choice\n");
scanf("%d",&a);
switch(a)
  {
case1:
    head=create();
break;
case2:
    add(head);
break;
case3:
    adds(head);
break;
case4:
delp(head);
break;
case5:
dels(head);
break;
case6:
    display(head);
break;
case8:
delm(head);
break;

  }

}while(a!=7);

}

