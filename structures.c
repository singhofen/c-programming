/*Structures (also called structs) are a way to group several related variables into one place. 
Each variable in the structure is known as a member of the structure.
Unlike an array, a structure can contain many different data types (int, float, char, etc.).
specifications: get the student roll number,name and marks as input and display the grade of student according to the marks*/

#include<stdio.h>
struct student
{
int rollno;
char name[50];
float marks;
};
struct student s[3];
void main()
{
for(int i=0;i<3;i++){
printf("\nenter the student roll number:");
scanf("%d",&s[i].rollno);
printf("enter the student name:");
scanf("%s",s[i].name);
printf("enter the student marks (out of 100):");
scanf("%f",&s[i].marks);

if(s[i].marks>90){
 
printf("\ngrade of student %s is S",s[i].name);
    
}
else if(s[i].marks>80&&s[i].marks<=90)
{
printf("\ngrade of student %s is A",s[i].name);
}
else if(s[i].marks>60&&s[i].marks<=80)
{

printf("\ngrade of student %s is B",s[i].name);
    
}
else if(s[i].marks>40&&s[i].marks<=60)
{
printf("\ngrade of student %s is C",s[i].name);
    
}

else if(s[i].marks<=40)
{
printf("\ngrade of student %s is F",s[i].name);
    
}
}
}
