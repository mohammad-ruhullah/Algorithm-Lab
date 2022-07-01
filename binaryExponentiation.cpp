
// calculate a^n in O(log n) time

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

ll binaryExp(ll a, ll n){
	ll res = 1;

	while(n){

		if(n%2){
		res *= a;
		n--;
		}else{
			a *= a;
			n /= 2;
		}
	}

	return res;

	
}


int main ()
{
  FIO;
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  freopen("error.txt", "w", stderr);
  #endif

  ll a, n;
  cin >> a >> n;

  cout << binaryExp(a, n) << nl;



  time;
  return 0;
}