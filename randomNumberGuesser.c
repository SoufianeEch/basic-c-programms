#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int target, guess, attempts = 0;
  
  // seed the random generator
  srand(time(NULL));  // turn the current time into a seed to start generating the random number from it
  target = rand() % 100 + 1; // a % b = r | 0 <= r < b


  do {
    printf("Guess The right number: ");
    scanf("%d", &guess);
    attempts++;

    if (guess < target)
      printf("Too Low\n");
    else if (guess > target)
      printf("Too Hight\n");
    else
      printf("Bingo\nAttempts %d", attempts);
    
  } while (guess != target);


  return 0;
}
