#include <stdio.h>
#include <string.h>
void count_vowels(char *sentence) {
  int count[5] = {0};
  int i;
  for (i = 0; i < strlen(sentence); i++) {
    switch (sentence[i]) {
      case 'a':
      case 'A':
        count[0]++;
        break;
      case 'e':
      case 'E':
        count[1]++;
        break;
      case 'i':
      case 'I':
        count[2]++;
        break;
      case 'o':
      case 'O':
        count[3]++;
        break;
      case 'u':
      case 'U':
        count[4]++;
        break;
    }
  }
  printf("The number of occurrences of each vowel in the sentence are:\n");
  printf("a: %d\n", count[0]);
  printf("e: %d\n", count[1]);
  printf("i: %d\n", count[2]);
  printf("o: %d\n", count[3]);
  printf("u: %d\n", count[4]);
}
int main() {
  char sentence[100];
  printf("Enter a sentence: ");
  scanf("%[^\n]s", sentence);
  count_vowels(sentence);
}