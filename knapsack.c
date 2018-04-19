#include <stdio.h>
#include <stdlib.h>

int main()
{

  int weight[10] = {0}; //TODO: Use malloc there
  int value[10] = {0};

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
    printf("Uh oh, error opening file.\n");

      exit(1);
  }
  int count = 0;
  int index = -1;

  while(fscanf(fptr, %d, &num) != 1)
  {
    printf("Value of n=%d\n", num);

    switch (counter % 3)
    {
      case 0:
        index++;
        break;
      case 1:
        weight[index] = num;
        break;
      case 2:
      value[index] = num;
        break;
    }

    counter++;
  }
  for (int i = 0; i < 10; i++)
  {
    printf("%d\n", weight[i])
  }

  fclose(fptr);

  //set the knapsack size to the number in second parameter
  int tempSize = 100; //TODO load from param

  //start with the most valuable items and fill from there

  //start with the lightest items and fill from there

  //find a cost/value ratio and fill from highest values first

  //brute force

  return 0;
}
