#include<iostream>

bool fanarray(int array[], int n){ 

	int count = 0; 

	for (int i=0; i<n-1;i++){ 

		if (array[i]>array[i+1]){

			count = count + 1; 

		} 
		
	} 

	if (count > 0){ 

	return 0; 

	}  	

	else { 

	return 1;

	} 

} 

