#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int check_available = 0; // use to check is data enter have been happen or not

void f_line() // print line before
{
	printf("================================================================================\n");
}

void e_line() // print line after
{
	printf("\n================================================================================\n");
}

// use to create nodes
struct student
{
	char name[100];
	char roll[10];
	char branch[20];

	struct student *next;
};

struct student *first=NULL,*last=NULL,*k;
// first -> points to first node

void create(int n)
{
	int i;
	check_available = 1;

	first=(struct student*)malloc(sizeof(struct student));

	printf("\n\tEnter the first name of the student:");
	scanf("%s",first->name);

	printf("\tEnter the roll number of the student:");
	scanf("%s",first->roll);

	first->next=NULL;
	last=first;

	for(i=1;i<n;i++)
	{
		k=(struct student*)malloc(sizeof(struct student));

		printf("\n\tEnter the first name of the student:");
		scanf("%s",k->name);

		printf("\tEnter the roll number of the student:");
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
	if(check_available == 0)
	{
		printf("\tNo Enter have been entered so first enter the data\n");
	}

	t=first;
	while(t!=NULL)
	{
		printf("\n\tThe roll number of the student:%s",t->roll);
		printf("\n\tFirst name of the student:%s",t->name);
		printf("\n");
		t=t->next;
	}
}


void insertafter()
{
	struct student *t;
	char r[10];
	int flag=0;
	printf("\n\tEnter the roll number u wanna insert after that:");
	scanf("%s",r);
	t=first;
	while(t!=NULL)
	{
		if(strcmp(r,t->roll)==0)
		{
			k=(struct student*)malloc(sizeof(struct student));
			printf("\n\tEnter the first name of the student:");
			scanf("%s",k->name);
			printf("\tEnter the roll number of the student:");
			scanf("%s",k->roll);
			k->next=t->next;
			t->next=k;
			flag=1;
			break;
		}
		t=t->next;
	}
	if(flag==0)
		printf("\n\tThe roll number not found in the database!!!");
}

void del()
{
	struct student *back,*t,*k;
	char r[10];	// store data roll number to be deleted
	int flag=0;

//  take enter to number which is to be deleted
	printf("\n\tEnter the roll number u wanna delete:");
	scanf("%s",r);

//  strcmp() -> return 0 value if data is same
//	this will work if data enter is same
//	i.e Entry is same
	if(strcmp(r,first->roll)==0)
	{
		first=first->next; // traverse by one node
		flag=1;
		printf("\tThe roll no is deleted!!!\n");
	}
// use because 'first' node address should not be loss
	else
	{
		back=first;
		// back -> points to node previous to 'k' node
		k=first->next;
		// k -> use for traversing

		// will traverse up till last node
		while(k!=NULL)
		{
			// will delete the node
			if(strcmp(r,k->roll)==0)
			{
				back->next=k->next;
				flag=1;
				break;
				// terminate the loop
			}
			back=back->next;
			// to traverse the whole list
			k=k->next;
			// to traverse the whole list
		}
		printf("\tThe roll no is deleted!!!\n");
	}
	// will work if dat is not present in the database
	if(flag==0)
		printf("\n\tThe roll number is not present in the database!!!");

}


void search()
{
	struct student *t;
	char r[10];
	int flag=0;
	printf("\n\tEnter the roll number u wanna search:");
	scanf("%s",r);
	t=first;
	while(t!=NULL)
	{
		if(strcmp(r,t->roll)==0)
		{
			printf("\n\tThe roll number found in the list!!!\nStudent name is %s",t->name);
			flag=1;
			break;
		}
		t=t->next;
	}
	if(flag==0)
		printf("\n\tThe roll number is not present in the database!!");
}

int main()
{
	int n, o;
	clrscr();

	// n -> enter amx size variable
	// o -> option

	printf("\t\tษอออออออออออออออออออออออออออออออออออออออออออออออออออป\n");
	printf("\t\tบ         WELCOME TO STUDENT DATABASE SYSTEM        บ\n");
	printf("\t\tศอออออออออออออออออออออออออออออออออออออออออออออออออออผ\n");

	printf("\n\n");
	printf("\n\t\t\tEnter 1 : Creating database");
	printf("\n\t\t\tEnter 2 : Displaying database");
	printf("\n\t\t\tEnter 3 : Inserting an record after another");
	printf("\n\t\t\tEnter 4 : Deleting a record");
	printf("\n\t\t\tEnter 5 : Searching a record");
	printf("\n\t\t\tEnter 0 : Exit!\n\n");
	printf("\n\t\t\tEnter the choice:");

	scanf("%d",&o);

	while(o!=0)
	{
		system("cls");
		f_line();
		switch(o)
		{
			case 1:
				printf("\n\tEnter the maximum size of the database:");
				scanf("%d",&n);
				if(n!=0)
				{
					create(n);
				}
				else
				{
					printf("\n\tAt least Minimum size '1' is required\n");
					goto max_zero;
				}

				break;

			case 2:
				display();
				break;

			case 3:
				insertafter();
				break;

			case 4:
				del();
				break;

			case 5:
				search();
				break;

			case 0:
				exit(0);
				break;

			default:
				printf("\n\tYou have entered a wrong choice!!!");
		}
		max_zero:
		e_line();
		getch();

		clrscr();

		/////////////////////////////////////////////


	printf("\t\tษอออออออออออออออออออออออออออออออออออออออออออออออออออป\n");
	printf("\t\tบ         WELCOME TO STUDENT DATABASE SYSTEM        บ\n");
	printf("\t\tศอออออออออออออออออออออออออออออออออออออออออออออออออออผ\n");

	printf("\n\n");
	printf("\n\t\t\tEnter 1 : Creating database");
	printf("\n\t\t\tEnter 2 : Displaying database");
	printf("\n\t\t\tEnter 3 : Inserting an record after another");
	printf("\n\t\t\tEnter 4 : Deleting a record");
	printf("\n\t\t\tEnter 5 : Searching a record");
	printf("\n\t\t\tEnter 0 : Exit!\n\n");
	printf("\n\t\t\tEnter the choice:");
	scanf("%d",&o);

	}

	return 0;
}

