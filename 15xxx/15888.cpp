#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int a, b, c;
  cin >> a >> b >> c;

  if (b % a != 0 || c % a != 0 || b*b - 4*a*c <= 0) {
    cout << "둘다틀렸근";
    return;
  }

  for (int x1=2; x1<=256; x1*=2) {
    for (int x2=2; x2<=256; x2*=2) {
      if (x1 == x2) continue;
      if (a*x1*x1+b*x1+c == 0 && a*x2*x2+b*x2+c == 0) {
        cout << "이수근";
        return;
      }
    }
  }

  for (int x1=-200; x1<=200; x1++) {
    for (int x2=-200; x2<=200; x2++) {
      if (x1 == x2) continue;
      if (a*x1*x1+b*x1+c == 0 && a*x2*x2+b*x2+c == 0) {
        cout << "정수근";
        return;
      }
    }
  }

  cout << "둘다틀렸근";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}