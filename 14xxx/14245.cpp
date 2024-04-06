#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

class LazySegmentTree {
private:
  int n, h, sz;
  vector<int> arr;
  vector<int> tree;
  vector<int> lazy;

  void init(int node, int start, int end) {
    if (start == end) {
      tree[node] = arr[start];
    } else {
      init(node*2, start, (start+end)/2);
      init(node*2+1, (start+end)/2+1, end);
      tree[node] = tree[node*2] ^ tree[node*2+1];
    }
  }

  void update_lazy(int node, int start, int end) {
    if (lazy[node] != 0) {
      tree[node] ^= lazy[node];
      if (start != end) {
        lazy[node*2] ^= lazy[node];
        lazy[node*2+1] ^= lazy[node];
      }
      lazy[node] = 0;
    }
  }

  void update_range(int node, int start, int end, int left, int right, int delta) {
    update_lazy(node, start, end);
    if (left > end || right < start) return;
    if (left <= start && end <= right) {
      tree[node] ^= delta;
      if (start != end) {
        lazy[node*2] ^= delta;
        lazy[node*2+1] ^= delta;
      }
      return;
    }
    update_range(node*2, start, (start+end)/2, left, right, delta);
    update_range(node*2+1, (start+end)/2+1, end, left, right, delta);
    tree[node] = tree[node*2] ^ tree[node*2+1];
  }

  int query(int node, int start, int end, int left, int right) {
    update_lazy(node, start, end);
    if (left > end || right < start) return 0;
    if (left <= start && end <= right) return tree[node];
    int lval = query(node*2, start, (start+end)/2, left, right);
    int rval = query(node*2+1, (start+end)/2+1, end, left, right);
    return lval ^ rval;
  }

public:
  LazySegmentTree(vector<int>& arr) : arr(arr) {
    this->n = arr.size();
    this->h = (int)ceil(log2(n));
    this->sz = (1 << (h+1));
    this->tree.resize(sz, 0);
    this->lazy.resize(sz, 0);
    init(1, 0, n-1);
  }

  void update(int left, int right, int delta) {
    update_range(1, 0, n-1, left, right, delta);
  }

  int query(int left, int right) {
    return query(1, 0, n-1, left, right);
  }
};

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  LazySegmentTree lst(v);

  int m; cin >> m;
  while (m--) {
    int t; cin >> t;
    if (t == 1) {
      int a, b, c; cin >> a >> b >> c;
      lst.update(a, b, c);
    } else if (t == 2) {
      int a; cin >> a;
      cout << lst.query(a, a) << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}