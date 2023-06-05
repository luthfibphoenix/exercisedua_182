#pragma once
#ifndef PENGARANG_H
#define PENGARANG_H
#include <iostream>
#include <vector>
#include "buku.h"
using namespace std;

class pengarang {
public:
	string nama;
	vector<buku*> daftar_buku;

	pengarang(string pNama) :nama(pNama) {
		cout << "Pengarang \"" << nama << "\" ada \n";
	}
	~pengarang() {
		cout << "Pengarang \"" << nama << "\" tidak ada\n";
	}
	void tambahBuku(buku*);
	void cetakBuku();
};
void pengarang::tambahBuku(buku* pBuku) {
	daftar_buku.push_back(pBuku);
}
void pengarang::cetakBuku() {
	cout << "Daftar buku yang dikarang \"" << this->nama "\":\n";
	for (auto& a : daftar_buku) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
#endif