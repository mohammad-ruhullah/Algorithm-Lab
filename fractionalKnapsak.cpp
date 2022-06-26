#include <bits/stdc++.h>
using namespace std;

bool comp(pair<double, double>x, pair<double, double> y){
	return x.first/x.second > y.first/y.second;
}

int main(){


	cout << "Enter the number of item: ";
	int n;
	cin >> n;

	cout << "Enter Maximum Size of Kanpsak : ";
	int m;
	cin >> m;

	cout << "Enter the Profit and Weight of each Item : " << endl;

	vector<pair<double, double>> item(n);
	for(int i = 0; i < n; i++){
		cin >> item[i].first >> item[i].second;
	}

	sort(item.begin(), item.end(), comp);


	double profit = 0;

	for(int i = 0; i < n; i++){
		
		if(item[i].second <= m){
			m = m - item[i].second;
			profit = profit + item[i].first;
		}else{
			if(m == 0)break;
			profit = profit + (item[i].first / item[i].second) * m;
			break;
		}
	}


	cout << profit << endl;





	return 0;
}