#include <iostream>
using namespace std;

bool one(int n) {
  while (n) {
    int x = n % 10;
    if (x != 2 && x != 0 && x != 1 && x != 8) return false;
    n /= 10;
  }
  return true;
}

bool two(int n) {
  bool a = false, b = false, c = false, d = false;
  while (n) {
    int x = n % 10;
    if (x == 2) a = true;
    else if (x == 0) b = true;
    else if (x == 1) c = true;
    else if (x == 8) d = true;
    n /= 10;
  }
  return a && b && c && d;
}

bool eight(int n) {
  int a = 0, b = 0, c = 0, d = 0;
  while (n) {
    int x = n % 10;
    if (x == 2) a++;
    else if (x == 0) b++;
    else if (x == 1) c++;
    else if (x == 8) d++;
    n /= 10;
  }
  return a == b && b == c && c == d;
}

void solve(void) {
  int n; cin >> n;

  if (!one(n)) cout << 0;
  else if (!two(n)) cout << 1;
  else if (!eight(n)) cout << 2;
  else cout << 8;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}