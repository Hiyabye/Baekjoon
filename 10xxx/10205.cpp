#include <iostream>
#include <string>
using namespace std;

void solve(int idx) {
  int h; cin >> h;
  string s; cin >> s;

  for (char c : s) {
    h += (c == 'c') - (c == 'b');
    if (h == 0) break;
  }
  cout << "Data Set " << idx << ":\n" << h << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k; cin >> k;
  for (int i=1; i<=k; i++) solve(i);
  return 0;
}