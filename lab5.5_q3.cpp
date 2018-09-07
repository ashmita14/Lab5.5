//Hollow Square Star Pattern with Diagonal

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring variables
	int n, i ,j; 
	//asking user for size of square pattern
	cout <<"Enter size of square pattern."<<endl;
	//accepting value from user
	cin >>n;
	//running loop to print the pattern
	for(i=0; i<n; i++){
		//checking i
		if(i==0 || i==(n-1)){
			//displaying stars using loops
			for(j=0; j<n; j++){
				cout<<"*";
			}
			//changing line
			cout<<endl;
		}	
		if(i!=0 && i!=(n-1) && i%2!=0){
			//displaying pattern as per condition
			for(j=0; j<n; j++){
				if(j!=0 && j!=(n-1) && j%2==0){
					//displaying space
					cout<<" ";
				}
				else{
					//displaying star
					cout<<"*";

				}
			}
			//changing line
			cout<<endl;
		}
		if(i!=0 && i!=(n-1) && i%2==0){
			//displaying pattern as per condition
			for(j=0; j<n; j++){
				if(j!=0 && j!=(n-1) && j%2!=0){
					//displaying spaces
					cout<<" ";
				}
				else{
					//displaying star
					cout<<"*";
				}
			}
			//changing line
			cout<<endl;
		}
	}
	//returning integer value to main function
	return 0;
}


















	
