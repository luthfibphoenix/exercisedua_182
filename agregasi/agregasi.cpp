#include <iostream>
#include <vector>
#include "buku.h"
#include "pengarang.h"
using namespace std;

int main() {
	pengarang* varPengarang1 = new pengarang("Joko");
	pengarang* varPengarang2 = new pengarang("Lia");
	pengarang* varPengarang3 = new pengarang("Asroni");
	pengarang* varPengarang4 = new pengarang("Giga");
	buku* varBuku1 = new buku("Fisika");
	buku* varBuku2 = new buku("Algoritma");
	buku* varBuku3 = new buku("Basisdata"); 
	buku* varBuku4 = new buku("Dasar Pemrograman");
	buku* varBuku5 = new buku("Matematika");
	buku* varBuku6 = new buku("FMultimedia1");

	varPengarang1->tambahBuku(varBuku1);
	varPengarang1->tambahBuku(varBuku2);
	varPengarang2->tambahBuku(varBuku3);
	varPengarang3->tambahBuku(varBuku4);
	varPengarang4->tambahBuku(varBuku5);
	varPengarang4->tambahBuku(varBuku6);

	varPengarang1->cetakBuku();
	varPengarang2->cetakBuku();
	varPengarang3->cetakBuku();
	varPengarang4->cetakBuku();

	return 0;
}