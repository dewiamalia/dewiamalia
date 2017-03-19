#include <iostream>
#include <string.h>
using namespace std;

class perpustakaan{
public:
	//atribute
	string judulBuku;
	string Pengarang;
	//method
	string getjudulBuku(){
	return judulBuku;
	}
	string getPengarang(){
	return Pengarang;
	}
};
void teknologi(){
	//kategoriTeknologi
	perpustakaan tek1;
	perpustakaan tek2;
	perpustakaan tek3;
	perpustakaan tek4;
	perpustakaan tek5;
	perpustakaan tek6;
	perpustakaan tek7;
	
	//pengisian kategori Teknologi
	tek1.judulBuku="Basis Data";
	tek1.Pengarang="Fathansyah";
	
	tek2.judulBuku="Jaringan Komputer";
	tek2.Pengarang="Kholili \n	      Fatimah";

	tek3.judulBuku="Arsitektur dan Organisasi Komputer";
	tek3.Pengarang="Akbar";

	tek4.judulBuku="Teknologi Masa Depan";
	tek4.Pengarang="Ikhwan \n	      Akhwan";

	tek5.judulBuku="Design Web";
	tek5.Pengarang="Syafii";

	tek6.judulBuku="HTML";
	tek6.Pengarang="Imam";

	tek7.judulBuku="Mahir Microsoft";
	tek7.Pengarang="Fitrah \n	      Ilalang";

cout<<"1.Judul Buku: "<<tek1.getjudulBuku()<<endl
	<<"   Pengarang :"<<tek1.getPengarang()<<endl;
cout<<"2.Judul Buku: "<<tek2.getjudulBuku()<<endl
	<<"   Pengarang :"<<tek2.getPengarang()<<endl;
cout<<"3.Judul Buku: "<<tek3.getjudulBuku()<<endl
	<<"   Pengarang :"<<tek3.getPengarang()<<endl;
cout<<"4.Judul Buku: "<<tek4.getjudulBuku()<<endl
	<<"   Pengarang :"<<tek4.getPengarang()<<endl;
cout<<"5.Judul Buku: "<<tek5.getjudulBuku()<<endl
	<<"   Pengarang :"<<tek5.getPengarang()<<endl;
cout<<"6.Judul Buku: "<<tek6.getjudulBuku()<<endl
	<<"   Pengarang :"<<tek6.getPengarang()<<endl;
cout<<"7.Judul Buku: "<<tek7.getjudulBuku()<<endl
	<<"   Pengarang :"<<tek7.getPengarang()<<endl;
}
int main(){
	int pilihan;
	cout<<"================================="<<endl;
	cout<<"	    Data Buku Perpustakaan      "<<endl;
	cout<<"================================="<<endl;
	cout<<"1. Teknologi\n"
		<<"2. Sejarah\n"
		<<"3. Agama\n"
		<<"4. Filsafat\n"
		<<"5. Fiksi\n"
		<<"6. Politik\n"
		<<"7. Psikologi";
	cout<<"Masukkan pilihan :\n":
	cin>>pilihan;
	switch(pilihan){
		case 1:
			teknologi();break;
		case 2:
			sejarah();break;
		case 3:
			agama();break;
		case 4:
			filsafat();break;
return 0;
}
	


