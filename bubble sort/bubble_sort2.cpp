// #include <iostream>
// using namespace std;int main (){
    
//     int x[] ={5, 2, 1, 4};
//     int j = sizeof(x)/sizeof(*x);
//     int temp;

//     for(int i = 0; i < j; i++){
//         cout<<x[i]<<" ";
//     }
//     cout<<endl;

//     //proses sorting
//     for(int i = 0; i <j; i++){
//         for(int h = 0; h < j-1; h++){
//             if(x[h] > x[h+1]){
//                 temp = x[h];
//                 x[h] = x[h+1];
//                 x[h+1] =temp;
//             }
//         }
//         cout<<endl;
//         cout<<"tahap "<<i+1<< " : ";
//         for(int a = 0; a < j; a++){
//             cout<<x[a]<<" ";
//         }
//     }
//     cout<<endl;
//     cout<<endl;
//     cout<<"hasil : ";
//     for(int a = 0; a <j; a++){
//         cout<<x[a]<<" ";
//     }
// }

#include <iostream>
using namespace std;
int main (){
    
    int x[] = {5, 2, 1, 4};
    int j = sizeof(x)/sizeof(*x);
    int temp;

    for(int i = 0; i < j; i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;

    //proses sorting 
    for(int i = 0; i<j; i++){
        for(int h = 0; h < j-1; h++){
            if(x[h] > x[h+1]){
                temp = x[h];
                x[h] = x[h+1];
                x[h+1] = temp;
            }
        }
        cout<<endl;
        cout<<"tahap "<<i+1<<" : ";
        for(int a = 0; a<j; a++){
            cout<<x[a]<<" ";
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<"hasil : ";
    for(int a = 0; a <j; a++){
        cout<<x[a]<<" ";
    }
}