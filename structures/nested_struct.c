/* The following program is based upon the nested structure*/

#include <stdio.h>

struct Employee
{
   char ename[20];
   int ssn;
   float salary;
   struct date{
	int date;
	int month;
	int year; 
   }doj;
}emp = {"puneet",1320,114120.50,{20,9,2014}};

int main(int argc, char *argv[])
{
	printf("\nEmployee Name   : %s",emp.ename);  
	printf("\nEmployee SSN    : %d",emp.ssn);  
	printf("\nEmployee Salary : %f",emp.salary);  
	printf("\nEmployee DOJ    : %d/%d/%d", \
        emp.doj.date,emp.doj.month,emp.doj.year);  
	return 0;
}
