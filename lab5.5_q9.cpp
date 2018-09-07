//Hollow Right Triangle Pattern

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring main function
	int n, i, j;
	//asking user for size of pattern
	cout<<"Enter size of pattern."<<endl;
	//accepting value
	cin >>n;
	//running loop to print pattern
	//i for row and j is for column
	for(i=0; i<(n-1); i++){
		for(j=0; j<=i; j++){
			//printing stars after checking condition
			if(j==0 || j==i){
				cout<<"*";
			}
			//printing spaces after checking condition
			if(j!=0 && j!=i){
				cout<<" ";
			}
		}
		//changing line
		cout<<endl;
	}
	//incrementing i value
	i=i++;
	if(i==(n-1)){
		for(j=0; j<n; j++){
			//printing stars of last line
			cout<<"*";
			}
		}
		//changing line
		cout<<endl;
	//returning integer value to int main function
	return 0;
}
		

		
		
