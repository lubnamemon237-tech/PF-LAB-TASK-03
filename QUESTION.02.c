#include <stdio.h>

int main()
{
	char name[50],department[50],student_id[50],uni_name[50];
	int age;

	printf("Enter Name: ");
	scanf("%s",name);
	
	printf("Enter Department: ");
	scanf("%s",department);
	
	printf("Enter Student Id: ");
	scanf("%s",student_id);
	
	printf("Enter Uni name: ");
	scanf("%s",uni_name);
	
	printf("Enter age: ");
	scanf("%d",&age);
	printf("Name:%s \n",name);
	printf("Department:%s \n",department);
	printf("Student Id:%s \n",student_id);
	printf("Uni Name:%s \n",uni_name);
	printf("Age:%d \n",age);
	
	return 0;
}
