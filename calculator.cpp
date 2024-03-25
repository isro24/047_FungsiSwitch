#include <iostream>
using namespace std;

int bilSatu, bilDua;

void input(){
    cout << "Masukkan Bilangan Pertama : ";
    cin >> bilSatu;
    cout << "Masukkan Bilangan Kedua : ";
    cin >> bilDua;
}

float Penjumlahan(float a, float b){
    return a + b;
}

float Pengurangan(float a, float b){
    return a - b;
}

float Perkalian(float a, float b){
    return a * b;
}

float Pembagian(float a, float b){
    return a / b;
}

int main(){
    int pilihan;

    do{
        cout << "===============================" << endl;
        cout << "MENU" << endl;
        cout << "1. Penjumlahan " << endl;
        cout << "2. Pengurangan " << endl;
        cout << "3. Perkalian " << endl;
        cout << "4. Pembagian " << endl;
        cout << "5. Exit " << endl;
        cout << "Masukkan Pilihan 1/2/3/4/5 : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            input();
            cout << "Hasil Penjumlahan = " << Penjumlahan(bilSatu, bilDua) << endl;
            break;
        case 2:
            input();
            cout << "Hasil Pengurangan = " << Pengurangan(bilSatu, bilDua) << endl;
            break;
        case 3:
            input();
            cout << "Hasil Perkalian = " << Perkalian(bilSatu, bilDua) << endl;
            break;
        case 4:
            input();
            cout << "Hasil Pembagian = " << Pembagian(bilSatu, bilDua) << endl;
            break;
        case 5:
            break;
        default:
            cout << "Pilihan Anda Tidak Ada" << endl;
            break;
        }

    }while(pilihan != 5 );
}
