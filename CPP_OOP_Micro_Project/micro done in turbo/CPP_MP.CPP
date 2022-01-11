#include <iostream.h>
#include <fstream.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include "mp_fun.cpp"

#define P cout<<

void Total_Marks();

int N = 0;
int total = 0;
char guess = 0;

class Student
{
	protected :
		char question[100];
		char op1[90],op2[90],op3[90],op4[90];
		char correct_answer;
		int question_score;
		
	public:
		void ask_question(char q[],char a1[],char a2[],char a3[],char a4[],char ca,int qs);
		void get_answer();
		void practise();
		void test();
		void GK();
		void c_programing();
		void CPP_QUIZ();
};

class Teacher : public Student
{
	public:
		char question[100];
		char op1[90],op2[90],op3[90],op4[90];
		char correct_answer;
		int question_score;

		void Add_question();
		void save_question();		
		void show_file_practise_question();
		void show_question_for_student();
		void get_answer_for_student();
		void save_correct_answer(int y);
		void show_question();
		void show_all_question();
};

class Function : public Teacher
{
	public :
		void login();

};

void Function :: login()
{
	int choice,N,choice1,choice3;
	char choice2;

	X:

	cout<<"\n";

	Display_Menue();
	gotoxy(12, 16);

	cout<<"\n\n\t\tº\t\tEnter Choice : ";
	cin>>choice;
	_sound();
	system("CLS");
	//clrscr();

	switch(choice)
	{
		case 1:
			Display_Teacher_Menue();
			gotoxy(12, 16);

			cout<<"\n\n\t\tº\t\tEnter Choice : ";
			cin>>choice1;
			_sound();

			if(choice1 == 1)
			{
				Teacher b;
				int T;
				cout<<"\n\n\n\t\t  How may questions do you want to enter : ";
				cin>>T;
				_sound();

				for(int i=0;i<T;i++)
				{
					b.Add_question();
					b.save_question();
				}
			}
			else if(choice1 == 2)
			{
				system("CLS");
				//clrscr();
				Teacher a;
				a.show_all_question();
				getch();
				goto X;
			}
			else
			{
				cout<<"\nInvalid Choice."<<endl;
			}
			goto X;
			
		case 2:
			Display_Student_Menue();

			gotoxy(12, 16);

			cout<<"\n\n\t\tº\t\tEnter Choice : ";

			cin>>choice1;
			_sound();

			if(choice1 == 1)
			{
				system("CLS");
				Teacher b;

				b.show_file_practise_question();
				getch();
				goto X;
			}
			else if(choice1 == 2)
			{
				system("CLS");
				cout<<"\n1.) General Knowledge Quiz\n2.) C Programming Quiz\n3.) Sports Quiz\n4.) C++ Programming Quiz"<<endl;
				cin>>choice3;
				_sound();

				switch(choice3)
				{
					case 1:
						GK();
						Total_Marks();
						goto X;

					case 2: //break;
						goto X;
						
					case 3: //break;
						goto X;

					case 4:
						CPP_QUIZ();
						Total_Marks();
						goto X;

					default:
						cout<<"Invalid Choice.";
				}
			}

			else
			{
				goto X;
			}
			break;
	}
}

void Total_Marks()
{
	if(total < 25)
		cout<<"You Failed !\nYour Score is "<<total<<endl;
	else
		cout<<"\nCongrats !\nYou Passed with "<<total<<" marks"<<endl;
}

