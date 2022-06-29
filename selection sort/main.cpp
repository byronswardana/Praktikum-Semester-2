#include <iostream>
using namespace std;

void SelectionSort(int arr[])
{   
    for(int i = 0; i < 5; i++){

    int min = i;

    for(int j = i + 1; j < 5; j++)
    {
        if(arr[j]<arr[min]){
            min=j;
            }
        }
        if(min!=i){
            int temp=arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}

int main()
{
   int myarr[100];
   cout<<"Enter5integers in random order: "<<endl;
   for (int i=0;i<5;i++){
      cin>>myarr[i];
   }
   cout<<"UNSORTED ARRAY: "<<endl;
   for (int i=0;i<5;i++){
      cout<<myarr[i]<<" ";
   }
   cout<<endl;
   SelectionSort (myarr); // sorting
   cout<<"SORTED ARRAY: "<<endl;
   for (int i=0;i<5;i++){
      cout<<myarr[i]<<" ";
    }
   
   return 0;
}