#include <iostream>
#include <cmath>
using namespace std;

void kalkulatorMatematika(){
    do{
        int opsi;
        cout << "\n=============Kalkulator Matematika=============" << endl;
        cout << "Daftar Opsi: " << endl;
        cout << "1. Kalkulator Penjumlahan" << endl;
        cout << "2. Kalkulator Pengurangan" << endl;
        cout << "3. Kalkulator Perkalian" << endl;
        cout << "4. Kalkulator Pembagian" << endl;
        cout << "5. Kalkulator Hasil Bagi" << endl;
        cout << "6. Kalkulator Pangkat" << endl;
        cout << "7. Kalkulator Akar Kuadrat" << endl;
        cout << "8. Kalkulator Faktorial" << endl;
        cout << "9. Kembali ke Menu Sebelumnya" << endl;
        cout << "Silahkan Pilih Opsi (1/2/3/4/5/6/7/8/9): ";
        cin >> opsi;

        system ("cls");
        if(opsi==1){
            float a, b, hasil;
            cout << "\n==================Penjumlahan==================" << endl;
            cout << "Masukkan Nilai A: ";
            cin >> a;
            cout << "Masukkan Nilai B: ";
            cin >> b;

            hasil = a+b;
            cout << "\nHasil penjumlahan adalah: " << hasil << endl;
        } else if(opsi==2){
            float a, b, hasil;
            cout << "\n==================Pengurangan==================" << endl;
            cout << "Masukkan Nilai A: ";
            cin >> a;
            cout << "Masukkan Nilai B: ";
            cin >> b;

            hasil = a-b;
            cout << "\nHasil pengurangan adalah: " << hasil << endl;
        } else if(opsi==3){
            float a, b, hasil;
            cout << "\n==============Perkalian==============" << endl;
            cout << "Masukkan Nilai A: ";
            cin >> a;
            cout << "Masukkan Nilai B: ";
            cin >> b;

            hasil = a*b;
            cout << "\nHasil perkalian adalah: " << hasil << endl;
        } else if(opsi==4){
            float a, b, hasil;
            cout << "\n===================Pembagian===================" << endl;
            cout << "Masukkan Nilai A: ";
            cin >> a;
            cout << "Masukkan Nilai B: ";
            cin >> b;

            hasil = a/b;
            cout << "\nHasil pembagian adalah: " << hasil << endl;
        } else if(opsi==5){
            int a, b, hasil;
            cout << "\n===================Hasil Bagi===================" << endl;
            cout << "Masukkan Nilai A: ";
            cin >> a;
            cout << "Masukkan Nilai B: ";
            cin >> b;

            hasil = a%b;
            cout << "\nHasil bagi " << a << " dengan " << b << " adalah: " << hasil << endl;
        } else if(opsi==6){
            long long a, b, hasil;
            cout << "\n====================Pangkat====================" << endl;
            cout << "Masukkan Nilai: ";
            cin >> a;
            cout << "Masukkan Pangkat: ";
            cin >> b;

            hasil = pow(a, b);
            cout << "\nHasil pangkat " << b << " dari " << a << " adalah: " << hasil << endl;
        } else if(opsi==7){
            float a, hasil;
            cout << "\n==================Akar Kuadrat==================" << endl;
            cout << "Masukkan Nilai: ";
            cin >> a;

            hasil = sqrt(a);
            cout << "\nAkar kuadrat dari " << a << " adalah: " << hasil << endl;
        } else if(opsi==8){
            int a, hasil=1;
            cout << "\n===================Faktorial===================" << endl;
            cout << "Masukkan Nilai: ";
            cin >> a;

            for(int i=1; i<=a; i++){
                hasil = hasil * i;
            }
            cout << "\nNilai faktorial dari " << a << " adalah: " << hasil << endl;
        } else if(opsi==9){
            break;
        } else{
            cout << "Opsi yang anda pilih tidak valid" << endl;
        }
    } while(true);
}

