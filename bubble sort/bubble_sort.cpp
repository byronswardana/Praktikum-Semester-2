// Algoritma bubble sort
// NIM : 20210801095

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
   int data[100];
   int x,n,i,temp;

   cout << "Masukkan banyak data: ";
   cin >> n;
   cout << endl;

   for (int i = 0; i < n; i++){
      data[i] = (rand() %100) + 1;
      cout << "Data ke - " << i+1 << " = "<< data[i] << endl;
   }

   cout << "\nData sebelum diurutkan: " << endl;
   for (i=0;i< n;i++){
      cout << data[i] << " ";
   }
   cout << endl;

   for (i=0;i < n;i++){
      for(x=i+1;x<n;x++){
         if(data[i] > data[x]){
            temp = data[i];
            data[i] = data[x];
            data[x] = temp;
         }
      }
   }
   cout << "Data sesudah diurutkan: " << endl;
   for (i=0;i<n;i++){
      cout << data[i] << " ";
   }
   cout << endl;
}



