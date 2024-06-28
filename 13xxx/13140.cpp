#include <iostream>
using namespace std;

int hello(int h, int e, int l, int o) {
  return h * 10000 + e * 1000 + l * 100 + l * 10 + o;
}

int world(int w, int o, int r, int l, int d) {
  return w * 10000 + o * 1000 + r * 100 + l * 10 + d;
}

int digit(int n) {
  int ret = 0;
  while (n) {
    n /= 10;
    ret++;
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;

  for (int d=0; d<=9; d++) {
    for (int e=0; e<=9; e++) {
      if (e == d) continue;
      for (int h=1; h<=9; h++) {
        if (h == d || h == e) continue;
        for (int l=0; l<=9; l++) {
          if (l == d || l == e || l == h) continue;
          for (int o=0; o<=9; o++) {
            if (o == d || o == e || o == h || o == l) continue;
            for (int r=0; r<=9; r++) {
              if (r == d || r == e || r == h || r == l || r == o) continue;
              for (int w=1; w<=9; w++) {
                if (w == d || w == e || w == h || w == l || w == o || w == r) continue;
                if (n == hello(h, e, l, o) + world(w, o, r, l, d)) {
                  cout << "  " << hello(h, e, l, o) << "\n";
                  cout << "+ " << world(w, o, r, l, d) << "\n";
                  cout << "-------\n";
                  for (int i=0; i<7-digit(n); i++) cout << " ";
                  cout << n << "\n";
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  cout << "No Answer\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}