#include <iostream>
#include <string>
using namespace std;

bool win(char a, char b) {
  if (a == 'R') return b == 'S';
  if (a == 'P') return b == 'R';
  if (a == 'S') return b == 'P';
  return false;
}

bool solve(void) {
  string a; cin >> a;
  string b; cin >> b;
  if (a == "E" && b == "E") return false;

  int c = 0, d = 0;
  for (int i=0; i<a.length(); i++) {
    if (win(a[i], b[i])) c++;
    if (win(b[i], a[i])) d++;
  }
  cout << "P1: " << c << "\nP2: " << d << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}