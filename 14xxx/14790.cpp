#include <iostream>
#include <string>
using namespace std;

void solve(int idx) {
  string n; cin >> n;

  int len = n.length();
  for (int i=len-1; i>0; i--) {
    if (n[i] >= n[i-1]) continue;
    n[i-1]--;
    for (int j=len-1; j>=i; j--) n[j] = '9';
  }
  cout << "Case #" << idx << ": " << stoll(n) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}