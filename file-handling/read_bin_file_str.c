/*FOR BASIC UNDERSTANDING OF THE STRUCTURE PLEASE REFER TO ./structures/ DIRECTORY
 * This program writes to binary file 
 * Author : Puneet Bawa*/

#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
   int n1, n2, n3;
};

int main()
{
   int n;
   struct threeNum num;
   FILE *fptr;
   if ((fptr = fopen("program.bin","rb")) == NULL){
       printf("Error! opening file");
       exit(1);
   }
   for(n = 1; n < 5; ++n)
   {
      fread(&num, sizeof(struct threeNum), 1, fptr); 
      printf("n1: %d\tn2: %d\tn3: %d", num.n1, num.n2, num.n3);
   }
   fclose(fptr); 
  
   return 0;
}
