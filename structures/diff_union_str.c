/* THe following program is used to differenciate between union and structure based upon the size parameter
 Author : Puneet Bawa */

#include<stdio.h>

union uniJob{ 
   char uname[32];
   float usal;
   int uno;
} uJob;  

struct structJob
{
   char sname[32];
   float ssal;
   int sno;
} sJob; 

int main()
{
   printf("size of union = %ld bytes", sizeof(uJob));
   printf("\nsize of structure = %ld bytes", sizeof(sJob));
   return 0;
}
