#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int> > up(int n, vector<vector<int> > a) {
  for (int i=1; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (a[i][j] == 0) continue;
      int k = i;
      while (k > 0 && a[k-1][j] == 0) {
        a[k-1][j] = a[k][j];
        a[k][j] = 0;
        k--;
      }
    }
  }
  for (int i=1; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (a[i][j] == 0) continue;
      if (a[i][j] != a[i-1][j]) continue;
      a[i-1][j] *= 2;
      a[i][j] = 0;
    }
  }
  for (int i=1; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (a[i][j] == 0) continue;
      int k = i;
      while (k > 0 && a[k-1][j] == 0) {
        a[k-1][j] = a[k][j];
        a[k][j] = 0;
        k--;
      }
    }
  }
  return a;
}

vector<vector<int> > down(int n, vector<vector<int> > a) {
  for (int i=n-2; i>=0; i--) {
    for (int j=0; j<n; j++) {
      if (a[i][j] == 0) continue;
      int k = i;
      while (k < n-1 && a[k+1][j] == 0) {
        a[k+1][j] = a[k][j];
        a[k][j] = 0;
        k++;
      }
    }
  }
  for (int i=n-2; i>=0; i--) {
    for (int j=0; j<n; j++) {
      if (a[i][j] == 0) continue;
      if (a[i][j] != a[i+1][j]) continue;
      a[i+1][j] *= 2;
      a[i][j] = 0;
    }
  }
  for (int i=n-2; i>=0; i--) {
    for (int j=0; j<n; j++) {
      if (a[i][j] == 0) continue;
      int k = i;
      while (k < n-1 && a[k+1][j] == 0) {
        a[k+1][j] = a[k][j];
        a[k][j] = 0;
        k++;
      }
    }
  }
  return a;
}

vector<vector<int> > left(int n, vector<vector<int> > a) {
  for (int i=0; i<n; i++) {
    for (int j=1; j<n; j++) {
      if (a[i][j] == 0) continue;
      int k = j;
      while (k > 0 && a[i][k-1] == 0) {
        a[i][k-1] = a[i][k];
        a[i][k] = 0;
        k--;
      }
    }
  }
  for (int i=0; i<n; i++) {
    for (int j=1; j<n; j++) {
      if (a[i][j] == 0) continue;
      if (a[i][j] != a[i][j-1]) continue;
      a[i][j-1] *= 2;
      a[i][j] = 0;
    }
  }
  for (int i=0; i<n; i++) {
    for (int j=1; j<n; j++) {
      if (a[i][j] == 0) continue;
      int k = j;
      while (k > 0 && a[i][k-1] == 0) {
        a[i][k-1] = a[i][k];
        a[i][k] = 0;
        k--;
      }
    }
  }
  return a;
}

vector<vector<int> > right(int n, vector<vector<int> > a) {
  for (int i=0; i<n; i++) {
    for (int j=n-2; j>=0; j--) {
      if (a[i][j] == 0) continue;
      int k = j;
      while (k < n-1 && a[i][k+1] == 0) {
        a[i][k+1] = a[i][k];
        a[i][k] = 0;
        k++;
      }
    }
  }
  for (int i=0; i<n; i++) {
    for (int j=n-2; j>=0; j--) {
      if (a[i][j] == 0) continue;
      if (a[i][j] != a[i][j+1]) continue;
      a[i][j+1] *= 2;
      a[i][j] = 0;
    }
  }
  for (int i=0; i<n; i++) {
    for (int j=n-2; j>=0; j--) {
      if (a[i][j] == 0) continue;
      int k = j;
      while (k < n-1 && a[i][k+1] == 0) {
        a[i][k+1] = a[i][k];
        a[i][k] = 0;
        k++;
      }
    }
  }
  return a;
}

int backtrack(int idx, int n, vector<vector<int> > a) {
  if (idx == 5) {
    int ans = 0;
    for (int i=0; i<n; i++) {
      for (int j=0; j<n; j++) {
        ans = max(ans, a[i][j]);
      }
    }
    return ans;
  }

  int ret = 0;
  ret = max(ret, backtrack(idx+1, n, up(n, a)));
  ret = max(ret, backtrack(idx+1, n, down(n, a)));
  ret = max(ret, backtrack(idx+1, n, left(n, a)));
  ret = max(ret, backtrack(idx+1, n, right(n, a)));
  return ret;
}

void solve(void) {
  int n;
  cin >> n;
  vector<vector<int> > a(n, vector<int>(n));
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cin >> a[i][j];
    }
  }

  cout << backtrack(0, n, a);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}