/* TUGAS METODE NUMERIK SIE A - RIANA ANGGRA KUSUMAH - 3411151055 */


#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>

 int hasil;
 
 int tambah(int x, int y);

 int kurang(int x, int y);
 
 int kali(int x, int y);
 
 int fungsi(int x);
 
 void menu();

 
 main()
 {
 	int pil,x,y;
	menu();
	getch();
 }
 
 void menu(){
 	system("cls");
 	int pil,x,y;
 	while(pil!=5)
 	{
 		printf("\n|--------------------------------|");
 		printf("\n|             MENU               |");
 		printf("\n|--------------------------------|");
		printf("\n|       1. Penjumlahan           |");
		printf("\n|--------------------------------|");
		printf("\n|       2. Pengurangan           |");
		printf("\n|--------------------------------|");
		printf("\n|       3. Perkalian             |");
		printf("\n|--------------------------------|");
		printf("\n|       4. Pangkat               |");
		printf("\n|--------------------------------|");
		printf("\n|       5. Fungsi                |");
		printf("\n|--------------------------------|"); 
		printf("\n      Masukkan Pilihan :");
		scanf("%d",&pil);
		switch(pil)
		{
			case 1 : system("cls");
					 printf("\n|----------------------------------|");
					 printf("\n|           Penjumlahan            |");
					 printf("\n|----------------------------------|");
					 printf("\n   Silahkan Masukkan Nilai x : " );
					 scanf("%d",&x);
					 printf("\n            Masukkan Nilai y : " );
					 scanf("%d",&y); 
					 hasil=tambah(x,y);
					 printf("\n       Hasil Penjumlahan = %d",hasil);
					 printf("\n");
					 break;
					 
			case 2 : system("cls");
					 printf("\n|----------------------------------|");
					 printf("\n|           Pengurangan            |");
					 printf("\n|----------------------------------|");
					 printf("\n   Silahkan Masukkan Nilai x : " );
					 scanf("%d",&x);
					 printf("\n            Masukkan Nilai y : " );
				     scanf("%d",&y); 
					 hasil=kurang(x,y);
					 printf("\n       Hasil Pengurangan = %d",hasil);
					 printf("\n");
					 break;
					 
			case 3 : system("cls");
					 printf("\n|----------------------------------|");
					 printf("\n|            Perkalian             |");
					 printf("\n|----------------------------------|");
					 printf("\n   Silahkan Masukkan Nilai x : " );
					 scanf("%d",&x);
					 printf("\n   Silahkan Masukkan Nilai y : " );
				     scanf("%d",&y); 
					 hasil=kali(x,y);
					 printf("\n       Hasil Perkalian = %d",hasil);
					 printf("\n");
					 break;
					 
			case 4 : system("cls");
					 printf("\n|----------------------------------|");
					 printf("\n|           Perpangkatan           |");
					 printf("\n|----------------------------------|");
   					 printf("\n   Silahkan Masukkan Nilai x : " );
   					 scanf("%d",&x);
   					 printf("\n   Silahkan Masukkan Nilai y : " );
   					 scanf("%d",&y);
   					 hasil = pow(x,y);
   					 printf("\n       Hasil Perpangkatan = %d",hasil);  				 
					 break;
					 
			case 5 : system("cls");
					 printf("\n|----------------------------------|");
					 printf("\n|          Fungsi X / F(x)         |");
					 printf("\n|----------------------------------|");
					 printf("\n   Silahkan Masukkan Nilai x : " );
					 scanf("%d",&x); 
					 hasil = fungsi(x);
					 printf("\n       Hasil F(x) = %d", hasil);
					 break;
					 
			default : printf("Pilihan anda tidak terdaftar dalam menu");
			
		}
 	}
 }
 
 int tambah(int x, int y)
 {
 	hasil=x+y;
 	return hasil;
 }
 int kurang(int x, int y)
 {
 	hasil=x-y;
 	return hasil;
 }
 int kali(int x, int y)
 {
 	hasil=x*y;
 	return hasil;
 }
int fungsi(int x)
 {	
 	hasil = 2*(x*x)-(3*x)+1;
 	return hasil;
 }
 
