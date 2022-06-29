#include <iostream>
using namespace std;

int main (){
    int n, i, posisi, x, temu; int a[5];
    cout<<"pencarian data dengan  sequential search \n\n";
    cout<<"banyak data : ";
    cin>>n;
    for(i = 0; i<n; i++){
        cout<<"masukan angka : ";
        cin>>a[i];
    }
    cout<<"data yang akan dicari : ";
    cin>>x;
    temu=0;
    i=0;
    while((temu==0)&&(i<n)){
        if(a[i]==x){
            temu=1;
            posisi=i;
        }
        else
     i=i+1;
    }
    if(temu==1){
        cout<<"ditemukan pada posisi "<<posisi+1<<" bernilai "<<x;
    }
    else{
        cout<<"tidak ditemukan \n"<<x;
    }
   
}