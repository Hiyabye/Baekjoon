#include <stdio.h>
#include <string.h>

int main(void) {
  int location, len, count = 0;
  char str[101];

  scanf("%s", str);
  len = strlen(str);
  location = 0;

  while (location < len) {
    switch (str[location]) {
      case 'c':
        switch (str[location+1]) {
          case '=': count++; location += 2; break;
          case '-': count++; location += 2; break;
          default: count++; location++; break;
        }
        break;

      case 'd':
        switch (str[location+1]) {
          case 'z':
            if (str[location+2] == '=') {
              count++;
              location += 3;
            } else {
              count++;
              location++;
            }
            break;
          case '-': count++; location += 2; break;
          default: count++; location++; break;
        }
        break;

      case 'l':
        if (str[location+1] == 'j') {
          count++;
          location += 2;
        } else {
          count++;
          location++;
        }
        break;

      case 'n':
        if (str[location+1] == 'j') {
          count++;
          location += 2;
        } else {
          count++;
          location++;
        }
        break;

      case 's':
        if (str[location+1] == '=') {
          count++;
          location += 2;
        } else {
          count++;
          location++;
        }
        break;

      case 'z':
        if (str[location+1] == '=') {
          count++;
          location += 2;
        } else {
          count++;
          location++;
        }
        break;
      
      default:
        count++;
        location++;
        break;
    }
  }

  printf("%d", count);
  return 0;
}