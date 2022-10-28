#include<iostream>
#include<iomanip>
using namespace std;

//fungis bold
ostream& bold_on(ostream& os){
    return os << "\e[1m";
}

ostream& bold_off(ostream& os){
    return os << "\e[0m";
}

struct mhs {
    string nama;
    string nim;
    string matkul;
    int nilai;
};

char grade(int n){
    if(n > 85){
        return 'A';
    } else if(n > 75 && n <= 85){
        return 'B';
    } else if(n > 65 && n <= 75){
        return 'C';
    } else if(n > 45 && n <= 65){
        return 'D';
    } else {
        return 'E';
    }
}

int main(){

    int n;
    cout << "\n===================================" << endl;
    cout << "##  Program Pendataan Mahasiswa  ##" << endl;
    cout << "===================================\n" << endl;
    cout << "Jumlah mahasiswa : ";cin >> n;
    mhs mahasiswa[n];

    cout << "=================================\n\n";

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i+1 << endl;
        cout << "Nama mahasiswa\t: ";
        cin >> mahasiswa[i].nama;
        cout << "Nim\t\t: "; 
        cin >> mahasiswa[i].nim;
        cout << "Mata kuliah\t: ";
        cin >> mahasiswa[i].matkul;
        cout << "Nilai\t\t: ";
        cin >> mahasiswa[i].nilai;
        cout << endl;
    }

    cout << "=================================" << endl;
	cout << "Output : " << endl;
	cout << "=================================" << endl << endl;

    cout << setw(8) << bold_on <<  "NAMA" << " | "; 
    cout << setw(7) << "NIM" << " | ";
    cout << setw(14) << "MATA KULIAH" << " | ";
    cout << setw(3) << "NILAI" << " | ";
    cout << setw(2) << "GRADE" << " | " << bold_off << endl;
    
    for (int j = 0; j < n; j++) {
        cout << setw(8) << mahasiswa[j].nama << " | "; 
        cout << setw(7) << mahasiswa[j].nim << " | ";
        cout << setw(14) << mahasiswa[j].matkul << " | ";
        cout << setw(3) << mahasiswa[j].nilai << "   | ";
        cout << setw(2) << grade(mahasiswa[j].nilai) << "    | " << endl;
    }
    cout << endl;
    
    return 0;
}
