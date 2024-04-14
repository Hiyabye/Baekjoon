#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> v(50);
  for (int i=0; i<50; i++) cin >> v[i];
  int n; cin >> n;

  int rank = 0;
  for (int i=0; i<50; i++) {
    if (v[i] >= n) rank++;
  }

  if (rank <= 5) cout << "A+";
  else if (rank <= 15) cout << "A0";
  else if (rank <= 30) cout << "B+";
  else if (rank <= 35) cout << "B0";
  else if (rank <= 45) cout << "C+";
  else if (rank <= 48) cout << "C0";
  else cout << "F";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}