void kalkulatorUsia(){
    int tanggal, bulan, tahun;
    string kategori;
    cout << "\n=================Kalkulator Usia=================" << endl;
    cout << "Masukkan tanggal lahir (dd mm yyyy): ";
    cin >> tanggal >> bulan >> tahun;

    int tahunSekarang, bulanSekarang, tanggalSekarang;
    cout << "Masukkan tanggal hari ini (dd mm yyyy): ";
    cin >> tanggalSekarang >> bulanSekarang >> tahunSekarang;

    int selisihTahun = tahunSekarang - tahun;
    int selisihBulan = bulanSekarang - bulan;
    int selisihHari = tanggalSekarang - tanggal;

    if(selisihBulan < 0 || (selisihBulan == 0 && selisihHari < 0)) {
        selisihTahun--;
        selisihBulan += 12;
    }

    if(selisihTahun < 17) {kategori = "Anak-anak";
    } else if(selisihTahun < 25 && selisihTahun >= 17){
        kategori = "Remaja";
    } else if(selisihTahun < 50 && selisihTahun >= 25){
    kategori = "Dewasa";
    } else if(selisihTahun < 60 && selisihTahun >= 50){
        kategori = "Orang tua";
    } else if(selisihTahun < 80 && selisihTahun >= 60){
        kategori = "Lansia";
    } else{kategori = "Tidak terdefinisi";
    }

    cout << "\nUsia Anda adalah " << selisihTahun << " tahun, " << selisihBulan << " bulan, dan " << selisihHari << " hari." << endl;
    cout << "Anda termasuk kategori: " << kategori << "." << endl;
}

void kalkulatorSuhu(){
    float suhu;
    char skalaAwal, skalaTujuan;
    cout << "\n============Kalkulator Konversi Suhu============" << endl;
    cout << "Masukkan suhu: ";
    cin >> suhu;

    cout << "Skala Suhu: " << endl;
    cout << "1. Celcius" << endl;
    cout << "2. Fahrenheit" << endl;
    cout << "3. Kelvin" << endl;
    cout << "4. Reamur" << endl;
    cout << "Masukkan skala awal (C/F/K/R): ";
    cin >> skalaAwal;
    cout << "Masukkan skala tujuan (C/F/K/R): ";
    cin >> skalaTujuan;

    if(skalaAwal == 'C' || skalaAwal == 'c' && skalaTujuan == 'F' || skalaTujuan == 'f') {
        suhu = (suhu * 9/5) + 32;
    } else if(skalaAwal == 'C' || skalaAwal == 'c' && skalaTujuan == 'K' || skalaTujuan == 'k') {
        suhu = suhu + 273.15;
    } else if(skalaAwal == 'C' || skalaAwal == 'c' && skalaTujuan == 'R' || skalaTujuan == 'r') {
        suhu = suhu * 4/5;
    } else if(skalaAwal == 'F' || skalaAwal == 'f' && skalaTujuan == 'C' || skalaTujuan == 'c') {
        suhu = (suhu - 32) * 5/9;
    } else if(skalaAwal == 'F' || skalaAwal == 'f' && skalaTujuan == 'K' || skalaTujuan == 'k') {
        suhu = (suhu + 459.67) * 5/9;
    } else if(skalaAwal == 'F' || skalaAwal == 'f' && skalaTujuan == 'R' || skalaTujuan == 'r') {
        suhu = (suhu - 32) * 4/9;
    } else if(skalaAwal == 'K' || skalaAwal == 'k' && skalaTujuan == 'C' || skalaTujuan == 'c') {
        suhu = suhu - 273.15;
    } else if(skalaAwal == 'K' || skalaAwal == 'k' && skalaTujuan == 'F' || skalaTujuan == 'f') {
        suhu = (suhu * 9/5) - 459.67;
    } else if(skalaAwal == 'K' || skalaAwal == 'k' && skalaTujuan == 'R' || skalaTujuan == 'r') {
        suhu = (suhu - 273.15) * 4/5;
    } else if(skalaAwal == 'R' || skalaAwal == 'r' && skalaTujuan == 'C' || skalaTujuan == 'c') {
        suhu = suhu * 5/4;
    } else if(skalaAwal == 'R' || skalaAwal == 'r' && skalaTujuan == 'F' || skalaTujuan == 'f') {
        suhu = (suhu * 9/4) + 32;
    } else if(skalaAwal == 'R' || skalaAwal == 'r' && skalaTujuan == 'K' || skalaTujuan == 'k') {
        suhu = (suhu * 5/4) + 273.15;
    } else if(skalaAwal != skalaTujuan) {
        cout << "Konversi tidak valid." << endl;
    }

    cout << "\nHasil konversi: " << suhu << " " << skalaTujuan << endl;
}

