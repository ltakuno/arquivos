#include <bits/stdc++.h>

using namespace std;

const int N = 112345;

vector<int> t[4*N];

int a[N];

void build(int i, int l, int r){
   if (l == r){
      t[i].push_back(a[l]);
   } else {
      int m = (l+r)/2;
      build(2*i, l, m);
      build(2*i+1, m+1, r);
      merge(t[2*i].begin(), t[2*i].end(), t[2*i+1].begin(), t[2*i+1].end(), back_inserter(t[i]));
   }
}

void query(int i, int l, int r, int ql, int qr, int a, int b){
   if (ql < l && r <= qr){
	  return upper_bound(t[i].begin(), t[i].end(), b) - lower_bound(t[i].begin(), t[i].end(), a);
   if (qr < l || r < ql) return 0;
   int m = (l+r)/2;
   return query(2*i, l, m, ql, qr, a, b)
        + query(2*i+1, m+1, r, ql, qr, a, b);
}   

void update(int i, int l, int r, int ql, int qr, int x){
   push(i, l, r);
   if (qr < l || r < ql) return;
   if (ql <= l && r <= qr) {
	   lz[i] += x;
	   push(i, l, r);
   } else {
      int m = (l+r)/2;
      update(2*i, l, m, ql, qr, x)
      update(2*i+1, m+1, r, ql, qr, x)
      t[i] = t[2*i] + t[2*i+1];
   }

}


int main(){
   cout << "teste"<< endl ;
   return 0;
}
