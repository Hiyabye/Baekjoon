#include <iostream>
#include <string>
using namespace std;

int a(int x) {
  return (x == 1 ? 2 : (x == 2 ? 1 : x));
}

int b(int x) {
  return (x == 1 ? 3 : (x == 3 ? 1 : x));
}

int c(int x) {
  return (x == 1 ? 4 : (x == 4 ? 1 : x));
}

int d(int x) {
  return (x == 2 ? 3 : (x == 3 ? 2 : x));
}

int e(int x) {
  return (x == 2 ? 4 : (x == 4 ? 2 : x));
}

int f(int x) {
  return (x == 3 ? 4 : (x == 4 ? 3 : x));
}

void solve(void) {
  string s; cin >> s;

  int p = 1, q = 4;
  for (char ch : s) {
    switch (ch) {
      case 'A': p = a(p); q = a(q); break;
      case 'B': p = b(p); q = b(q); break;
      case 'C': p = c(p); q = c(q); break;
      case 'D': p = d(p); q = d(q); break;
      case 'E': p = e(p); q = e(q); break;
      case 'F': p = f(p); q = f(q); break;
    }
  }
  cout << p << "\n" << q;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}