#include <iostream>
#include <exception>
// untuk obyek exception yang akan digunakan
#include <array>
//untuk obyek array yang akan digunakan
using namespace std;

int main() {
    cout << "Awal Program" << endl; // penanda 1:...
    try {
        array<int, 3> data = { 1, 2, 3 };
        // pesan array integer 3 elemen
        //vout<<data.at[5]<<endl;
        //memanggil array elemen ke 5
        cout << data.at(5) << endl;
    }
   

}