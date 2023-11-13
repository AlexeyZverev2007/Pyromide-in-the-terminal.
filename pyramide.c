#include <stdio.h>

void print_pyramide(Count_Sides)
{
  int cnt = 0;
  for (int i = 0; i < Count_Sides; i++) {
    for (int j = Count_Sides - 1 - i; j > 0; j--) {
      printf(" ");
    }
    for (int j = 0; j < i + cnt; j++) {
      printf("*");
    }
    printf("\n");
    cnt++;
  }
}

int main()
{
  int sides;
  printf("Enter sides: ");
  scanf("%d", &sides);
  if (sides <= 3) {
    printf("Side smaller then 4, repeat input please.\n");
    return 1;
  }
  else {
    print_pyramide(sides);
    return 0;
  }
}
