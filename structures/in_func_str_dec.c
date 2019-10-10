/* Program to use print the define function to the elements of declared function inside the main*/

#include<stdio.h>

int foo()
{
  static int a;
  return ++a;
}


int main()
{
  
  struct { int x, y; } s = { foo(), foo() }; //New method to define function and declare the struct inside the main

  /* Can be `{ 1, 2 }` or `{ 2, 1 }`... */
  
  printf("The values of x and y are respectievely: %d %d",s.x,s.y);
}

