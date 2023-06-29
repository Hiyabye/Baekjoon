#include <stdio.h>

typedef enum Command {
  R, L, B, T, RT, LT, RB, LB
} Command;

void move(char king[], char stone[], Command command) {
  switch(command) {
  case R:
    if (king[0] != 'H') king[0]++;
    if (king[0] == stone[0] && king[1] == stone[1]) {
      if (stone[0] != 'H') stone[0]++;
      else king[0]--;
    }
    break;

  case L:
    if (king[0] != 'A') king[0]--;
    if (king[0] == stone[0] && king[1] == stone[1]) {
      if (stone[0] != 'A') stone[0]--;
      else king[0]++;
    }
    break;

  case B:
    if (king[1] != '1') king[1]--;
    if (king[0] == stone[0] && king[1] == stone[1]) {
      if (stone[1] != '1') stone[1]--;
      else king[1]++;
    }
    break;

  case T:
    if (king[1] != '8') king[1]++;
    if (king[0] == stone[0] && king[1] == stone[1]) {
      if (stone[1] != '8') stone[1]++;
      else king[1]--;
    }
    break;

  case RT:
    if (king[0] != 'H' && king[1] != '8') {
      king[0]++;
      king[1]++;
    }
    if (king[0] == stone[0] && king[1] == stone[1]) {
      if (stone[0] != 'H' && stone[1] != '8') {
        stone[0]++;
        stone[1]++;
      } else {
        king[0]--;
        king[1]--;
      }
    }
    break;

  case LT:
    if (king[0] != 'A' && king[1] != '8') {
      king[0]--;
      king[1]++;
    }
    if (king[0] == stone[0] && king[1] == stone[1]) {
      if (stone[0] != 'A' && stone[1] != '8') {
        stone[0]--;
        stone[1]++;
      } else {
        king[0]++;
        king[1]--;
      }
    }
    break;

  case RB:
    if (king[0] != 'H' && king[1] != '1') {
      king[0]++;
      king[1]--;
    }
    if (king[0] == stone[0] && king[1] == stone[1]) {
      if (stone[0] != 'H' && stone[1] != '1') {
        stone[0]++;
        stone[1]--;
      } else {
        king[0]--;
        king[1]++;
      }
    }
    break;

  case LB:
    if (king[0] != 'A' && king[1] != '1') {
      king[0]--;
      king[1]--;
    }
    if (king[0] == stone[0] && king[1] == stone[1]) {
      if (stone[0] != 'A' && stone[1] != '1') {
        stone[0]--;
        stone[1]--;
      } else {
        king[0]++;
        king[1]++;
      }
    }
    break;
  }
}

int main(void) {
  int n;
  char king[3], stone[3], buffer[3];
  Command command;

  scanf("%s %s %d", king, stone, &n);
  for (int i=0; i<n; i++) {
    scanf("%s", buffer);
    if (buffer[0] == 'R') {
      if (buffer[1] == 'T') command = RT;
      else if (buffer[1] == 'B') command = RB;
      else command = R;
    } else if (buffer[0] == 'L') {
      if (buffer[1] == 'T') command = LT;
      else if (buffer[1] == 'B') command = LB;
      else command = L;
    } else if (buffer[0] == 'B') {
      command = B;
    } else if (buffer[0] == 'T') {
      command = T;
    }
    move(king, stone, command);
  }
  printf("%s\n%s", king, stone);
  return 0;
}