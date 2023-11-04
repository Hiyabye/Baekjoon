#include <iostream>
using namespace std;

void solve(int idx) {
  long long n, m; cin >> n >> m;

  cout << "Scenario #" << idx << ":\n";
  cout << (m+n)*(m-n+1)/2 << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}