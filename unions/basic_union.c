/*You can access all members of a structure at once as sufficient memory is allocated for all members. However, it's not the case in unions. You can only access a single member of a union at one time.*/

#include<stdio.h>
union Job{
	float usal;
	int workno;
} j;

int main(){
	j.usal = 12.3;
	j.workno = 100; //updates only last rest points to zero or NULL or garbage

	printf("Salary = %f\n", j.usal);
	printf("Workers = %d\n", j.workno);
	return 0;
}
