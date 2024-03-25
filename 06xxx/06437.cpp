#include <iostream>
using namespace std;

bool solve(int idx) {
  int p, s; cin >> p >> s;
  if (p == 0) return false;

  cout << "Hole #" << idx << "\n";
  if (s == 1) cout << "Hole-in-one.";
  else if (s == p-3) cout << "Double eagle.";
  else if (s == p-2) cout << "Eagle.";
  else if (s == p-1) cout << "Birdie.";
  else if (s == p) cout << "Par.";
  else if (s == p+1) cout << "Bogey.";
  else cout << "Double Bogey.";
  cout << "\n\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}