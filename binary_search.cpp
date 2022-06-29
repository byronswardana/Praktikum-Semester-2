#include <iostream>
using namespace std;
int binary_search(int a[], int l, int r, int key) {
    while (l <= r) {
          int m = l + (r - l) / 2;
          if (key == a[m])
              return m;
          else if (key < a[m])
               r = m - 1;
          else
              l = m + 1;
          }
          return -1;
     }
int *bubble_sort(int a[],int n){
	int param;
	int y = n-2;
	while(y >= 0){
		int index = 0;
		while(index <= y){
			if(a[index] > a[index+1]){
				param = a[index];
				a[index] = a[index+1];
				a[index+1] = param;
						
			} 
			index++;
		}
		y--;
	}
	return a;
}
int main(int argc, char const* argv[]) {
    int n, key;
    cout << "Masukan banyak array: ";
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
    	cout<<endl<<"Masukan value array ke "<<i<<" :";
        cin >> a[i];
        }
    cout <<endl<< "Masukan angka yang ingin dicari : ";
    cin >> key;
    
    a = bubble_sort(a,n);
    int res = binary_search(a, 0, n - 1, key);
    if (res != -1)
       std::cout << key << "ditemukan " << endl;
    else
       std::cout << key << "tidak ditemukan" << endl;
    return 0;
}