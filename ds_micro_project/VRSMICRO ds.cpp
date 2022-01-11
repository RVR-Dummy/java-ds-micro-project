#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

struct student
{
	char name[100];
	char roll[10];
	char branch[20];
	
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
	printf("\nThe roll number not found in the database!!!");
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
		printf("The roll no is deleted!!!\n");
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
			k=k->next;

		}
		printf("The roll no is deleted!!!\n");
	}
	if(flag==0)
	printf("\nThe roll number is not present in the database!!!");

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
			printf("\nThe roll number found in the list!!!\nStudent name is %s",t->name);
			flag=1;
			break;
		}
		t=t->next;
	}
	if(flag==0)
	printf("\nThe roll number is not present in the database!!");
}

int main()
{       clrscr();
	int n,o;
	printf("\t\tษอออออออออออออออออออออออออออออออออออออออออออออออออออป\n");
	printf("\t\tบ         WELCOME TO STUDENT DATABASE SYSTEM        บ\n");
	printf("\t\tศอออออออออออออออออออออออออออออออออออออออออออออออออออผ\n");
	printf("\n\n\n\t\t\tEnter 1: for creating database");
	printf("\n\t\t\tEnter 2: for displaying database");
	printf("\n\t\t\tEnter 3: for inserting an record after another");
	printf("\n\t\t\tEnter 4: for deleting a record");
	printf("\n\t\t\tEnter 5: for searching a record");
	printf("\n\t\t\tEnter 0: for exit!\n\n");
	printf("\n\t\t\tEnter the choice:");
	scanf("%d",&o);
	while(o!=0)
	{

		system("cls");
		switch(o)
		{
			case 1:printf("\nEnter the maximum size of the database:");
			       scanf("%d",&n);
			       create(n);
			       getch();
			break;
			case 2:display();
			       getch();
			break;
			case 3:insertafter();
			       getch();
			break;
			case 4:del();
			       getch();
			break;
			case 5:search();
			       getch();
			break;
			case 0:exit(0);
			break;
			default:printf("\nYou have entered a wrong choice!!!");

		}

//printf("ฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤ");
		clrscr();
		printf("\n\nEnter 1: for creating database");
		printf("\nEnter 2: for displaying database");
		printf("\nEnter 3: for inserting an record after another");
		printf("\nEnter 4: for deleting a record");
		printf("\nEnter 5: for searching a record");
		printf("\nEnter 0: for exit!\n\n");
		printf("\nEnter the choice:");
		scanf("%d",&o);

	}
	//getch();
}

