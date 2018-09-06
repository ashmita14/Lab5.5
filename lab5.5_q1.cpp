//Square Star Pattern

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring variables
	int i, n, j;
	//asking user for size of square
	cout <<"Enter the size of the square star pattern."<<endl;
	//accepting value
	cin >>n;
	//running loop to generate pattern
	for(i=0; i<n; i++){
		//running loop to print pattern
		for(j=0; j<n; j++){
			//printing stars
			cout <<"*";
		}
		//changing cursor to next line
		cout<<endl;
	}
	//returning integer value to main function
	return 0;
}