void practise()
{
	//Now,making of objects q1,q2,...,q25 of class Quiz.
	Student s1;
	Student s2;
	Student s3;
	Student s4;
	Student s5;
	Student s6;
	Student s7;
	Student s8;
	Student s9;
	Student s10;
	
	//Now,setting values in member function of class Quiz ask_question().
	s1.ask_question("1. Which command is used to print something on the screen in c++ ?",
	
	"cout",
	"cin",
	"prntf",
	"printf",
	'a',
	4);
	
	//®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®® ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
	s2.ask_question("2. Who developed c++ language ?",
	"Dennis ritchie",
	"Bjarne strostrup",
	"Steve jobs",
	"Bill gates",
	'b',
	4);
	
	
	//®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®® ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
	
	s3.ask_question("3. The < , > <= , >= , == comes in which operators ?",
	"Logical Operators",
	"Relational Operators",
	"Bitwise operator",
	"Unary Operator",
	'b',
	4);
	
	
	//®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®® ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
	
	s4.ask_question("4. Which command is written correctly ?",
	"cout <<",
	"cout >>",
	"cout("");",
	"cin <<",
	'a',
	4);
	
	
	//®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®® ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
	
	s5.ask_question("5. Which of the following category is followed by c++ language ?",
	"High - level programming language",
	"low - level programming language",
	"Operating system",
	"Compiler",
	'a',
	4);
	
	
	//®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®® ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯

	s6.ask_question("6. What is called <iostream.h> ?",
	"Pre - Processor directive",
	"Header file",
	"File",
	"Record",
	'b',
	4);
	
	
	//®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®® ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
	
	s7.ask_question("7. Which of the following terminates statement ?",
	";",
	".",
	",",
	"*",
	'a',
	4);
	

	//®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®® ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
	
	s8.ask_question("8. When arguments are passed to a constructor, then what is it called ?",
	"Default Constructor",
	"Value taken constructor",
	"Parameterized Constructor",
	"Reference Constructor",
	'c',
	4);
	
	
	//®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®® ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
	
	s9.ask_question("9. Which statement is used in C++ to read a value ?",
	"cout",
	"cin",
	"printf",
	"scanf",
	'b',
	4);
	
	
	//®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®® ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
	
	s10.ask_question("10. Which is the correct syntax for if statement ?",
	"if(condition)",
	"if{condition}",
	"if[condition]",
	"if<contion>",
	'a',
	4);
	
	
	//Now,calling member function of class Quiz to dispay question and check correct answer.
	
	s1.get_answer();
	
	s2.get_answer();
	
	s3.get_answer();
	
	s4.get_answer();

	s5.get_answer();
	
	s6.get_answer();
	
	s7.get_answer();
	
	s8.get_answer();
	
	s9.get_answer();
	
	s10.get_answer();
	
}

void Student :: CPP_QUIZ()
{
	Student s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
	
	s1.ask_question("1. Which command is used to print something on the screen in c++ ?",

	"cout",
	"cin",
	"prntf",
	"printf",
	'a',
	4);
	s1.get_answer();
	
	//®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®® ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
	
	s2.ask_question("2. Who developed c++ language ?",
	"Dennis ritchie",
	"Bjarne strostrup",
	"Steve jobs",
	"Bill gates",
	'b',
	4);
	s2.get_answer();
	
	//®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®® ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
	
	s3.ask_question("3. The < , > <= , >= , == comes in which operators ?",
	"Logical Operators",
	"Relational Operators",
	"Bitwise operator",
	"Unary Operator",
	'b',
	4);
	s3.get_answer();
	
	//®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®® ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
	
	s4.ask_question("4. Which command is written correctly ?",
	"cout <<",
	"cout >>",
	"cout("");",
	"cin <<",
	'a',
	4);
	s4.get_answer();
	
	//®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®® ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
	
	s5.ask_question("5. Which of the following category is followed by c++ language ?",
	"High - level programming language",
	"low - level programming language",
	"Operating system",
	"Compiler",
	'a',
	4);
	s5.get_answer();
	
	s6.ask_question("6. What is called <iostream.h> ?",
	"Pre - Processor directive",
	"Header file",
	"File",
	"Record",
	'b',
	4);
	s6.get_answer();
	
	//®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®® ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
	
	s7.ask_question("7. Which of the following terminates statement ?",
	";",
	".",
	",",
	"*",
	'a',
	4);
	s7.get_answer();
	
	//®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®® ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
	
	s8.ask_question("8. When arguments are passed to a constructor, then what is it called ?",
	"Default Constructor",
	"Value taken constructor",
	"Parameterized Constructor",
	"Reference Constructor",
	'c',
	4);
	s8.get_answer();
	
	//®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®® ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
	
	s9.ask_question("9. Which statement is used in C++ to read a value ?",
	"cout",
	"cin",
	"printf",
	"scanf",
	'b',
	4);
	s9.get_answer();
	
	//®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®® ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
	
	s10.ask_question("10. Which is the correct syntax for if statement ?",
	"if(condition)",
	"if{condition}",
	"if[condition]",
	"if<contion>",
	'a',
	4);
	s10.get_answer();
	
}

