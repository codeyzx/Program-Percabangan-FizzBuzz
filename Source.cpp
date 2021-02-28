/**
    * Instruksi
    * Buat sebuah program yang meng-output angka dari 1 sampe 100 untuk angka kelipatan 3 output 'Fizz'
      dan untuk angka kelipatan 5 output 'Buzz' jika kelipatan 3 dan 5 output 'FizzBuzz'
 */


#include <iostream>
using namespace std;

int jumlah;
char select;

void repeat();

int main() {
    repeat();
    cout << "\ningin menggunakan program-nya lagi? [y/n]" << endl;
    cin >> select;
    system("cls");


    while (select == 'y' || select == 'Y') {
        repeat();
        cout << "\ningin menggunakan program-nya lagi? [y/n]" << endl;
        cin >> select;
        system("cls");
    }

    if (select == 'n' || select == 'N') {
        cout << "Terimakasih" << endl;
    }

    cin.get();
    cin.get();
    return 0;
}

void repeat() {
    cout << "Masukkan jumlah yang diinginkan : ";
    cin >> jumlah;
    cout << endl;
    for (int i = 1; i <= jumlah; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        }
        else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        }
        else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        }
        else {
            cout << i << endl;
        }
    }
}