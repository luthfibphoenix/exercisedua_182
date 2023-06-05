#pragma once
#ifndef BUKU_H
#define BUKU_H

class buku {
public:
	string nama;
	buku(string pBuku) :nama(pBuku) {
		cout << "Buku \"" << nama << "\" ada\n";
	}
	~buku() {
		cout << "Buku \"" << nama << "\" tidak ada\n";
	}
};
#endif