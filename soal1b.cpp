#include <iostream>
using namespace std;

int main(){

    cout << "Array dua dimensi" << endl; // contoh array dua dimensi (2x2) :  A B
                                        //                                    C D
    int tes [5][4];
    for (int a = 0; a< 5; a++){
        for (int b = 0; b < 4; b++){
            cout << "Masukkan array baris ke-" << a+1 << " kolom ke-" << b+1 << " : ";
            cin >> tes[a][b];
        }
    }

    cout << "nilai baris pertama kolom kedua : " << tes[0][1] << endl;  // baris dimulai dari 0 karena index untuk baris adalah 0, 1 (baris 1 = 0, 1 = 2)
                                                                        // kolom dimulai dari 0 karena index untuk kolom adalah 0, 1, 2 (kolom 1 = 0, kolom 2 = 1, kolom 3 = 2)
    
    cout << "nilai semua array 2d : " << endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            cout << tes[i][j] << "    ";
        }
        cout << endl;
    } 

    cout << "rata rata per baris : " << endl;
    float rata = 0;
    float awal = 0;
    float jumlah = 0;
    int banyak = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
                if (banyak > 0){
                    awal = tes[i][j];
                    }
                    else{
                        jumlah = (awal + tes[i][j]);

                    }
                banyak++;
        }
        rata = jumlah/banyak;
        cout << rata << " ";
}
}