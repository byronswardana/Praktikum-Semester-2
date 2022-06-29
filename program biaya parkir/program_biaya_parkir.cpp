#include <iostream>
using namespace std;


struct data{
    string nopol;
    int masuk;
    int keluar;
};

struct clock_masuk{
    int jam;
    int menit;
    int detik;
};

struct clock_keluar{
    int jam;
    int menit;
    int detik;
};

struct Waktu {
    int jam;
    int menit;
    int detik;
};

int ParkirMasuk(clock_masuk);
int ParkirKeluar(clock_keluar);
void LamaParkir(clock_masuk, clock_keluar, Waktu);
void BayarParkir(clock_masuk, clock_keluar, Waktu);

int main (){
    data d;
    clock_masuk c_masuk;
    clock_keluar c_keluar;
    Waktu waktu;

    cout<<"\t\t\t\t\t PROGRAM MENGHITUNG BIAYA PARKIR \t\t\t\t\t"<<endl;
    cout<<endl;

    cout<<"MASUKAN NOMOR POLISI ANDA : ";
    getline(cin, d.nopol);
    cout<<endl;

    cout<<"================ WAKTU ANDA MASUK ================"<<endl;
    cout<<" JAM (1 - 23), MENIT (1 - 59), DETIK (1 - 59)";
    cout<<endl;

    cout<<" JAM: ";
    cin>>c_masuk. jam;

    cout<<" MENIT : ";
    cin>>c_masuk. menit;

    cout<<" DETIK : ";
    cin>>c_masuk. detik;

    cout<<endl;

    cout<<"================ WAKTU ANDA KELUAR ================"<<endl;
    cout<<" JAM (1 - 23), MENIT (1 - 59), DETIK (1 - 59)";
    cout<<endl;

    cout<<" JAM : ";
    cin>>c_keluar. jam;

    cout<<" MENIT : ";
    cin>>c_keluar. menit;

    cout<<" DETIK : ";
    cin>>c_keluar. detik;

    cout<<endl;

    cout<<"================ HASILNYA ================"<<endl;
    cout<<"NOMOR POLISI ANDA = ";
    cout<<d.nopol<<endl;
    cout<<"WAKTU MASUK ANDA = ";
    cout<<c_masuk.jam<< ":" <<c_masuk. menit<< "." <<c_masuk.detik<<" WIB"<<endl;
    cout<<"WAKTU KELUAR ANDA = ";
    cout<<c_keluar.jam<< ":"<<c_keluar.menit<< "." <<c_keluar.detik<<" WIB"<<endl;
    cout<<"PARKIR SELAMA = ";
    LamaParkir(c_masuk, c_keluar, waktu);
    cout<<"BAYAR PARKIR = ";
    BayarParkir(c_masuk, c_keluar, waktu);

}
int ParkirMasuk(clock_masuk w){
    return (w.jam*3600)+(w.menit*60)+ w.detik;
}
int ParkirKeluar(clock_keluar w){
    return (w.jam*3600)+(w.menit*60)+w.detik;
}

void LamaParkir(clock_masuk c_masuk, clock_keluar c_keluar, Waktu waktu){
    int detikLama = ParkirKeluar(c_keluar) - ParkirMasuk(c_masuk);
    
    waktu.jam = detikLama/3600;
    waktu.menit = (detikLama % 3600)/60;
    waktu.detik = (detikLama % 3600)%60;
    cout<<waktu.jam<<":"<<waktu.menit<<"."<<waktu.detik<<" WIB"<<endl;
}

void BayarParkir(clock_masuk c_masuk, clock_keluar c_keluar, Waktu waktu){
    int detikLama = ParkirKeluar(c_keluar) - ParkirMasuk(c_masuk);
    waktu.jam = detikLama/3600;
    waktu.menit = (detikLama % 3600)/60;
    waktu.detik = (detikLama % 3600)%60;

     if(waktu.jam >= 0){
        for(int i = 3; i < waktu.jam;i++){
           if(waktu.jam >= i && waktu.jam <= i + 1 && waktu.menit > 0 && waktu.menit <= 60 && waktu.detik == 0 && waktu.detik < 60){
            cout << 4000 + (waktu.jam - 2) * 2000;
           }
        }
        if(waktu.jam >= 2 && waktu.jam <= 3 && waktu.menit > 0 && waktu.menit <= 60 && waktu.detik == 0 && waktu.detik < 60){
            cout << 5000;
        }else if(waktu.jam >= 1 && waktu.jam <= 2 && waktu.menit > 0 && waktu.menit <= 60 && waktu.detik == 0 && waktu.detik < 60){
            cout << 4000;
        }else if(waktu.menit > 0 && waktu.menit <= 60 && waktu.detik == 0 && waktu.detik <= 60){
            cout << 2000;
        }else if(waktu.jam >= 3 && waktu.menit == 0 && waktu.detik == 0){
            cout << 4000 + (waktu.jam - 2) * 1000;
        }else{
            cout << waktu.jam * 2000;
        }
}
}

