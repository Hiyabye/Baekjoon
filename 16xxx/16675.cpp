#include <iostream>
using namespace std;

inline int win(char a, char b) {
  return (a == 'S' && b == 'P') || (a == 'R' && b == 'S') || (a == 'P' && b == 'R');
}

void solve(void) {
  char ml, mr, tl, tr; cin >> ml >> mr >> tl >> tr;

  if (ml == mr && tl == tr) {
    cout << (ml == tl ? "?" : (win(ml, tl) ? "MS" : "TK"));
  } else if (ml == mr) {
    cout << (win(tl, ml) || win(tr, ml) ? "TK" : "?");
  } else if (tl == tr) {
    cout << (win(ml, tl) || win(mr, tl) ? "MS" : "?");
  } else {
    cout << "?";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}