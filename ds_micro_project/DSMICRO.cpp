#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

struct student
{
char name[100];
char roll[10];
struct student *next;
};
struct student *first=NULL,*last=NULL,*k;
void create(int n)
{
int i;
first=(struct student*)malloc(sizeof(struct student));
printf("\nEnter the first name of the student:");
scanf("%s",first->name);
printf("Enter the roll number of the student:");
scanf("%s",first->roll);
printf("\n");
first->next=NULL;
last=first;
for(i=1;i<n;i++)
{
k=(struct student*)malloc(sizeof(struct student));
printf("\nEnter the first name of the student:");
scanf("%s",k->name);
printf("Enter the roll number of the student:");
scanf("%s",k->roll);
printf("\n");
k->next=NULL;
last->next=k; 
last=k;
}
}


void display()
{
struct student *t;
t=first;
while(t!=NULL)
{ 
printf("\nThe roll number of the student:%s",t->roll);
printf("\nFirst name of the student:%s",t->name); 
printf("\n");
t=t->next;
}
}


void insertafter()
{
char r[10];
int flag=0;
printf("\nEnter the roll number u wanna insert after that:");
scanf("%s",r);
struct student *t;
t=first;
while(t!=NULL)
{
if(strcmp(r,t->roll)==0)
{
k=(struct student*)malloc(sizeof(struct student));
printf("\nEnter the first name of the student:");
scanf("%s",k->name);
printf("Enter the roll number of the student:");
scanf("%s",k->roll); 
k->next=t->next;
t->next=k;
flag=1;
break;
}
t=t->next;
}
if(flag==0)
printf("\nThe element not found!!!");
}


void del()
{
struct student *back,*t,*k;
char r[10];
int flag=0;
printf("\nEnter the roll number u wanna delete:");
scanf("%s",r);
if(strcmp(r,first->roll)==0)
{
first=first->next;
flag=1;
}
else
{
back=first;
k=first->next;
while(k!=NULL)
{
if(strcmp(r,k->roll)==0)
{
back->next=k->next;
flag=1;
break;
}
}
}
if(flag==0)
printf("\nThe element not found!!!");
}


void search()
{
char r[10];
int flag=0;
printf("\nEnter the roll number u wanna search:");
scanf("%s",r);
struct student *t;
t=first;
while(t!=NULL)
{
if(strcmp(r,t->roll)==0)
{
printf("\nThe roll number found in the list!!!\nHis name is %s",t->name);
flag=1;
break;
}t=t->next;
}
if(flag==0)
printf("\nThe roll number not in database!!");
}

int main()
{
int n,o;
printf("\t\t\t\t\tWELCOME TO STUDENT DATABASE SYSTEM\n\n");
while(o!=0)
{
printf("\nMENU\n");
printf("\nEnter 1 for creating database");
printf("\nEnter 2 for displaying database");
printf("\nEnter 3 for inserting an record after another");
printf("\nEnter 4 for deleting a record");
printf("\nEnter 5 for searching a record");
printf("\nEnter 0 for exit!\n\n");
printf("\nEnter the choice:");
scanf("%d",&o);
system("cls");
switch(o)
{ 
case 1:printf("\nEnter the maximum size of the database:");
scanf("%d",&n);
create(n);
break;
case 2:display();break; 
case 3:insertafter();break;
case 4:del();break;
case 5:search();break;
case 0:exit(0);break;
default:printf("\nYou have entered a wrong choice!!!");
}
}
//getch();
}

