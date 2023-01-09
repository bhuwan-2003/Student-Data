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
	float total,avg,percentage;
	int id,found=0;
	p=fopen("Student.data","r");
	//printf("Display All Records on Student Data : \n");
	if(p==NULL)
	{
		printf("File Not found/Please add some data");
	}
	else
	{  printf("Enter Roll Number you want to search : ");
	   scanf("%d",&id);
	  while(!feof(p))
	  {
	  	 fread(&S,sizeof(S),1,p);
	  	 if(feof(p))
		{
	  	    break;	
		}
	    if(S.Student_RollNumber==id)
	    {
		 total=S.Student_PhysicsMarks+S.Student_ChemisteryMarks+S.Student_MathsMarks;
		 percentage=total/300*100;
	  	 printf("\n%s\t%d\t%d\t%d\t%d\t%.0f\t%.2f",S.Student_Name,S.Student_RollNumber,S.Student_PhysicsMarks,S.Student_ChemisteryMarks,S.Student_PhysicsMarks,total,percentage);
	     if(percentage>=80 && percentage<=100)
		 {
		 	printf("\tA");
		 }
		 else if(percentage>=60 && percentage<=79)
		 {
		 	 printf("\tB");
		 }
		else if(percentage>=40 && percentage<=59)
		 {
		 	 printf("\tC");
		 }
		 else
		 {
		 	 printf("\tD");
		 }
		 found=1;
		 break;
	   }
	  }
	  if(found==0)
	  {
	  	 printf("Record not found %d");
	  }
	}
   fclose(p);
}
