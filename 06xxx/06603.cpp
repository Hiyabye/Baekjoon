#include <iostream>
#include <vector>
using namespace std;

int k;
vector<int> a;
vector<bool> b;

void backtrack(int idx, int prev) {
  if (idx == 6) {
    for (int i=0; i<k; i++) {
      if (b[i]) cout << a[i] << " ";
    }
    cout << "\n";
    return;
  }

  for (int i=prev+1; i<k; i++) {
    b[i] = true;
    backtrack(idx+1, i);
    b[i] = false;
  }
}

bool solve(void) {
  cin >> k;
  if (k == 0) return false;
  a.resize(k);
  b.resize(k, false);
  for (int i=0; i<k; i++) {
    cin >> a[i];
  }

  for (int i=0; i<k; i++) {
    b[i] = true;
    backtrack(1, i);
    b[i] = false;
  }
  cout << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve()) {
  }
  return 0;
}