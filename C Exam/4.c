#include <stdio.h>
int is_leap_year(int year) {
  if (year % 400 == 0) {
    return 1;
  } else if (year % 100 == 0) {
    return 0;
  } else if (year % 4 == 0) {
    return 1;
  } else {
    return 0;
  }
}
main() {
  int year;
  printf("Enter a year: ");
  scanf("%d", &year);
  if (is_leap_year(year)) {
    printf("%d is a leap year.\n", year);
  } else {
    printf("%d is not a leap year.\n", year);
  }
}