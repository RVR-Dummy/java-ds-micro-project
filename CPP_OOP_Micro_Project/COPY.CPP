#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>

char guess;
int total;
class Teacher;
class Quiz
{
	public:
		char que[80], op1[30], op2[30], op3[30], op4[30], correct_answer;
		int question_score;
		Quiz(){}
		Quiz(char q[], char o1[], char o2[], char o3[], char o4[], char ca, int qs)
		{
			strcpy(que,  q);
			strcpy(op1, o1);
			strcpy(op2, o2);
			strcpy(op3, o3);
			strcpy(op4, o4);
			correct_answer = ca;
			question_score = qs;
		}
		void sports()
		{
			cout<<que<<endl;
			cout<<"a."<<op1<<endl;
			cout<<"b."<<op2<<endl;
			cout<<"c."<<op3<<endl;
			cout<<"d."<<op4<<endl;

			cout<<"\nEnter the Answer: ";
			cin>>guess;

			if(guess == correct_answer)
			{
				cout<<"Correct Answer!!!"<<endl;
				total = total + question_score;
			}
			else
			{
				cout<<"Incorrect Answer!!!"<<endl;
			}
			clrscr();
		}
};

// CLASS QUIZ HERE TERMINATES ==================================================================

class Teacher : public Quiz
{
	public:
	int pass, z;
	char n[30], qualification[30], yn;

	public:
	void teacher_question()
	{
	cout<<"\t\t\tWELCOME!!!!"<<endl;
	cout<<"\nEnter the Password ";    // password 444
	cin>>pass;
	if(pass == 444)
	{
	cout<<"Enter the below Details: "<<endl;
	cout<<"\nName = ";
	gets(n);
	cout<<"\nQualification = ";
	gets(qualification);
	xyz:
	{
	cout<<"\nHow many Questions Do you want to Enter ? ";
	cin>>z;
	cout<<"Enter "<<z<<" Questions: "<<endl;

       fstream f[5];

	for(int i=1; i<=z; i++)
	{
	cout<<"\nQuestion "<<i<<":"<<endl;
	gets(que);
	cout<<"Enter the 4 Options: "<<endl;
	cout<<"Option 1: ";
	gets(op1);
	cout<<"Option 2: ";
	gets(op2);
	cout<<"Option 3: ";
	gets(op3);
	cout<<"Option 4: ";
	gets(op4);



	f[i].open("C://sample.txt",ios :: app);

	f[i].seekg(0,ios :: end);

	f[i]<<que<<"\n";
	f[i]<<op1<<"\n";
	f[i]<<op2<<"\n";
	f[i]<<op3<<"\n";
	f[i]<<op4<<"\n";
	f[i].close();

	}
	}
	}
	cout<<"Do you want to add more Questions(Y/N) ? ";
	cin>>yn;
	if(yn == 'Y' || yn == 'y')
	{
		goto xyz;
	}
	else
	cout<<"Thankyou!!!"<<endl;
	}
	friend void main();
};

void main()
{
	clrscr();
	int c, o;
	char n[30], add[80], yn;
	cout<<"\t\tWelcome to the Quiz Competition!!! "<<endl;
	cout<<"What is your role: "<<endl;
	cout<<"1. Teacher (To add Questions)"<<endl;
	cout<<"2. Student (To solve the Test)"<<endl;
	cin>>o;
	if(o == 1)
	{
		Teacher a1;
		a1.teacher_question();
	}
	if(o == 2)
	{
	cout<<"\nEnter the below Details: "<<endl;
	cout<<"Name    : ";
	gets(n);
	//cin.getline(n, 29);
	cout<<"Class   : ";
	cin>>c;
	cout<<"Address : ";
	gets(add);
//	cin.getline(add,79);
	cout<<"Do you want to Start the Quiz:(Y/N) "<<endl;
	cin>>yn;

	if(yn == 'Y' || yn == 'y')
	{

	cout<<"Let's play the Quiz!!!"<<endl;
	cout<<"\nThe rules For the game is as follows: "<<endl;
	cout<<"1. Mobile Phones , smart watches are strictly Prohibited."<<endl;
	cout<<"2. You will get only 1 chance for each question to solve. "<<endl;
	cout<<"3. All the Questions are compulsory. "<<endl;
	cout<<"\n\nEnter any key to Start..."<<endl;
	getch();
	clrscr();

	Quiz q1("1. Who is known as THE WALL in Cricket History ?",
	"Ravi Shastri",
	"Rahul Dravid",
	"Sanjay Manjarekar",
	"Sachin Tendulkar",
	'b',
	2);

	q1.sports();

// ==========================================================================================
	Quiz q2("2. Who is the only Indian Cricketer who has scored 6 sixes in 6 balls ?",
	"MS Dhoni",
	"Virat Kohli",
	"Yuvraj Singh",
	"Rohit Sharma",
	'c',
	2);

	q2.sports();
// ==========================================================================================

	Quiz q3("3. Which Country did Ravi Shastri Play for ?",
	"Glamorgan",
	"Leicestershire",
	"GLoucestershire",
	"Lancashire",
	'a',
	2);

	q3.sports();
// =========================================================================================

	Quiz q4("4. India Won it's first Olympic Hockey gold in which year ?",
	"1928",
	"1932",
	"1936",
	"1948",
	'a',
	2);

	q4.sports();
// =========================================================================================

	Quiz q5("5. Who is Known as the RUN MACHINE in Cricket ?",
	"VVS Laxman",
	"Virat Kohli",
	"MS Dhoni",
	"Sachin Tendulkar",
	'b',
	2);

	q5.sports();

	cout<<"Name    : "<<n<<endl;
	cout<<"Class   : "<<c<<endl;
	cout<<"Address : "<<add<<endl;
	cout<<"Marks   : "<<total<<"/10"<<endl;
		if(total >= 8)
		{
			cout<<"Excellent!!!"<<endl;
		}
		else if(total < 8 && total >= 5)
		     cout<<"Very Good!!!"<<endl;
		     else
			 cout<<"Poor Result...Needs Improvement!!! "<<endl;

	}
// =========================================================================================
	else
	{
		cout<<"Ok Thankyou..."<<endl;
	}
	}
	else
	{
		cout<<"\nEnter the correct choice..."<<endl;
	}
getch();
}

