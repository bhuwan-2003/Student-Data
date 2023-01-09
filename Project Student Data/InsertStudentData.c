#include<stdio.h>
typedef struct Student_data
{
	char Student_Name[40];
	int Student_RollNumber;
	int Student_PhysicsMarks;
	int Student_ChemisteryMarks;
	int Student_MathsMarks;	
}STD;
void main()
{
	FILE *p;
	STD S;
	char ch;
	p=fopen("Student.data","r");
	if(p==NULL)
	{
	   p=fopen("Student.data","w");
	}
	else
	{
	   p=fopen("Student.data","a");
	}
	do
	{
		printf("Enter the Student Name : ");
		fflush(stdin);
		gets(S.Student_Name);
		
		printf("Enter the Student Roll Number : ");
		fflush(stdin);
		scanf("%d",&S.Student_RollNumber);
		
		printf("Enter the Student Physics Marks : ");
		fflush(stdin);
		scanf("%d",&S.Student_PhysicsMarks);
		
		printf("Enter the Student Chemistry Marks : ");
		fflush(stdin);
		scanf("%d",&S.Student_ChemisteryMarks);
		
		printf("Enter the Student Maths : ");
		fflush(stdin);
		scanf("%d",&S.Student_MathsMarks);
		
		fwrite(&S,sizeof(S),1,p);
		printf("Add More Student Data : ");
		fflush(stdin);
		scanf("%c",&ch);
		
	}while(ch=='Y'||ch=='y');
	fclose(p);
}
