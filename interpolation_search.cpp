#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main(){
    system("cls");
    int n,i,cari,arr[50];
    cout<<"masukan jumlah angka : ";
    cin>>n;
    cout<<"masukan "<<n<<" angka : \n";
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"masukan angka yang di cari : ";
    cin>>cari;
    for(i =0; i < n; i++){
        if(arr[i]==cari){
            cout<<cari<<" ditemukan pada lokasi "<<i+1;
        }
        if(i==0){
            cout<<"\n tidak di temukan "<<cari<<"\n tidak termasuk dalam inputan";
        }
    }
}