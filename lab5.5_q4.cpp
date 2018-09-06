//Rhombus Star Pattern

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring variables
	int n, i, j, k;
	//asking user for size of pattern
	cout <<"Enter the size of the pattern."<<endl;
	//accepting value
	cin >>n;
	//running loop to print pattern
	for(i=0; i<n; i++){
		//printing spaces
		for(j=(n-1); j>i; j--){
			cout <<" ";
		}
		//printing stars
		for(k=0; k<n; k++){
			cout <<"*";
		}
		//changing line
		cout<<endl;
	}
	//returning integer value to main function
	return 0;
}


