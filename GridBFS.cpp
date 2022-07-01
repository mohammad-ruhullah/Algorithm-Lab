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

int dx[] = {-1, 1, 0, 0, 1, -1, 1, -1};
int dy[] = {0, 0, -1, 1, -1, -1, 1, 1};

int visited[200 + 1][200 + 1];

int n, m;

void checkLand(int x, int y){

    queue <pair <int, int>> pot;
    pot.push({x, y});
    visited[x][y] = 0;

    while(!pot.empty()){
      pair<int, int> u = pot.front();
      pot.pop();

      for(int i = 0; i < 8; i++){
        if(u.first + dx[i] >= n or u.first + dx[i] < 0 or u.second + dy[i] >= m or u.second + dy[i] < 0 or visited[u.first + dx[i]][u.second + dy[i]] == 0 ){
          continue;
        }
        if(visited[u.first + dx[i]][u.second + dy[i]] == 1){
          visited[u.first + dx[i]][u.second + dy[i]] = 0;
          pot.push({u.first + dx[i],u.second + dy[i]});
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

  int caseNo = 1;

  // chk;

  test_case
  while(t--){

    memset(visited, 0, sizeof(visited));
   
    cin >> n >> m;
    // cout << n << sp << m << nl;
    pair<int,int> s;



    vector<string> grid(n);
    for(int i = 0; i < n; i++){
      cin >> grid[i];
      for(int j = 0; j < m;j++ ){
        if(grid[i][j] == '#'){
          visited[i][j] = 1;
        }
      }
        
    }

      // for(int i = 0; i < n; i++){
      //     for(int j = 0; j < m; j++){
      //       cout << visited[i][j] << sp;
      //     }
      //     cout << nl;
      //   }
      //   cout  << "----------" << nl;




    // chk;

    int landNo = 0;

    for(int i = 0; i < n; i++){
     
      for(int j = 0; j < m;j++ ){
        if(visited[i][j] == 1){
          checkLand(i, j);
          landNo++;

        //   for(int i = 0; i < n; i++){
        //   for(int j = 0; j < m; j++){
        //     cout << visited[i][j] << sp;
        //   }
        //   cout << nl;
        // }
        // cout  << "----------" << nl;
        }

      }
      
        
    }
    cout << landNo << nl;



    

    // Case 1: 45

    // for(int i = 0; i < n; i++){
    //   for(int j = 0; j < m; j++){
    //     cout << visited[i][j] << sp;
    //   }
    //   cout << nl;
    // }

   









  }



  time;
  return 0;
}