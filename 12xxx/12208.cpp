#include <iostream>
#include <vector>
#include <string>
using namespace std;

void up(int n, vector<vector<int> > &a) {
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
}

void down(int n, vector<vector<int> > &a) {
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
}

void left(int n, vector<vector<int> > &a) {
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
}

void right(int n, vector<vector<int> > &a) {
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
}

void solve(int t) {
  int n;
  string s;
  cin >> n >> s;
  vector<vector<int> > a(n, vector<int>(n));
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cin >> a[i][j];
    }
  }

  if (s == "up") up(n, a);
  else if (s == "down") down(n, a);
  else if (s == "left") left(n, a);
  else right(n, a);

  cout << "Case #" << t << ":\n";
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  for (int i=1; i<=t; i++) {
    solve(i);
  }
  return 0;
}