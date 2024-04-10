#include <iostream>
using namespace std;

bool solve(int idx) {
  long long s; cin >> s;
  if (s == 0) return false;

  cout << "File #" << idx << "\n" << "John needs " << ((s+1)*3/4+1859999)/1860000 << " floppies.\n\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}