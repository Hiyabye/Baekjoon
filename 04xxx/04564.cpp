#include <iostream>
using namespace std;

bool solve(void) {
  int s; cin >> s;
  if (s == 0) return false;

  cout << s;
  while (s > 9) {
    int p = 1;
    while (s > 0) {
      p *= s % 10;
      s /= 10;
    }
    s = p;
    cout << " " << s;
  }
  cout << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  while (solve());
  return 0;
}