#include <stdio.h>

void
spiral(int side, int offset)
{
  /*
   * Base case: empty square
   */
  if (side == 0) return;

  /*
   * Base case: unit square
   */
  if (side == 1) {
    printf("(%d, %d)\n", offset, offset);
    return;
  }

  /*
   * Outter square
   */
  int i, j = 0;
  for (i = 0; i < side - 1; i++) printf("(%d, %d)\n", offset + i, offset + j);
  for (j = 0; j < side - 1; j++) printf("(%d, %d)\n", offset + i, offset + j);
  for (; i > 0; i--)             printf("(%d, %d)\n", offset + i, offset + j);
  for (; j > 0; j--)             printf("(%d, %d)\n", offset + i, offset + j);

  /*
   * Recurse
   */
  spiral(side - 2, offset + 1);
}

int main (int argv, char *args[])
{
  int n = atoi(args[1]);
  spiral(n, 0);
  return 0;
}
