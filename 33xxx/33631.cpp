#include <iostream>
using namespace std;

void solve(void) {
  int fs, cs, es, bs; cin >> fs >> cs >> es >> bs;
  int fn, cn, en, bn; cin >> fn >> cn >> en >> bn;
  int q; cin >> q;

  int cnt = 0;
  while (q--) {
    int op, i; cin >> op >> i;
    if (op == 1) {
      if (fn * i > fs || cn * i > cs || en * i > es || bn * i > bs) {
        cout << "Hello, siumii";
      } else {
        fs -= fn * i;
        cs -= cn * i;
        es -= en * i;
        bs -= bn * i;
        cnt += i; cout << cnt;
      }
    } else if (op == 2) {
      fs += i; cout << fs;
    } else if (op == 3) {
      cs += i; cout << cs;
    } else if (op == 4) {
      es += i; cout << es;
    } else if (op == 5) {
      bs += i; cout << bs;
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}