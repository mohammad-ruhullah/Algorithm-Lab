#include<bits/stdc++.h>
using namespace std; 

bool comp(pair<int, int> x, pair<int, int> y)
{
	return x.second <= y.second;
}
int main(){

	  

	int n;
	cout << "Enert the number of activity : ";
	cin >> n;
	cout << "Enter Start time and Finished time : " << endl;

	vector <pair<int, int>> activity(n);

	for(int i = 0; i < n; i++){
		cin >> activity[i].first >> activity[i].second;
	}
	

	sort(activity.begin(), activity.end(), comp);

	int i = 0;
	cout << "(" <<activity[i].first << "," <<  activity[i].second << ")" << endl;


	for(int j = 1; j < n; j++){
		if(activity[j].first >= activity[i].second){
			cout << "(" <<activity[j].first << "," <<  activity[j].second <<")" << endl;
			i = j;
		}
	}




	return 0;
}


// 6
// 5 9
// 1 2
// 3 4
// 0 6
// 5 7
// 8 9
// (1, 2), (3, 4), (5, 7), (8, 9)