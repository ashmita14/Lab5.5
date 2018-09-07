//Right Angled Star Pattern

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring data types
	int n, i, j;
	//asking user for size of pattern
	cout<<"Enter the size of pattern."<<endl;
	//accepting value
	cin >>n;
	//running loop to print pattern
	for(i=0; i<n; i++){
		for(j=0; j<=i; j++){
			//printing stars
			cout<<"*";
		}
		//changing line
		cout<<endl;
	}
	//returning integer value to main function
	return 0;
}
