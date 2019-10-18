/* The basic of this program deals with finding the length of the contenets within the file
The program makes the use of inbuilt function fseek having three seek values - SEEK_CUR, SEEK_END, SEEK_SET
Also teh function incoporates the use of rewind() function

Author: Puneet Bawa*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int age;
	char *name;
	name = (char *) malloc(1000*sizeof(name));
	FILE *fp;
	fp = fopen("program.txt","r"); //open the file in writable mode
	fseek(fp,0,SEEK_END); //seek the file till the end 
	
	printf("The total no of characters in file is %ld", ftell(fp)); //ftell function is uses to depict the length for the contents of the file 
	
	//using rewind function in order to move file pointer position to the beginning of the file
	
	rewind(fp);
	printf("The total no of characters in file is %ld", ftell(fp));
   	fscanf (fp, "%s", name);
   	fclose (fp);
   	printf ("Name: %s \n",name);
   	return 0;
}
