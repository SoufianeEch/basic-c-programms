#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  
  char password[100];
  int lenght, hasLower = 0, hasUpper = 0, hasDigit = 0, hasSymbol = 0;

  printf("Enter Your password: ");
  scanf("%99s", password); // %99s means read at max 99 chars from the input string

  lenght = strlen(password);

  for (int i; i < lenght; i++){
    if (islower(password[i]))
      hasLower = 1;
    else if (isupper(password[i]))
      hasUpper = 1;
    else if (isdigit(password[i]))
      hasDigit = 1;
    else
      hasSymbol = 1;
  }

  int score = hasLower + hasUpper + hasDigit + hasSymbol;

  if (lenght >= 8 && score == 4)
    printf("Strength: Strong\n");
  else if (lenght >= 6 && score >= 3)
    printf("Strength: Medium\n");
  else
  printf("Strength: Weak\n");

  return 0;
}
