#include<stdio.h>
void main()
{
	int ch;
	char constant;
	system("cls");
	do
	{
		
		printf("Main Menu For the Student Data :-\n1]Insert Record\n2]Dispay all records\n3]Search Record by roll number\n4]Exit\n");
		printf("Enter your choise : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				system("InsertStudentData.exe");
				break;
			case 2: 
			    system("DisplayAllStudentData.exe");
			    break;
			case 3: 
			    system("SearchByIDStudentData.exe");
			    break;
			case 4: 
			    printf("Good Bye");
			    break;
		
		default:
			printf("Wrong Option!!");
		}
		printf("\nPress the Enter key to continue...\n");
		fflush(stdin);
		scanf("%c",&constant);
	}while(ch!=4);
	
}
