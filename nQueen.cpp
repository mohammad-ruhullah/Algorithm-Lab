#include<bits/stdc++.h>
using namespace std;
int Row[100];

bool validPlace(int row, int col){
	for(int j = 0; j < row; j++){
		if((Row[j] == col) or (abs(j - row) == abs(Row[j] - col))){
		    	return false;
		}
	}
	return true;
}

void nQueen(int row, int n){

	for(int col = 0; col < n; col++){
		if(validPlace(row, col)){
		  //  cout << row << endl;
			Row[row] = col;
			if(row == n - 1){
			    cout << "Result : ";
			    for(int i = 0; i < n; i++)cout << Row[i] + 1 << " ";
			    cout << endl << "Result as Matrix: " << endl;

                 	for(int i = 0; i < n; i++){
                 	    for(int j = 0; j < n; j++){
                 	        if(j == Row[i])cout << 1 << " ";
                 	        else cout << 0 << " ";
                 	    }
                 	    cout << endl;
                 	}
                 	
                 	cout << endl;
			}
			else{
			nQueen(row + 1, n);
		}
	}
		}
		
}


int main(){

	cout << "Enter the Queen number : " ;
	int n;
	cin >> n;

	nQueen(0, n);
	
	

}
