#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141592653589793;
double toRadian(double degree) {
    return degree * (PI / 180.0);
}

int main() {
    cout << "OPERATOR BASIC (A)" << endl;
    cout << "1. Penjumlahan \n2. Pengurangan\n3. Perkalian\n4. Pembagian\n" << endl;

    cout << "OPERATOR TRIGONOMETRI (B)" << endl;
    cout << "1. Sin\n2. Cos\n3. Tan\n" << endl;

    cout << "OPERATOR AKAR (C)" << endl;
    cout << "1. Akar\n" << endl;

    cout << "OPERATOR PANGKAT (D)" << endl;
    cout << "1. Eksponent \n" << endl;

    char pilihOp;
    cout << "Masukkan Operator mana yang Anda inginkan [A/B/C/D]: ";
    cin >> pilihOp;

    if (pilihOp == 'a') {
        int choice;
        cout << "Pilih Operator Basic Matematika (1 untuk penambahan, 2 untuk pengurangan, 3 untuk pengkalian, 4 untuk pembagian ): ";
        cin >> choice;

        double a, b;
        cout << "Nilai Pertama: ";
        cin >> a;
        cout << "Nilai Kedua: ";
        cin >> b;

        if (choice == 1) {
            cout << "Hasil Penjumlahan: " << a + b << endl;
        }
        else if (choice == 2) {
            cout << "Hasil Pengurangan: " << a - b << endl;
        }
        else if (choice == 3) {
            cout << "Hasil Perkalian: " << a * b << endl;
        }
        else if (choice == 4) {
            if (b != 0)
                cout << "Hasil Pembagian: " << a / b << endl;
            else
                cout << "Error: Pembagian dengan nol!" << endl;
        }
        else {
            cout << "Pilihan tidak valid!" << endl;
        }
    }
    else if (pilihOp == 'b') {
        double angle;
        char choice2;

        cout << "Masukkan Pilihan Operator Trigonometri [S/C/T]: ";
        cin >> choice2;

        cout << "Masukkan sudut dalam derajat: ";
        cin >> angle;

        double radian = toRadian(angle);

        if (choice2 == 's') {
            cout << "sin(" << angle << ") = " << sin(radian) << endl;
        }
        else if (choice2 == 'c') {
            cout << "cos(" << angle << ") = " << cos(radian) << endl;
        }
        else if (choice2 == 't') {
            cout << "tan(" << angle << ") = " << tan(radian) << endl;
        }
        else {
            cout << "Pilihan tidak valid!" << endl;
        }
    }
    else if (pilihOp == 'c') {
        int satu;
        cout << "Ketik Angka 1 Untuk Melanjutkan Dan Selain Angka 1 Untuk Stop : ";
        cin >> satu;

        if (satu == 1) {
            int akar;
            cout << "Masukan Nilai Akar : ";
            cin >> akar;
            double hasil = sqrt(akar);
            if (akar < 0) {
                cout << "Nilai Tidak Terdefinisi !!!" << endl;
            }
            else
            {
                cout << "Nilai Dari Akar " << "" << akar << " " << "Adalah : " << "" << hasil << endl;
            }
        }
    }
    else if (pilihOp == 'd') {
        int angka, pangkat, hasil = 1;
        cout << "Masukkan Angka : ";
        cin >> angka;
        cout << "Masukkan Pangkat : ";
        cin >> pangkat;
        for (int i = 0; i < pangkat; i++) {
            hasil *= pangkat;
        }
        cout << "Hasil Dari Perpangkatan Tersebut Adalah = " << hasil << endl;
    }
    else {
        cout << "Pilihan operator tidak valid!" << endl;
    }

    return 0;
}
