// Wade Kariniemi 1202111213 CSE240
// This program gathers an input using scanf and performs basic math on the input until 1 is reached.
// Additionally, I also added writability to the program, as well as an exit command.

#include <stdio.h>
#pragma warning(disable: 4996)
// this will remove the exit warnings
#include <stdlib.h>


// main method
int main()
{
  int n;
  int divisor = 2, multiplyer = 3, add = 1, result, counter = 1;
  FILE *f = fopen("hw1q3.txt","w");
  while(n != 1337)
  {
     printf("Enter a number: \nWhen you are finished, enter 1337 to exit.\n");
     scanf("%d", &n);
     termination(n,divisor,multiplyer,add,result,counter, f);
  }
  printf("you have reached the end of main\n");
  fclose(f);
  return 0;
}


// even function - if number is even (if remainder of %2 = 0), return 0
// if not even, return 1
int even(int n, int divisor, int result, int counter)
{
  if(n % 2 == 0)
  {
    printf("the result is even\n");
    result = 1;
    return result;
  }
  else
  {
    printf("the result is odd\n");
    result = 0;
    return result;
  }
}

//termination goes here
int termination(int n, int divisor, int multiplyer, int add, int result, int counter, FILE *f)
{
  // exit the method case
  if(n == 1337){exit(1);}
  
  //writes input to file
  fprintf(f, "%d\n\n", n);
  
  //while loop that performs math operations until 1 is reached.
  printf("n = %d\n",n);
  while( n != 1)
  {
    even(n, divisor, result, counter);
   
    if (result = 1)
    {
      printf("and the result is even\n");
      n = n / divisor;
      fprintf(f, "%d\n\n", n);
      printf("n = %d\n",n);
      counter++;
    }
    else
    {
      n =  multiplyer * n + add;
      printf("n = %c\n",n);
      fprintf(f, "%d\n\n", n);
      counter++;
    }
  }
  printf("the count is: %d\n",counter);
  return n;
}

