//Hollow Rhombus Star Pattern

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring varia
	int i, j, k, l, n;
	//asking user for size of pattern
	cout <<"Enter the size of the pattern."<<endl;
	//accepting value
	cin >>n;
	//running loop to generate pattern
	for(i=0; i<n; i++){
		//printing spaces
		for(l=(n-1); l>i; l--){
			//printing spaces
			cout<<" ";
		}
		//checking value of i
		if(i==0 || i==(n-1)){
			//loop for printing stars of 1st and last line
			for(j=0; j<n; j++){
				//printing stars
				cout <<"*";
			}
			//changing line
			cout<<endl;
		}
		//else condition
		else{
			//print star
			cout <<"*";
			//loop to print space
			for(k=1; k<n; k++){
				//printing space
				cout <<" ";
			}
			//printing star
			cout <<"*";
			//changing line
			cout<<endl;
		}
	}
	//returning integer value to main function
	return 0;
}
