#include<iostream> 

using namespace std; 
extern bool descending(int*,int);

int main(void){ 


	// cout  << "enter the size of the array" ;
 
	// cin >> n; 
	
	int array[7] = {1,2,3,4,5,6,7};

	int n = 6; 

	if (descending(array, n) == 0){ 
	cout << "false \n";
	}
	
	else { 
	cout << "true \n";
	}		

	
	return 0;

	}


	

























