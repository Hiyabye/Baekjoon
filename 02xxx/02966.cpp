#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<char> > precompute(void) {
  vector<vector<char> > v(3, vector<char>(100));

  for (int i=0; i<100; i++) {
    switch (i % 3) {
      case 0: v[0][i] = 'A'; break;
      case 1: v[0][i] = 'B'; break;
      case 2: v[0][i] = 'C'; break;
    }

    switch (i % 4) {
      case 0: v[1][i] = 'B'; break;
      case 1: v[1][i] = 'A'; break;
      case 2: v[1][i] = 'B'; break;
      case 3: v[1][i] = 'C'; break;
    }

    switch (i % 6) {
      case 0: case 1: v[2][i] = 'C'; break;
      case 2: case 3: v[2][i] = 'A'; break;
      case 4: case 5: v[2][i] = 'B'; break;
    }
  }
  return v;
}

void solve(vector<vector<char> > &v) {
  int n; cin >> n;
  string s; cin >> s;

  vector<int> ans(3, 0);
  for (int i=0; i<n; i++) {
    for (int j=0; j<3; j++) {
      if (s[i] == v[j][i]) ans[j]++;
    }
  }

  int mx = *max_element(ans.begin(), ans.end());
  cout << mx << "\n";
  if (ans[0] == mx) cout << "Adrian\n";
  if (ans[1] == mx) cout << "Bruno\n";
  if (ans[2] == mx) cout << "Goran\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  vector<vector<char> > v = precompute();
  solve(v);
  return 0;
}