void Student :: GK()
{
	Student q1,q2,q3,q4,q5,q6,q7,q8,q9,q10;
	q1.ask_question("Where is the National Institute of Virology situated ?",
	"Pune",
	"Kolkata",
	"Madras",
	"Delhi",
	'a',
	2);
	
	q1.get_answer();
	// -------------------------------------------------------------------------------------------------------------
	
	q2.ask_question("The longest dam of India is the ....",
	"Nangal Dam",
	"Bhakra Dam",
	"Maithon Dam",
	"Hirakud Dam",
	'd',
	2);
	
	q2.get_answer();
	//---------------------------------------------------------------------------------------------------------------
	q3.ask_question("Smallest country in the world is....",
	"Vatican City",
	"Tonga",
	"Naura",
	"Monaco",
	'a',
	2);
	
	q3.get_answer();
	// ---------------------------------------------------------------------------------------------------------------
	
	q4.ask_question("Which of the following cities is known as Electronic City of India ?",
	"Mumbai",
	"Gurgaon",
	"Bangalore",
	"Hyderabad",
	'c',
	2);
	
	q4.get_answer();
	// ------------------------------------------------------------------------------------------------------------------
	
	q5.ask_question("The largest Indian State by area is ....",
	"Maharashtra",
	"Rajasthan",
	"Andhra Pradesh",
	"Madhya Pradesh",
	'b',
	2);
	
	q5.get_answer();
	// ---------------------------------------------------------------------------------------------------------------------
	
	q6.ask_question("The world famous Ajanta caves are situated in the state of ....",
	"Orissa",
	"Karnataka",
	"Maharashtra",
	"Madhya Pradesh",
	'c',
	2);
	
	q6.get_answer();
	//------------------------------------------------------------------------------------------------------------------------------
	
	q7.ask_question("Vikram Sarabhai Space Research Centre is located at ...",
	"Pune",
	"Ahmedabad",
	"Sriharikota",
	"Tiruvananthapuram",
	'd',
	2);
	
	q7.get_answer();
	//-------------------------------------------------------------------------------------------------------------------
	
	q8.ask_question("Which telecommunication company has partnered with Google for expanding its WiFi footprint ?",
	"Reliance Jio",
	"Vodafone Group Plc",
	"BSNL",
	"Bharti Airtel",
	'c',
	2);
	
	q8.get_answer();
	//---------------------------------------------------------------------------------------------------------------------------------------------------------------

	q9.ask_question("Which state's 26 reservoirs have hit 'zero water' storage level ?",
	"Karnataka",
	"Maharashtra",
	"West Bengal",
	"Telangana",
	'b',
	2);
	
	q9.get_answer();
	// ---------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	q10.ask_question("Which two companies are in advanced stages of testing Voice over WiFi (VoWiFi) services ?",
	"BSNL and Vodafone",
	"BSNL and Reliance Jio",
	"Airtel and Reliance Jio",
	"Airtel and BSNL",
	'c',
	2);
	
	q10.get_answer();
	/*	cout<<"NAME     :"<<n<<endl;
	cout<<"CLASS    :"<<c<<endl;
	cout<<"ADDRESS  :"<<add<<endl;
	cout<<"MARKS    :"<<total<<"/10"<<endl;
	*/
}

void Student ::  c_programing()
{
	Student q1,q2,q3,q4,q5,q6,q7,q8,q9,q10;
	q1.ask_question("Who is father of c language?",
	"Bajarne stroustrup",
	"James A Gosling",
	"Dennis Ritche",
	"Dr. E.F codd",
	'c',
	2);
	
	q1.get_answer();
	//______________________________________________________________________________________________________________________________________
	
	q2.ask_question("standard ANSI c recognize __ number of keywords?",
	"30",
	"32",
	"24",
	"36",
	'b',
	2);
	
	q2.get_answer();
	//__________________________________________________________________________________________________________________________________
	
	q3.ask_question("Which is the only function all c programs must contain?",
	"start()",
	"system()",
	"main()",
	"printf()",
	'c',
	2);
	
	
	q3.get_answer();
	
		       q4.ask_question("A c variable cannot start with..........",
		       "A number",
		       "A special symbol other than underscore",
		       "Both of the above",
		       "An alphabet",
		       'c',
		       2);

		       q4.get_answer();
//___________________________________________________________________________________________________________________________________

		       q5.ask_question("The default parameter passing mechanism is",
		       "call by value",
		       "call by reference",
		       "call by value result",
		       "None of these",
		       'a',
		       2);

		       q5.get_answer();
//__________________________________________________________________________________________________________________________________

		       q6.ask_question("Which of the following function calculates the square of 'x' in c?",
		       "sqr(x)",
		       "pow(2,x)",
		       "pow(x,2)",
		       "power(2,x)",
		       'c',
		       2);

		       q6.get_answer();
//________________________________________________________________________________________________________________________________________

		       q7.ask_question("Which of the following function is more appropriate for reading in a multi-word string",
		       "scanf()",
		       "gets()",
		       "printf()",
		       "puts",
		       'b',
		       2);

		       q7.get_answer();
//__________________________________________________________________________________________________________________________________________________

		       q8.ask_question("The const feature can be applied to......",
		       "an identifier",
		       "an array",
		       "an array argument",
		       "All of these",
		       'd',
		       2);

		       q8.get_answer();
//___________________________________________________________________________________________________________________________________
		       q9.ask_question("The maximum number of dimension an array can have in c is...",
		       "3",
		       "4",
		       "5",
		       "compiler dependent",
		       'd',
		       2);

		       q9.get_answer();
//___________________________________________________________________________________________________________________________

		       q10.ask_question("In c programing language, which of the following type of operators have the highest precedence",
		       "Relational operators",
		       "Equality operators",
		       "Logical operators",
		       "Arithmetic operators",
		       'd',
		       2);

		       q10.get_answer();
//_________________________________________________________________________________________________________________________________________________

}


