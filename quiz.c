#include<stdio.h>

void quiz()
{
	int option=4;
	int choise=0;
	int icnt=0;
	int no=0;
	int total=10;
	printf("total quesion is 10\n");
//	printf("please Enter how many quesion we can solve\n");
	printf("please press 1 and Enter key to start quiz");
	scanf("%d",&no);
	
//	if(total>=no)
	if(no==1)
	{

		for(icnt=1;no>=icnt;icnt++)

		if(total>icnt)
		{
			printf("########################### START QUIZ ############################\n");
			printf("--------------------------------------------------------------------------------\n");
			printf("Q1: how many memory allocate in int data type\n");
			printf("1:- 4byte , 2:- 1byte 3:- 2byte , 4:- 8byte\n");
			printf("Enter your choise");
			scanf("%d",&choise);
		
			if(choise==1)
			{
				printf("this is true answer\n");
			}
			else if(option<choise)
			{
				printf("it is not valid choise\n");
			}
			
			else
			{
				printf("wronge answer\n");
			}
			printf("--------------------------------------------------------------------------------\n");
		printf("Q2: how many memory allocate in float data type\n");
		printf("1:- 4byte , 2:- 1byte 3:- 2byte , 4:- 8byte\n");
		printf("Enter your choise");
		scanf("%d",&choise);
		
			if(choise==1)
			{
				printf("this is true answer\n");
			}
			else if(option<choise)
			{
				printf("it is not valid choise\n");
			}
			
			else
			{
				printf("wronge answer\n");
			}
			printf("--------------------------------------------------------------------------------\n");
		printf("Q3: how many memory allocate in char data type\n");
		printf("1:- 4byte , 2:- 1byte 3:- 2byte , 4:- 8byte\n");
		printf("Enter your choise");
		scanf("%d",&choise);
		
			if(choise==2)
			{
				printf("this is true answer\n");
			}
			else if(option<choise)
			{
				printf("it is not valid choise\n");
			}
			
			else
			{
				printf("wronge answer\n");
			}
			printf("--------------------------------------------------------------------------------\n");
		printf("Q4: how many memory allocate in double data type\n");
		printf("1:- 4byte , 2:- 1byte 3:- 2byte , 4:- 8byte\n");
		printf("Enter your choise\n");
		scanf("%d",&choise);
		
			if(choise==4)
			{
				printf("this is true answer\n");
			}
			else if(option<choise)
			{
				printf("it is not valid choise\n");
			}
			
			else
			{
				printf("wronge answer\n");
			}
			printf("--------------------------------------------------------------------------------\n");
		printf("Q5: how many memory allocate in array\n");
		printf("1:- 4byte , 2:- 8byte 3:- 2byte , 4:- depends on data type\n");
		printf("Enter your choise\n");
		scanf("%d",&choise);
		
			if(choise==4)
			{
				printf("this is true answer\n");
			}
			else if(option<choise)
			{
				printf("it is not valid choise\n");
			}
			
			else
			{
				printf("wronge answer\n");
			}
			printf("--------------------------------------------------------------------------------\n");
		printf("Q6: how to use printf in c programming\n");
		printf("1:- it is use to display statement on console\n , 2:- its use to accept input\n 3:- its use to paint data on screen\n , 4:- its use to print data in network\n");
		printf("Enter your choise\n");
		scanf("%d",&choise);
		
			if(choise==1)
			{
				printf("this is true answer\n");
			}
			else if(option<choise)
			{
				printf("it is not valid choise\n");
			}
			
			else
			{
				printf("wronge answer\n");
			}
			printf("--------------------------------------------------------------------------------\n");
		printf("Q7: how to use scanf\n");
		printf("1:- it is use to display statement on console\n , 2:- its use to accept input\n 3:- its use to paint data on screen\n , 4:- its use to print data in network\n");
		printf("Enter your choise");
		scanf("%d",&choise);
		
			if(choise==2)
			{
				printf("this is true answer\n");
			}
			else if(option<choise)
			{
				printf("it is not valid choise\n");
			}
			
			else
			{
				printf("wronge answer\n");
			}
			printf("--------------------------------------------------------------------------------\n");
		printf("Q8: how many memory allocate in pointer\n");
		printf("1:- 4byte , 2:- 8byte 3:- 2byte , 4:- depends on compiler\n");
		printf("Enter your choise");
		scanf("%d",&choise);
		
			if(choise==4)
			{
				printf("this is true answer\n");
			}
			else if(option<choise)
			{
				printf("it is not valid choise\n");
			}
			
			else
			{
				printf("wronge answer\n");
			}
			printf("--------------------------------------------------------------------------------\n");
		printf("Q9: which function are use to print statement on console in c programming\n");
		printf("1:- print , 2:- scanf 3:- printff , 4:- printf\n");
		printf("Enter your choise");
		scanf("%d",&choise);
		
			if(choise==4)
			{
				printf("this is true answer\n");
			}
			else if(option<choise)
			{
				printf("it is not valid choise\n");
			}
			
			else
			{
				printf("wronge answer\n");
			}
			printf("--------------------------------------------------------------------------------\n");
		printf("Q10: which function are use to accept data in c programming\n");
		printf("1:- print , 2:- scanf 3:- cin , 4:- printf\n");
		printf("Enter your choise");
		scanf("%d",&choise);
		
			if(choise==2)
			{
				printf("this is true answer\n");
			}
			else if(option<choise)
			{
				printf("it is not valid choise\n");
			}
			
			else
			{
				printf("wronge answer\n");
			}
			printf("--------------------------------------------------------------------------------\n");
			printf("###################### END OF THE QUIZ #########################\n");
		}
	
	}
	else
	{
		printf("not valid input\nS");
	}
			
	//return 0;
	
}

 int main()
{
	char ch='R';
	char p='\0';
	printf("Enter password\n");
	scanf("%c",&p);

	if(ch==p)
	{
		//printf("password is correct\n");
	quiz();
	}
	else
	{
		printf("password is incorect: please type correct password\n");
		main();
	}
	return 0;
}
