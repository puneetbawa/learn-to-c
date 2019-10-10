/* The program to showcase the difference while using struct and typedef
 */

#include<stdio.h>

typedef struct Employee{
	int eno;
	char ename[20];
	float esal;
}e;

struct Student{
	int sno;
	char sname[20];
	float smarks;
}s;

int main(){
	
	/* The way by which we could use typedef*/
	e e1;
	e1.eno=10;
	e1.ename="puneet";
	e1.esal=235.4;
	printf("%d %s %f", e1.eno, e1.ename, e1.esal);
	
	/* The difference between typedef and struct
	
	   s s1; //will error out
	   s1.sno=181928;
	*/

	//how to use struct is shown in previous example. refer emp_details.c 


        return 0;	
}
