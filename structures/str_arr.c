#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student {
  char id[15];
  char firstname[64];
  char lastname[64];
  float points;
};

int main(void) {
  
  struct student std[3];
  int i;
  for (i = 0; i < 3; i++) {
    printf("Enter detail of student #%d\n", (i + 1));
    printf("Enter ID: ");
    scanf("%s", &std[i].id);
    printf("Enter first name: ");
    scanf("%s", &std[i].firstname);
    printf("Enter last name: ");
    scanf("%s", &std[i].lastname);
    printf("Enter Points: ");
    scanf("%f", &std[i].points);
  }
  for (i = 0; i < 3; i++) {
	  printf("\nDetail of student #%d\n", (i + 1));
	  printf("ID: %s\n", std[i].id);
	  printf("First Name: %s\n", std[i].firstname);
	  printf("Last Name: %s\n", std[i].lastname);
	  printf("Points: %f\n", std[i].points);
  }
  return 0;

}
