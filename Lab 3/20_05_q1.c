//Lab Task 3 Question No. 1
#include <stdio.h>
int main()
{
  int i, LB, UB, MID, n, KEY;
    printf("Enter no. of book ids: ");

  scanf("%d", &n);
    int array[n];
  printf("Enter Book IDs: ");

  for (i = 1; i <= n; i++)
    scanf("%d", &array[i]);

  printf("Find the index of Book id: ");
  scanf("%d", &KEY);

  LB = 1;
  UB = n ;
  MID = (LB+UB)/2;

  while (LB <= UB) {
    if (array[MID] < KEY)
      LB = MID + 1;
    else if (array[MID] == KEY) {
      printf("The %d book is in %d index.\n", KEY, MID);
      break;
    }
    else
      UB = MID - 1;

    MID = (LB + UB)/2;
  }
  if (LB > UB)
    printf("Not found! %d isn't present in the Book list.\n", KEY);

  return 0;
}
