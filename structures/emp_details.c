/* This program explains the basic usage for the syntax of the structure 
 * The details entered here are the basic program run for getting and printing the employee detail in the company using structure
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Employee{
	int eno;
	char ename[20];
	float esal;
};

int main(){
	
	struct Employee e1;  //Declaring the structure
	int i;

	printf("Enter the employee unique identification number\n");
	scanf("%d",&e1.eno);
	printf("Enter the employee name\n");
	scanf("%s",&e1.ename);
	printf("Enter the salary of an employee\n");
	scanf("%f",&e1.esal);

	printf("Employee Id: %d\n Employee Name: %s\n Employee Salary: %f\n",e1.eno,e1.ename,e1.esal);

	return 0;
}
