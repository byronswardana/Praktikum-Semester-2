//Nama : Byrons Ige Wardana
//NIM : 20210801095

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
using namespace std;

int main(){
	srand(time(NULL));   
	int arr[100], n, c, d, position, swap;
	for(int i = 0; i <10; i++){
 		cout <<"[ "<< arr[i] <<" ]";
	}
	cout<<endl<< endl;
	for (int i = 0; i<10; i++)
	{
	int smallest = arr[i];
	int smallestIndex = i;
	for (int m = i; m < 10; m++)
	{
	if(arr[m] < smallest)
	{
		smallest = arr[m];
		smallestIndex = m;
	}
	}
		swap (arr[i], arr[smallestIndex]);
	}
	for(int i = 0; i <10; i++){
 		cout<<"[ "<< arr[i] <<" ]";
	}
		cout<<endl<<endl;
}

