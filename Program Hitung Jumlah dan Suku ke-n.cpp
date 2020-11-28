// Program menghitung jumlah dan suku ke-n

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	
	//   penggunaan variabel
	float a;
	float b;
	float n;
	float hasil1;
	float hasil2;
	string boolean;
	
	
	// ============== Header=================
	cout <<"\t\t\t     Nama :Rizky Adi Ryanto\n  "
	     <<"\t\t\t     Nim  :********  "
	     <<"\t\t\t     Prodi:Teknik Informatika\n\n"<<endl;
	cout <<"\t\t\t ====Pogram Hitung Suku ke-N====\n\n";
	
	
	// inputan dari user
	cout <<"Masukan Suku Pertama         :";
	cin  >>a;
	cout <<"Masukan beda/selisih bilangan:";
	cin  >>b;
	cout <<"Masukan Suku ke-N            :";
	cin  >>n;
	
	// Rumus Suku ke-N
	hasil1 = a+(n-1)*b;
	cout <<"Suku ke-N adalah :"<< hasil1 << endl;
	
	cout <<"\n";
	cout <<"Ingin Lanjut Menghitung Jumlah Suku ke-N (y/t) :";
	cin  >>boolean;
	
	// penggunaan if dan else
	if(boolean =="y")
	{
		
		cout <<"\n";
		cout <<"Masukan Suku Pertama :";
		cin  >>a;
		cout <<"Masukan Suku ke-N    :";
		cin  >>n;
		
		hasil2 = n/2*(a+hasil1);
		cout <<"Jumlah dari suku ke-N adalah :"<< hasil2 << endl;
		
		
	}
	// else if(boolean) 
	else{
		
		cout <<"\nSemoga Bermanfaat ^_^"<< endl;
		
	}
	
	
	cout <<"\n\n\n";
	cout <<"\t\t\t     design by RIZKY ADI RYANTO    "<< endl;
	
	
getch();
return 0;
}