void kalkulatorBilangan(){
    do{
        int opsi;
        int angka;
        cout << "\n==========Kalkulator Konversi Bilangan==========" << endl;
        cout << "Daftar Opsi: " << endl;
        cout << "1. Desimal ke Biner" << endl;
        cout << "2. Desimal ke Oktal" << endl;
        cout << "3. Desimal ke Heksadesimal" << endl;
        cout << "4. Kembali ke Menu Sebelumnya" << endl;
        cout << "Silahkan Pilih Opsi (1/2/3/4): ";
        cin >> opsi;

        cout << "Masukkan angka desimal: ";
        cin >> angka;

        int arr[100], basis, i = 0;
        string nama;

        if(opsi == 1){
            basis = 2;
            nama = "biner";
        } else if(opsi == 2){
            basis = 8;
            nama = "oktal";
        } else if(opsi == 3){
            basis = 16;
            nama = "heksadesimal";
        } else if(opsi == 4){
            return;
        } else{
            cout << "Opsi yang anda pilih tidak valid" << endl;
            continue;
        }

        cout << "\nDalam bentuk " << nama << ": ";

        while (angka > 0) {
            arr[i] = angka % basis;
            angka = angka / basis; 
            i++;
        } for (int j = i - 1; j >= 0; j--) {
            int digit = arr[j];
            if(digit < 10)
                cout << digit;
            else
                cout << char('A' + digit - 10);
        } cout << endl;
    } while(true);
}

void kalkulatorBMI(){
    float beratBadan, tinggiBadan;
    string kategori;
    cout << "\n=================Kalkulator BMI=================" << endl;
    cout << "Silahkan Input Berat Badan (kg): ";
    cin >> beratBadan;
    cout << "Silahkan Input Tinggi Badan (cm): ";
    cin >> tinggiBadan;

    float tinggi = tinggiBadan/100;
    float bmi = beratBadan / pow(tinggi, 2);

    if(bmi < 17.0) {kategori = "Kurus (Kekurangan berat badan tingkat berat)";
    } else if(bmi >= 17.0 && bmi <= 18.4){
        kategori = "Kurus (Kekurangan berat badan tingkat ringan)";
    } else if(bmi >= 18.5 && bmi <= 25.0){
        kategori = "Normal";
    } else if(bmi >= 25.1 && bmi < 27.0){
        kategori = "Gemuk (kelebihan berat badan tingkat ringan)";
    } else if(bmi > 27.0){
        kategori = "Gemuk (kelebihan berat badan tingkat berat)";}

    cout << "\nBMI Anda Adalah: " << bmi << endl;
    cout << "Anda Termasuk Kategori: " << kategori <<endl;
}

int main(){
    system ("cls");
    cout << "Nama \t\t: Andiko Ramadani\n";
    cout << "NIM \t\t: 3337230003\n";
    cout << "Prodi \t\t: Informatika (C)\n";
    cout << "Mata Kuliah \t: Dasar Pemrograman\n";
    cout << "Program \t: Calcify (Kalkulator Multi Fungsi)" << endl; 
    do{
        int menu;
        cout << "\n====================Calcify====================" << endl;
        cout << "Daftar Menu: " << endl;
        cout << "1. Kalkulator Matematika Sederhana" << endl;
        cout << "2. Kalkulator Usia" << endl;
        cout << "3. Kalkulator Konversi Suhu" << endl;
        cout << "4. Kalkulator Konversi Bilangan" << endl;
        cout << "5. Kalkulator BMI" << endl;
        cout << "6. Keluar dari program" << endl;
        cout << "Silahkan Pilih Menu (1/2/3/4/5/6): ";
        cin >> menu;

        if(menu==1){
            system ("cls");
            kalkulatorMatematika();
        } else if(menu==2){
            system ("cls");
            kalkulatorUsia();
        } else if(menu==3){
            system ("cls");
            kalkulatorSuhu();
        } else if(menu==4){
            system ("cls");
            kalkulatorBilangan();
        } else if(menu==5){
            system ("cls");
            kalkulatorBMI();
        } else if(menu==6){
            return 0;
        } else{
            cout << "Menu yang anda pilih tidak valid" << endl;
        }
    } while(true);
    return 0;
}