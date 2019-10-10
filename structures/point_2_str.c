/* the following program depicts the behaviour of pointer to structure in C programming */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
	    char name[50];
	    int age;
	    int rollno;
};

int main(){

	struct student *ptr;
	ptr = (struct student*)malloc(sizeof(struct student));
	
	//check memory availability
	if( ptr == NULL){
		printf("Unable to allocate memory!!!\n");
		exit(0);
	}
	
	//reading values of the structure
	printf("Enter student details...\n");
	printf("Name? ");
	scanf("%[^\n]", ptr->name); //reads string with spaces
	printf("Age? ");
	scanf("%d", &ptr->age);
	printf("Roll number? ");
	scanf("%d", &ptr->rollno);

	//printing the details
	printf("\nEntered details are...\n");
	printf("Name: %s\n", ptr->name);
	printf("Age: %d\n", ptr->age);
	printf("Roll number: %d\n", ptr->rollno);

	//freeing dynamically allocated memory
	free(ptr);


	return 0;
}

