#include <stdio.h>
#include <string.h>

int main()
{
  char answer[4];

  printf("Vanessa, will you bake orange cake cookies?\n");
  scanf("%s", answer);

  if (strcmp(answer, "yes") == 0)
  {
    printf("Thank you, Vanessa! The orange cake cookies are on their way.\n");
  }
  else if (strcmp(answer, "no") == 0)
  {
    printf("Oh no, Vanessa! Please reconsider and make the orange cake cookies.\n");
  }

  return 0;
}
