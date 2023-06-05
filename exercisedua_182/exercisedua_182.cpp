#include <iostream>
#include <vector>
using namespace std;

class penerbit;
class pengarang {
public:
	string nama;
	vector<penerbit*> daftar_penerbit;
	pengarang(string pNama) :nama(pNama) {
		cout << "Pengarang \"" << nama << "\" ada\n";
	}
	~pengarang() {
		cout << "Pengarang \"" << nama << "\" tidak ada\n";
	}
	void tambahPenerbit(penerbit*);
	void cetakPenerbit();
};

class penerbit {
public:
	string nama;
	vector<pengarang*> daftar_pengarang;

	penerbit(string pNama) :nama(pNama) {
		cout << "Penerbit \"" << nama << "\" ada\n";
	}
	~penerbit() {
		cout << "Penerbit \"" << nama << "\" tidak ada\n";
	}

	void tambahPengarang(pengarang*);
	void cetakPengarang();
};

void pengarang::tambahPenerbit(penerbit* pPenerbit) {
	daftar_penerbit.push_back(pPenerbit);
}

void pengarang::cetakPenerbit() {
	cout << "Daftar penerbit yang menerbitkan buku \"" << this->nama << "\":\n";
	for (auto& a : daftar_penerbit) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

void penerbit::tambahPengarang(pengarang* pPengarang) {
	daftar_pengarang.push_back(pPengarang);
	pPengarang->tambahPenerbit(this);
}

void penerbit::cetakPengarang() {
	cout << "Daftar buku yang diterbitkan \"" << this->nama << "\":\n";
	for (auto& a : daftar_pengarang) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

int main() {
	penerbit* varPenerbit1 = new penerbit("Gama Press");
	penerbit* varPenerbit2 = new penerbit("Intan Pariwara");
	pengarang* varPengarang1 = new pengarang("Giga");
	pengarang* varPengarang2 = new pengarang("Asroni");
	pengarang* varPengarang3 = new pengarang("Lia");
	pengarang* varPengarang4 = new pengarang("Joko");

	varPenerbit1->tambahPengarang(varPengarang4);
	varPenerbit1->tambahPengarang(varPengarang3);
	varPenerbit1->tambahPengarang(varPengarang1);
	varPenerbit2->tambahPengarang(varPengarang2);
	varPenerbit2->tambahPengarang(varPengarang1);

	varPenerbit1->cetakPengarang();
	varPenerbit2->cetakPengarang();
	varPengarang1->cetakPenerbit();
	varPengarang2->cetakPenerbit(); 
	varPengarang3->cetakPenerbit(); 
	varPengarang4->cetakPenerbit();

	delete varPengarang1;
	delete varPengarang2; 
	delete varPengarang3; 
	delete varPengarang4;  
	delete varPenerbit1;
	delete varPenerbit2;

	return 0;
}