/*The program is based upon the feet to inch conversion for the following outputs
 Also the program uses struct type function inorder to perform the required addition operation*/

#include <stdio.h>

struct dist
{
  int feet;
  int inch;
};

struct dist add(struct dist a, struct dist b)
{
  struct dist d;
  d.feet = a.feet+b.feet;
  if(a.inch+b.inch >= 12)
  {
    d.feet = d.feet+((a.inch+b.inch)/12);
    d.inch = (a.inch+b.inch)-(((a.inch+b.inch)/12)*12);
  }
  else
  {
    d.inch = a.inch+b.inch;
  }
  return d;
}

int main()
{
  
  struct dist d1 = {12,2};
  struct dist d2 = {14,11};

  struct dist d = add(d1,d2);

  printf("%d feet and %d inch\n",d.feet,d.inch);

  return 0;
}
