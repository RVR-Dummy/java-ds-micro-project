#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>

using namespace std;
void save_question();
void show_question();
void practise();
void test();

char guess; // It stores the value entered by user.
int total; // It contains the total score of entire quiz questions.
class Teacher;
void line()
{
cout<<"\nÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ"<<endl;
}

class Student
{
	public :
		 char question[50];
		 char answer_1[30];
		 char answer_2[30];
		 char answer_3[30];
		 char answer_4[30];
		 char correct_answer;
		 int question_score;

	public:


 void ask_question(char q[],char a1[],char a2[],char a3[],char a4[],char ca,int qs)
      {

	strcpy(question,q);
	strcpy(answer_1,a1);
	strcpy(answer_2,a2);
	strcpy(answer_3,a3);
	strcpy(answer_4,a4);
	correct_answer = ca;
	question_score = qs;
      }

     void get_answer()
     {


	cout<<question<<endl;
	cout<<"a.)"<<answer_1<<endl;
	cout<<"b.)"<<answer_2<<endl;
	cout<<"c.)"<<answer_3<<endl;
	cout<<"d.)"<<answer_4<<endl;
	cin>>guess;

	if(guess == correct_answer)
	{
	total += question_score;
	getch();
	}
	else
	{
	getch();
	}
     }
		void friend save_question();
		void friend test();
		void friend practise();


};


class Teacher : public Student
{
	public :    	char new_question[200];
			char op1[70],op2[70],op3[70],op4[70];
			char correct_answer;
	public:

		 void Add_question()
	  	  {
	  	 cin.sync(); 	
	     cout<<"\nEnter the question : ";
	     gets(new_question);
	     cout<<"\nEnter options :\n";
	     cout<<"Option 1.) ";
	     gets(op1);
	     cout<<"Option 2.) ";
	     gets(op2);
	     cout<<"Option 3.) ";
	     gets(op3);
	     cout<<"Option 4.) ";
	     gets(op4);
	     cout<<"\nEnter the correct answer (a/b/c/d) : ";
	     cin>>correct_answer;
	     cout<<"\nEnter the marks for these question : ";
	     cin>>question_score;

	  /*   ofstream f("D://Teachers Question.dat",ios :: out,ios :: binary);
	     f << new_question << "\n";
	     f << op1 << "\n";
	     f << op2 << "\n";
	     f << op3 << "\n";
	     f << op4 << "\n";
	     f << question_score << "\n";
	     f.close();
	   */  cout<<"\nQuestion saved successfully !"<<endl;

	}
	void show_question()
	{
	line();
	cout<<"\n\nEntered question : \n";
	cout<<"Q.) "<<new_question<<endl;
	cout<<"1.) "<<op1<<endl;
	cout<<"2.) "<<op2<<endl;
	cout<<"3.) "<<op3<<endl;
	cout<<"4.) "<<op4<<endl;
	cout<<"Correct Answer : "<<correct_answer<<endl;
	cout<<"Question Answer : "<<question_score<<endl;
	line();
	}

};

main()
{
		int choice,N,choice1;
		char choice2;
		

		cout<<"\tÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»\n";
		cout<<"\tº.W.E.L.C.O.M.E. .T.O. .Q.U.I.Z. .C.O.M.P.E.T.I.T.I.O.N.º\n";
		cout<<"\tÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼"<<endl;
		X:
		cout<<"\n";	
		line();
		
		cout<<"Enter the following options :"<<endl;
		cout<<"\n1.) Teacher Login"<<endl;
		cout<<"®®®®®®®®®®®®¯¯¯¯¯¯¯¯¯¯¯¯¯";
		cout<<"\n2.) Student Login"<<endl;
		cout<<"®®®®®®®®®®®®¯¯¯¯¯¯¯¯¯¯¯¯¯";
		cout<<"\n3.) Exit"<<endl;
		cout<<"®®®®®®®®®®®®¯¯¯¯¯¯¯¯¯¯¯¯¯"<<endl;
		cin>>choice;
		line();
	    switch(choice)
	    {

	      case 1:
	     system("CLS");	
		 line();	
	     cout<<"\nEnter the following : ";
		 cout<<"\n1.) To Add a New Question\n2.) To See Previous Question \n3.) Exit : ";
		 cin>>choice1;
		
		 if(choice1 == 1)
		 {

		 cout<<"\nHow many questions do you want to enter : ";
		 cin>>N;
		 
		 for(int i=1;i<=N;i++)
		  {
		 line();
			save_question();
		   //t1.show_question();

		  }
		 }
	
		 else if(choice1 == 2)
		 {
				show_question();
		  

		 }
		 else
		 {
		 }
		
	    goto X;
		 break;
	  case 2:
	  	system("CLS");
		line();
		cout<<"\nEnter your choice :";
		cout<<"\n1.) Practise Mode\n2.) Test Mode\n3.) Exit";
		cin>>choice1;
		
		if(choice1 == 1)
		{
		void practise();
		}
	    else if(choice1 == 2)
	    {
	    void test();
	    }
	    else
	    {
		getch();
	    }
	    break;
	  
	   case 3:
		      cout<<"Good Bye !";
		      line();
		      getch();
	      default :
		      getch();

	      }

		if(total >= 20)
		{
		cout<<"\nCongratulations, you passed !";
		cout<<"\n "<<" your total score is "<<total<<endl;

		}
		else
		{
			cout<<"\nOops you failed !"<<"\nYour total score is "<<total<<endl;
			cout<<"\nBetter luck next time"<<endl;
		}



		getch();


}

void save_question()
{
		   Teacher t1;	
           fstream f;
		   f.open("D://MyQuestion.dat",ios :: app | ios :: binary);
		   t1.Add_question();
		   f.write((char*)&t1,sizeof(t1));
		   f.close();
}

void show_question()
{
	
		   	
      	   fstream f1;
      	   f1.open("D://MyQuestion.dat",ios :: in | ios :: binary);
      	   if(f1)
      	   {
			
		  Teacher t1;	
		   while(f1.read((char*)&t1,sizeof(t1)));
		   t1.show_question();
		   f1.close();
		}
		else
		{
			cout<<"\nNo Questions addded before.";
		}
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

void test()
{
	Student s1;
		Student s2;
		Student s3;
		Student s4;
		Student s5;

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

		s1.get_answer();

		s2.get_answer();

		s3.get_answer();

		s4.get_answer();

		s5.get_answer();
}
