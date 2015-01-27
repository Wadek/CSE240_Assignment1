/* Wade Kariniemi, 1202111213 CSE240
   This C program demonstrates the switch statement without using breaks.
   The program is tested on MS Visual C++ platform                        */

#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
  char ch;
  int f, a = 10, b = 20, i = 1;

  printf("ch = %c\n",ch);

  

  for(i; i<6; i++)
  {
    printf("Enter: ");
    ch = getchar(); 
    switch (ch)
    {
      case '+': f = a + b; printf("f = %d\n", f); break;
      case '-': f = a - b; printf("f = %d\n", f); break;
      case '*': f = a * b; printf("f = %d\n", f); break;
      case '/': f = a / b; printf("f = %d\n", f); break;
      default: printf("invalid operator\n");  break;
    }
    // clear the buffer
    getchar();
  }
}  
