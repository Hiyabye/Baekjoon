#include <iostream>
using namespace std;

void solve(int idx) {
  int e, a; cin >> e >> a;

  int cnt = 0;
  while (e > a) a *= 5, cnt++;

  cout << "Data Set " << idx << ":\n";
  if (!cnt) cout << "no ";
  for (int i=1; i<cnt; i++) cout << "mega ";
  cout << "drought\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k; cin >> k;
  for (int i=1; i<=k; i++) solve(i);
  return 0;
}