#include <stdio.h>
int main ()
{
  int n;
  printf ("Choose corresponding working period\n");
  printf ("1.2-3 Hours\n");
  printf ("2.3-4 Hours\n");
  printf ("3.4-5 Hours\n");
  printf ("4.More than 5 Hours\n");
  printf ("Enter corresponding value\n");
  scanf ("%d", &n);
  switch (n)
    {
    case 1:
      printf ("Highly Efficient");
      break;
    case 2:
      printf ("Need to improve your speed");
      break;
    case 3:
      printf ("Required training to ipmrove your speed");
      break;
    case 4:
      printf ("You are terminated");
      break;
    default:
      printf ("No such working period");
      break;
    }
  return 0;
}
