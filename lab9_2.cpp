#include<iostream>
#include<string>
using namespace std;

//Write the function printO() here
int printO(int N,int M){
	if(M > 0 && N > 0){
		for (int j = 1; j <= N; j++){
			for(int i = 1; i <= M; i++){
				cout << "O";
		}
			cout << "\n";
	}
	}
	else {
		cout<< "Invalid input";
	}
	return 0;
}
int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}