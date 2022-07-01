
//prime generate with seive method

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

vector <bool> primecheck(1000001, 1);
vll prime;

void seive(ll n){
	primecheck[0] = primecheck[1] = 0;

	for(ll i = 2; i*i < n; i++){
		for(ll j = i * 2; j < n; j += i){
			primecheck[j] = 0;
		}
		prime.pb(i);
	}
	for(ll i = sqrt(n) + 1; i < n; i++){
		if(primecheck[i])prime.pb(i);
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

  seive(16);

  for(auto x : prime)cout << x << nl;



  time;
  return 0;
}