void Student :: ask_question(char q[],char a1[],char a2[],char a3[],char a4[],char ca,int qs)
{

	strcpy(question,q);
	strcpy(op1,a1);
	strcpy(op2,a2);
	strcpy(op3,a3);
	strcpy(op4,a4);
	correct_answer = ca;
	question_score = qs;
}


void Student :: get_answer()
{
	cout<<question<<endl;
	cout<<"a.)"<<op1<<endl;
	cout<<"b.)"<<op2<<endl;
	cout<<"c.)"<<op3<<endl;
	cout<<"d.)"<<op4<<endl;
	cin>>guess;
	_sound();

	if(guess == correct_answer)
	{
		total += question_score;

	}
}

void Teacher :: Add_question()
{
	system("CLS");
	cin.sync();
	cout<<"\nEnter the question : ";
	gets(question);
	_sound();
	cout<<"\nEnter options :\n";
	cout<<"Option 1.) ";
	gets(op1);
	_sound();
	cout<<"Option 2.) ";
	gets(op2);
	_sound();
	cout<<"Option 3.) ";
	gets(op3);
	_sound();
	cout<<"Option 4.) ";
	gets(op4);
	_sound();
	cout<<"\nEnter the marks for these question : ";
	cin>>question_score;
	_sound();
	cout<<"\nEnter the correct answer (a/b/c/d) : ";
	cin>>correct_answer;
	save_correct_answer(correct_answer);
	_sound();
	cout<<"\nQuestion saved successfully !"<<endl;
	_sound();
}

void Teacher :: save_question()
{
	ofstream f;
	f.open("QUESTION.dat",ios :: app | ios :: binary);
	f.write((char*)this,sizeof(*this));
	f.close();
}

void Teacher :: show_file_practise_question()
{
	ifstream f;
	f.open("QUESTION.dat",ios::in | ios :: binary);

	if(f)
	{
		f.read((char*)this,sizeof(*this));

		while(!f.eof())
		{

			show_question_for_student();
			f.read((char*)this,sizeof(*this));
		}
	}
	else
	{
		cout<<"\nFile does not exist...";
	}
}

void Teacher :: show_question_for_student()
{
	cout<<question<<endl;
	cout<<"1.) "<<op1<<endl;
	cout<<"2.) "<<op2<<endl;
	cout<<"3.) "<<op3<<endl;
	cout<<"4.) "<<op4<<endl;

	get_answer_for_student();
}

void Teacher :: get_answer_for_student()
{
	cout<<"Enter the correct answer (a/b/c/d) : ";
	cin>>guess;
	_sound();
	fstream f;
	f.open("Answers.dat",ios :: app | ios::binary);

	if(f)
	{
		while(!f.eof())
		{
			char c;
//				c = f.get();

			if(guess == correct_answer)
			{
				cout<<"\nCorrect answer..."<<endl<<endl;
			}
			else
			{
				cout<<"\nIncorrect Answer..."<<endl;
			}
		}
	}
}

void Teacher :: save_correct_answer(int y)
{
	fstream f;
	f.open("Answers.dat",ios :: app | ios::binary);
	f<<y<<' ';
	f.close();
}
	
void Teacher ::show_question()
{
	cout<<"\n\nEntered question : \n";
	cout<<"Q.) "<<question<<endl;
	cout<<"1.) "<<op1<<endl;
	cout<<"2.) "<<op2<<endl;
	cout<<"3.) "<<op3<<endl;
	cout<<"4.) "<<op4<<endl;
	cout<<"Correct Answer : "<<correct_answer<<endl;
	cout<<"Question Answer : "<<question_score<<endl;
}

void Teacher ::show_all_question()
{
	ifstream f;
	f.open("QUESTION.dat",ios::in | ios :: binary);
	if(f)
	{
		f.read((char*)this, sizeof(*this));
		while(!f.eof())
		{
			//	f.read((char*)this,sizeof(*this));
			show_question();
			f.read((char*)this,sizeof(*this));
			getch();
			_sound();
		}
	}
	else
	{
		cout<<"\nFile does not exist...";
	}
}

//////////////////////////////////////////////////////////////////////////////
void main()
{
	clrscr();
	gotoxy(1, 13);
//	Wel_Come();
//	delay(2000);

	Function f;
	f.login();
	Thank_You();
	_sound();
}

