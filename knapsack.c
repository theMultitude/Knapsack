#include <stdio.h>
#include <stdlib.h>

int main()
{
  //from the command line get the file to load
  char *tempFile = "./data/small1.txt"; //TODO load from param
  printf("Theesa file called %s\n", tempFile);

  //load the file
  // FILE *fp;
  // fp = fopen(tempFile, r);
  //
  // fclose(fp);
  int num;
  FILE *fptr;

  if ((fptr = fopen(tempFile, "r")) == NULL) {
    printf("Uh oh, error opening file.");

      exit(1);
  }

  fscan(fptr, %d, &num)

  printf("Value of n=%d", num);
  fclose(fptr);

  //set the knapsack size to the number in second parameter
  int tempSize = 100; //TODO load from param

  //start with the most valuable items and fill from there

  //start with the lightest items and fill from there

  //find a cost/value ratio and fill from highest values first

  //brute force

  return 0;
}
