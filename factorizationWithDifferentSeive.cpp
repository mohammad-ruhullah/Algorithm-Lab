
// this code will print factorization of a number O(logN)

#include<bits/stdc++.h>  
using namespace std; 


#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define time cerr << "Time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl;

#define ll long long int
#define ull unsigned long long
#define vi vector <int>
#define vll vector <long long int>
#define pb push_back
#define sf scanf
#define pf printf

#define sp " "
#define chk cout << "Alhamdulillah" << '\n';
#define nl '\n'
#define test_case int t;cin >> t;

vll fact(150, -1);

void seiveFact(ll n){
  for(ll i = 2; i <= n; i++){
    if(fact[i] == -1){
      for(ll j = i; j <= n; j += i){
        if(fact[j] == -1)fact[j] = i;
      }
    }
  }
}


int main ()
{
  FIO;
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  freopen("error.txt", "w", stderr);
  #endif

  seiveFact(150);

  // for(auto x : fact)cout << x << sp;
  // cout << nl;
  
  ll findFact = 100;

  ll pos = 100;

  while(1){
    cout << fact[pos] << sp;

    pos = pos / fact[pos];

    // cout << "POS :" <<  pos << nl;

    if(pos == 1)break;
  }


  time;
  return 0;
}