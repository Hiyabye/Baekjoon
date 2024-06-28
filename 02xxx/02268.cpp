#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
template <typename T>

class SegmentTree {
private:
  vector<T> tree;
  vector<T> a;
  int n;
  T (*func)(T, T);

  void init(int node, int start, int end) {
    if (start == end) {
      tree[node] = a[start];
    } else {
      init(node*2, start, (start+end)/2);
      init(node*2+1, (start+end)/2+1, end);
      tree[node] = func(tree[node*2], tree[node*2+1]);
    }
  }

  T query(int node, int start, int end, int left, int right) {
    if (left > end || right < start) return 0;
    if (left <= start && end <= right) return tree[node];
    T lval = query(node*2, start, (start+end)/2, left, right);
    T rval = query(node*2+1, (start+end)/2+1, end, left, right);
    return func(lval, rval);
  }

  void update(int node, int start, int end, int index, T val) {
    if (index < start || index > end) return;
    if (start == end) {
      a[index] = val;
      tree[node] = val;
      return;
    }
    update(node*2, start, (start+end)/2, index, val);
    update(node*2+1, (start+end)/2+1, end, index, val);
    tree[node] = func(tree[node*2], tree[node*2+1]);
  }

public:
  SegmentTree(vector<T> &arr, T (*f)(T, T)) : a(arr), func(f) {
    n = arr.size();
    int h = (int)ceil(log2(n));
    int tree_size = (1 << (h+1));
    tree.resize(tree_size);
    init(1, 0, n-1);
  }

  T query(int left, int right) {
    return query(1, 0, n-1, left, right);
  }

  void update(int index, T val) {
    update(1, 0, n-1, index, val);
  }
};

long long add(long long a, long long b) {
  return a + b;
}

void solve(void) {
  int n, m;
  cin >> n >> m;
  vector<long long> a(n, 0);
  SegmentTree<long long> st(a, add);

  long long x, y, z;
  for (int i=0; i<m; i++) {
    cin >> x >> y >> z;
    if (x == 0) {
      if (y > z) swap(y, z);
      cout << st.query(y-1, z-1) << "\n";
    } else {
      st.update(y-1, z);
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}