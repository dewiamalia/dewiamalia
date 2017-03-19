#include <iostream>
#include <string.h>
using namespace std;

class perpustakaan{
privat:

public:
class teknologi{
public:
	//atribute
	string idBuku;
	string judulBuku;
	string Penerbit;
	string Pengarang;
	string tahunTerbit;
	string jumlahBuku;
	string tanggalPengadaan;
	//method
	string getidBuku(){
	return idBuku;
	}
	string getjudulBuku(){
	return judulBuku;
	}
	string getPenerbit(){
	return Penerbit;
	}
	string getPengarang(){
	return Pengarang;
	}
	string gettahunTerbit(){
	return tahunTerbit;
	}
	string getjumlahBuku(){
	return jumlahBuku;
	}
	string gettanggalPengadaan(){
	return tanggalPengadaan;
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
	tek1.idBuku="301";
	tek1.judulBuku="Basis Data";
	tek1.Penerbit="Informatika";
	tek1.Pengarang="Fathansyah";
	tek1.tahunTerbit="Juli 2012";
	tek1.jumlahBuku="532 Halaman";
	tek1.tanggalPengadaan="1 Maret 2017";
	
	tek2.idBuku="302";
	tek2.judulBuku="Jaringan Komputer";
	tek2.Penerbit="Informatika";
	tek2.Pengarang="Kholili \n	      Fatimah";
	tek2.tahunTerbit="Juni 2011";
	tek2.jumlahBuku="400 halaman";
	tek2.tanggalPengadaan="1 Maret 2017";
	
	tek3.idBuku="303";
	tek3.judulBuku="Arsitektur dan Organisasi Komputer";
	tek3.Penerbit="Erlangga";
	tek3.Pengarang="Akbar";
	tek3.tahunTerbit="Maret 2012";
	tek3.jumlahBuku="307 Halaman";
	tek3.tanggalPengadaan="2 Maret 2017";
	
	tek4.idBuku="304";
	tek4.judulBuku="Teknologi Masa Depan";
	tek4.Penerbit="Pustaka";
	tek4.Pengarang="Ikhwan \n	      Akhwan";
	tek4.tahunTerbit="April 2013";
	tek4.jumlahBuku="200 Halaman";
	tek4.tanggalPengadaan="2 Maret 2017";
	
	tek5.idBuku="305";
	tek5.judulBuku="Design Web";
	tek5.Penerbit="Gramedia";
	tek5.Pengarang="Syafii";
	tek5.tahunTerbit="Januari 2012";
	tek5.jumlahBuku="108 Halaman";
	tek5.tanggalPengadaan="2 Maret 2017";

	tek6.idBuku="306";
	tek6.judulBuku="HTML";
	tek6.Penerbit="Pustaka";
	tek6.Pengarang="Imam";
	tek6.tahunTerbit="Mei 2011";
	tek6.jumlahBuku="403Halaman";
	tek6.tanggalPengadaan="2 Maret 2017";
	
	tek7.idBuku="307";
	tek7.judulBuku="Mahir Microsoft";
	tek7.Penerbit="Gramedia";
	tek7.Pengarang="Fitrah \n	      Ilalang";
	tek7.tahunTerbit="september 2014";
	tek7.jumlahBuku="210 Halaman";
	tek7.tanggalPengadaan="3 Maret 2017";

cout<<"1. ID Buku :"<<tek1.getidBuku()<<endl
	<<"   Judul Buku: "<<tek1.getjudulBuku()<<endl
	<<"   Jumlah Halaman :"<<tek1.getjumlahBuku()<<endl
	<<"   Penerbit :"<<tek1.getPenerbit()<<endl
	<<"   Pengarang :"<<tek1.getPengarang()<<endl
	<<"   Tahun Terbit :"<<tek1.gettahunTerbit()<<endl
	<<"   Tanggal Pengadaan :"<<tek1.gettanggalPengadaan()<<endl;
cout<<"2. ID Buku :"<<tek2.getidBuku()<<endl
	<<"   Judul Buku: "<<tek2.getjudulBuku()<<endl
	<<"   Jumlah Halaman :"<<tek2.getjumlahBuku()<<endl
	<<"   Penerbit :"<<tek2.getPenerbit()<<endl
	<<"   Pengarang :"<<tek2.getPengarang()<<endl
	<<"   Tahun Terbit :"<<tek2.gettahunTerbit()<<endl
	<<"   Tanggal Pengadaan :"<<tek2.gettanggalPengadaan()<<endl;
cout<<"3. ID Buku :"<<tek3.getidBuku()<<endl
	<<"   Judul Buku: "<<tek3.getjudulBuku()<<endl
	<<"   Jumlah Halaman :"<<tek3.getjumlahBuku()<<endl
	<<"   Penerbit :"<<tek3.getPenerbit()<<endl
	<<"   Pengarang :"<<tek3.getPengarang()<<endl
	<<"   Tahun Terbit :"<<tek3.gettahunTerbit()<<endl
	<<"   Tanggal Pengadaan :"<<tek3.gettanggalPengadaan()<<endl;
cout<<"4. ID Buku :"<<tek4.getidBuku()<<endl
	<<"   Judul Buku: "<<tek4.getjudulBuku()<<endl
	<<"   Jumlah Halaman :"<<tek4.getjumlahBuku()<<endl
	<<"   Penerbit :"<<tek4.getPenerbit()<<endl
	<<"   Pengarang :"<<tek4.getPengarang()<<endl
	<<"   Tahun Terbit :"<<tek4.gettahunTerbit()<<endl
	<<"   Tanggal Pengadaan :"<<tek4.gettanggalPengadaan()<<endl;
cout<<"5. ID Buku :"<<tek5.getidBuku()<<endl
	<<"   Judul Buku: "<<tek5.getjudulBuku()<<endl
	<<"   Jumlah Halaman :"<<tek5.getjumlahBuku()<<endl
	<<"   Penerbit :"<<tek5.getPenerbit()<<endl
	<<"   Pengarang :"<<tek5.getPengarang()<<endl
	<<"   Tahun Terbit :"<<tek5.gettahunTerbit()<<endl
	<<"   Tanggal Pengadaan :"<<tek5.gettanggalPengadaan()<<endl;
cout<<"6. ID Buku :"<<tek6.getidBuku()<<endl
	<<"   Judul Buku: "<<tek6.getjudulBuku()<<endl
	<<"   Jumlah Halaman :"<<tek6.getjumlahBuku()<<endl
	<<"   Penerbit :"<<tek6.getPenerbit()<<endl
	<<"   Pengarang :"<<tek6.getPengarang()<<endl
	<<"   Tahun Terbit :"<<tek6.gettahunTerbit()<<endl
	<<"   Tanggal Pengadaan :"<<tek6.gettanggalPengadaan()<<endl;
cout<<"7. ID Buku :"<<tek7.getidBuku()<<endl
	<<"   Judul Buku: "<<tek7.getjudulBuku()<<endl
	<<"   Jumlah Halaman :"<<tek7.getjumlahBuku()<<endl
	<<"   Penerbit :"<<tek7.getPenerbit()<<endl
	<<"   Pengarang :"<<tek7.getPengarang()<<endl
	<<"   Tahun Terbit :"<<tek7.gettahunTerbit()<<endl
	<<"   Tanggal Pengadaan :"<<tek7.gettanggalPengadaan()<<endl;
}
int main(){
	int pilihan;
	cout<<"================================="<<endl;
	cout<<"	    Data Buku Perpustakaan      "<<endl;
	cout<<"================================="<<endl;
	cout<<"1. Teknologi\n"<<"2. Sejarah\n"<<"3. Agama\n";
	cout<<"Masukkan pilihan :\n":
	cin>>pilihan;
	if(pilihan == 1){
	teknologi();
	}
	else if(pilihan == 2){
	sejarah();
	}
	else {
	agama();
	}
return 0;
}
	


