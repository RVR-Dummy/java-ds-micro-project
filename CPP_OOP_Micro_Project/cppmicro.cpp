#include<iostream>
#include<string.h>
char guess;
int total=0;

using namespace std;

class Quiz
{
	protected : 
				char que[60];
				char opt1[40];
				char opt2[40];
				char opt3[40];
				char opt4[40];
				char correct_answer;
				int question_score;
	
	public : 
				Quiz(char q[],char o1[],char o2[],char o3[],char o4[],char ca,int qs)
				{
					strcpy(que,q);
					strcpy(opt1,o1);
					strcpy(opt2,o2);
					strcpy(opt3,o3);
					strcpy(opt4,o4);
					correct_answer = ca;
					question_score = qs;
				}		
void get_answer();	
				
				
};

void Quiz :: get_answer()
{
	cout<<"\n1.) "<<que<<endl;
	cout<<"a.) "<<opt1<<endl;
	cout<<"b.) "<<opt2<<endl;
	cout<<"c.) "<<opt3<<endl;
	cout<<"d.) "<<opt4<<endl;
	cout<<"Enter the correct answer : ";
	cin>>guess;
	
	if(guess == correct_answer)
	{
		total += question_score;
	}
	void get_answer();
				
}

class Teacher : public Quiz
{
	public : 
			char c_ans;
			void set_question()
			{
				cout<<"\nEnter the Question: "<<endl;
				cin>>que;
				cout<<"\nEnter the options: "<<endl<<"1. ";
				cin>>opt1;
				cout<<"\n2. ";
				cin>>opt2;
				cout<<"\n3. ";
				cin>>opt3;
				cout<<"\n4. ";
				cin>>opt4; 
				cout<<"\n";
				cout<<"\nEnter correct answer for the question : ";
				cin>>c_ans;
				 
			}		

};

main()
{
	Quiz q1("Who is the first prime minister of India ?",
	"Rajendra prasad",
	"Jawaharlal Nehru",
	"Sardar Patel",
	"Manmoham Singh",
	'b',
	4);
	
	Quiz q2("What is cpp language ?",
	"Object Oriented Programming",
	"procedure Oriented Programming",
	"all",
	"none",
	'c',
	4);
	
	q1.get_answer();
	q2.get_answer();

	Teacher t;
	
	t.set_question();	

}
