#include <stdio.h>
#include <stdlib.h>

int main()
{   int kecepatan = 50;
    int waktu = 3;
    int jarak;

    jarak = kecepatan * waktu;

    printf("jarak adalah %d km", jarak);
    return 0;
}

=======================================

#include <stdio.h>
#include <stdlib.h>

int main()
{   int kecepatan;
    int waktu;
    int jarak;

    printf("masukkan kecepatan km/jam ");
    scanf("%d", &kecepatan);

    printf("masukkan waktu tempuh ");
    scanf("%d", &waktu);

    jarak = kecepatan * waktu;
    
    printf("jarak adalah %d km", jarak);
    return 0;
}

========================================

#include <stdio.h>
#include <stdlib.h>

int main()
{   int kecepatan;
    int waktu;
    int jarak;

    printf("masukkan kecepatan \(km/jam\) ");
    scanf("%d", &kecepatan);

    printf("masukkan waktu tempuh ");
    scanf("%d", &waktu);

    jarak = kecepatan * waktu;

    printf("jarak adalah %d km", jarak);
    return 0;
}
===============================================

#include <stdio.h>
#include <stdlib.h>

int main()
{   float kecepatan;
    float waktu;
    float jarak;

    printf("Masukkan kecepatan rata-rata \(km/jam\): ");
    scanf("%f", &kecepatan);

    printf("Masukkan waktu tempuh \(jam\) : ");
    scanf("%f", &waktu);

    jarak = kecepatan * waktu;

    printf("Jarak yang ditempuh adalah %f km", jarak);
    return 0;
}
=========================================================

#include <stdio.h>
#include <stdlib.h>

int main()
{   int nangka;
    int pisang;
    float kecepatan;
    float jarak;
    int total_buah;
    float waktu;

    printf("buah nangka sebanyak ");
    scanf("%d", &nangka);

    printf("buah pisang sebanyak ");
    scanf("%d", &pisang);

    total_buah = nangka + pisang;

    printf("kecepatan \(km/jam\) : ");
    scanf("%f", &kecepatan);

    printf("jarak \(km\) : ");
    scanf("%f", &jarak);

    waktu = jarak / kecepatan;

    printf("mobil berisi total %d buah-buahan menghabiskan waktu perjalanan selama %f jam ", total_buah, waktu);
    return 0;
}

========================================================================================================================

#include<stdio.h>
#include<stdlib.h>
#include <windows.h>

int main()
{   float kecepatan; /* variabel kecepatan dengan tipe data float */
    float waktu;  /* variable waktu dengan tipe data float */
    float jarak;  /* variable jarak dengan tipe data float */

    printf("Masukkan kecepatan rata-rata \(km/jam\): ");  /* cetak pesan input kecepatan */
    scanf("%f", &kecepatan); /* input user untuk kecepatan */

    printf("Masukkan waktu tempuh \(jam\) : ");  /* cetak pesan input waktu */
    scanf("%f", &waktu);  /* input user untuk waktu */

    jarak = kecepatan * waktu;  /* proses perhitungan jarak */

    system("cls");  /* clear screen */

    printf("Jarak yang ditempuh adalah %f km", jarak); /* output perhitungan jarak */

    return 0;
}


=============================================================================================

#include<stdio.h>
#include<stdlib.h>
#include <windows.h>

int main()
{   char nama[20]= {'s','e','l','l','a','f','e','b','r','i','a','n','a'};
    char nim[10]= {'6','7','2','0','2','2','2','8','4'};
    float nilai1;
    float nilai2;
    float nilai3;
    float rata;

    printf("masukkan nama: ");
    scanf("%[^\n]s", &nama);

    printf("masukkan nim: ");
    scanf("%s", &nim);

    printf("masukkan nilai1 :");
    scanf("%f", &nilai1);

    printf("masukkan nilai2: ");
    scanf("%f", &nilai2);

    printf("masukkan nilai3: ");
    scanf("%f", &nilai3);

    rata = nilai1 + nilai2 + nilai3 / 3;

    printf("\nnamaku %s, dengan nim %s, \nNilai rata-rataku adalah %f", nama, nim, rata);

    return 0;
}
==============================================================================================

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char barang1[20],barang2[20],barang3[20], persen ='%';
    int harga1,harga2,harga3,kali2,kali8,kali4,total,diskon,hemat;


    printf("=================KASIR====================");
    printf("\nMasukkan nama barang ke-1: ");
    scanf("%s", &barang1);
    printf("Masukkan harga barang ke-1: ");
    scanf("%i", &harga1);
    printf("\nMasukkan nama barang ke-2: ");
    scanf("%s", &barang2);
    printf("Masukkan harga barang ke-2: ");
    scanf("%i", &harga2);
    printf("\nMasukkan nama barang ke-3: ");
    scanf("%s", &barang3);
    printf("Masukkan harga barang ke-3: ");
    scanf("%i", &harga3);

    printf("\n\n\n\n============================================");
    kali2 = harga1 * 2;
    kali8 = harga2 * 8;
    kali4 = harga3 * 4;
    total = kali2 + kali8 + kali4;
    diskon = total * 30/100;
    hemat = total - diskon;
    printf("\nLIST PESANAN:");
    printf("\n1. %s harga setelah dikali 2 = Rp. %i", barang1,kali2);
    printf("\n2. %s harga setelah dikali 8 = Rp. %i", barang2,kali8);
    printf("\n3. %s harga setelah dikali 4 = Rp. %i", barang3,kali4);
    printf("\nHarga total adalah = %i", total);
    printf("\nHarga setelah di diskon 30%c adalah = %i",persen, diskon);
    printf("\nHarga yang di hemat adalah = Rp. %i", hemat);

    return 0;
}
=================================================================================
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char barang1[20],barang2[20],barang3[20];
    int harga1,harga2,harga3,kali2,kali8,kali4,total,hargasetelahdiskon,diskon;


    printf("=================KASIR====================");
    printf("\nMasukkan nama barang ke-1: ");
    gets(barang1);
    printf("Masukkan harga barang ke-1: ");
    scanf("%i%*c", &harga1);
    printf("\nMasukkan nama barang ke-2: ");
    gets(barang2);
    printf("Masukkan harga barang ke-2: ");
    scanf("%i%*c", &harga2);
    printf("\nMasukkan nama barang ke-3: ");
    gets(barang3);
    printf("Masukkan harga barang ke-3: ");
    scanf("%i%*c", &harga3);

    printf("\n\n\n\n============================================");
    kali2 = harga1 * 2;
    kali8 = harga2 * 8;
    kali4 = harga3 * 4;
    total = kali2 + kali8 + kali4;
    diskon = total * 30/100;
    hargasetelahdiskon = total - diskon;
    printf("\nLIST PESANAN:");
    printf("\n1. %s harga setelah dikali 2 = Rp. %i", barang1,kali2);
    printf("\n2. %s harga setelah dikali 8 = Rp. %i", barang2,kali8);
    printf("\n3. %s harga setelah dikali 4 = Rp. %i", barang3,kali4);
    printf("\n\nHarga total adalah = Rp. %i", total);
    printf("\nHarga setelah di diskon 30%% adalah = Rp. %i", hargasetelahdiskon);
    printf("\nHarga yang di hemat adalah = Rp. %i", diskon);

    return 0;
}
=======================================================================================

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i =0;
    while (i<5) //(kondisi)
    {
        printf("*"); //(program)
        i++;
    }

}

=========================================================

{
  int segitiga,a,b,c;

  printf("tinggi segitiga: ");
  scanf("%d",&segitiga);

  printf("\n");

  for(a=1; a<segitiga; a++)
    {

    for(b=1; b<=a; b++)
    {
      printf(" ");
    }

    for(c=2; c<=segitiga-a; c++)
    {
      printf(" *");
    }
    printf("\n");
  }
}
==============================================
#include <stdio.h>
#include <stdlib.h>

int main()
/*
{
    int i =0;
    while (i<5)
    {
        printf("&");
        i++;
    }

}
*/
/*
{
    int j = 0;
    do
    {
        printf("*");
        j++
        while (j<5);
    }
}
*/
/*
{
    for (int i = 0; i<5; i++)
    {
        //perulangan di dalam perulangan
        for (int j = 0; j<1; j++)
        {
            printf("sella");
        }
            printf("\n");
    }
}

{
    int panjang;
    printf("tentukan panjang: ");
    scanf("%d", &panjang);

    for (int a = 0; a< panjang; a++)
    {
        for (int b = 0; b <= a; b++)
        {
            printf("*");
        }
            printf("\n");

    }
}

{
    int gatau, gangerti;

    for (gatau=5; gatau>=1; gatau--)
    {
        for (gangerti=1;gangerti<=gatau;gangerti++)
        {
            printf("*");
        }
            printf("\n");
    }
}
*/
{
  char segitiga;
  int a,b,c;

  printf("masukkan variable: ");
  scanf("%c", &segitiga);
  printf("tinggi segitiga: ");
  scanf("%d",&c);

  printf("\n");

  for(a=0; a<segitiga; a++)
    {

    for (b=0;b<a;b++)
    printf(" ");
    for (b=a;b<c;b++)
    printf("%c", segitiga);
    for (b=a;b<c;b++)
    printf("%c", segitiga);
    printf("\n");

    }
}

====================================================================================================

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int v,y,hasil=1;
  printf("Masukkan input: ");
  scanf("%d", &y);

  printf("Faktorial dari %d! adalah= ", y);

  for (v=y;v>=2;v--)
  {
      printf("%dx", v);
  }
      printf("1 =");

  for (v=y;v>=1;v--)
  {
      hasil=hasil*v;

  }
      printf(" %d", hasil);
  return 0;
}

============================================================================================================

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int F,T,I;
    printf("Masukkan angka: ");
    scanf("%d", &I);

    for (F=1;F<=I;F++)
    {
        for (T=1;T<=F;T++)
            printf("*");
        for(T=2*I+1;T>=2*F;T--)
            printf(" ");
        for (T=1;T<=F;T++)
            printf("*");
            printf("\n");
    }
    for (F=1;F<=I;F++)
    {
        for (T=I;T>=F;T--)
            printf(" ");
        for (T=1;T<=2*F;T++)
            printf("*");
            printf("\n");
    }

}
=================================================================================================
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 7;
    if (num == 0)
    {
        printf("nilai nol");
    }
    else
    {
        if (num > 0)
        {
            printf("nilai positif");
        }
        else
        {
            printf("nilai negatif");
        }
    }
    return 0;
}
=============================================================================================
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menu = 4;
    printf("Pilih menu: ");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
        printf("menu 1");
        break;

    case 2:
        printf("menu 2");
        break;

    case 3:
        printf("menu 3");
        break;

    case 4:
        printf("menu 4");
        break;

    default:
        printf("menu tidak tersedia!");
        break;
    }
    return 0;
}
===========================================================================================

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nilai;
    printf("masukkan nilai: ");
    scanf("%d", &nilai);

    if (nilai>100||nilai<0)
    {
        printf("kesalahan: angka tidak valid");
    }
    else

        if (nilai<=100 && nilai>=90)
        {
            printf("nilai A");
        }

    else

        if (nilai<90 && nilai>=80)
        {
            printf("nilai B");
        }

    else

        if (nilai <80 && nilai>=70)
        {
            printf("nilai C");
        }

    else

        if (nilai<70 && nilai>=60)
        {
            printf("nilai D");
        }

    else
    {
        printf("nilai E");
    }



    return 0;
}
======================================================================================================
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ls=1, pilih,panjangnama,a;
    char nama[30], pw[30],nama2[30],itung,ulang,huruf;

    while(ls<100)
    {
    printf("Loading %d%%", ls);
    ls++;
    system("cls");
    }

    printf("Masukkan Username: ");
    gets(nama);
    printf("Masukkan Password: ");
    gets(pw);

    if(strcmp(nama,"Archon Moraxx")==0&&strcmp(pw,"6666")==0)
    {
        system("cls");
        do{system("cls");
     printf("1. Input nama");
     printf("\n2. Hitung panjang karakter nama");
     printf("\n3. String nama setelah scii ditambah 1");
     printf("\n4. Keluarkan program");
     printf("\n Pilihan: ");
     scanf("%i%*c", &pilih);

     switch (pilih)
     {
     case 1:
        printf("Masukkan nama anda: ");
        gets(nama2);
        printf("Halo %s", nama2);
        printf("\nSelamat datang di menu 1");
        break;
     case 2:
         itung=strlen(nama2);
         printf("Panjang string %s adalah %i karakter ", nama2,itung);
         break;
     case 3:
        printf("%s", nama2);
            printf("\nnama anda setelah dirubah\n");

            for(a=0; a<itung; a++)
            {
                if (nama2[a]=='z')
                huruf='a';
                else if (nama2[a]=='Z')
                    huruf='A';
                else
                    huruf=nama2[a]+1;
                printf("%c", huruf);
            }
        break;
     case 4:
        printf("Keluar dari program");
        exit(0);
     default:
        printf("Input salah");

     }
     printf("\nEnter untuk kembali");
     scanf("%c", &ulang);
     system("pause");
        }
        while(ulang!=4);

    }
    else
    {
        printf("salah\n");
    }
    return 0;
}
==============================================================================================
ANGKA SIAL
#include <stdio.h>
#include <stdlib.h>

int main()

{
    int f,b,sial=0;
    scanf("%d %d",&f,&b);

    for(int i=f;i<=b;i++)
    {
    if(i %10 == 3 || i %10 == 4)sial++;
    }
    {
    printf("%d\n",sial);
    }
}
=======================================================================================================
ANAK KADAL BERHITUNG
int masukan;
    scanf("%d",&masukan);

    if(masukan%2!=0)
    {
        for(int i=1;i<4;i++)
        {
            printf("%d\t",masukan+i*2);
        }
    }
    else
        if(masukan%2==0)
    {
        for(int i=masukan;i<masukan+5;i++)
        {
            i++;
            printf("%d\t", i);
        }
    }
	
================================================================================================
#include <stdio.h>

int faktorial (int);
int main()
{
    int a,b;
    printf("Masukkan angka faktorial: ");
    scanf("%d", &a);
    b=faktorial(a);
    printf("faktorial %d!! = %d",a,b);
}
int faktorial(int a)
{
    if (a==1)
    {
        return a;
    }
    else if (a%2==0)
    {
        return (a/2)*faktorial(a-1);
    }
    else
    {
        return a*faktorial(a-1);
    }
}
=============================================================================
int a=0, CekUlang=1,benar=0;
    char ch,username[20],password[20];

    printf("Login\n\n");
    printf("Username: ");
    scanf("%[^\n]", &username);
    printf("Password: ");
    gets(password);

    while((ch=(char)_getch()) != '\r'){
        password[a]=ch;
        printf("*");
        a++;
    }
    printf("\n");


    if((strcmp(username,"fti")==0) && (strcmp(password,"fti")==0))
        {printf("Anda boleh masuk");}
    else
    {
        printf("Heh kamu orang asing!");
        exit(0);
    }


    system("cls");
===============================================================================
#include<stdio.h>

void main()
{
    system("color E0");

    int i,pilih,saldo;
    char KiriAtas,KananAtas,KiriBawah,KananBawah,Vertical,Horizontal,pertigaankiri,pertigaankanan,nama[20],ulang;

    KiriAtas = 201;
    KiriBawah = 200;
    KananAtas = 187;
    KananBawah = 188;
    Vertical = 186;
    Horizontal = 205;
    pertigaankiri = 204;
    pertigaankanan = 185;
do{ system("cls");
    printf("\n\n\n\n\n\n\n");

    printf("\t\t\t\t\t%c",KiriAtas);

    for (i = 1; i <= 30; ++i)
    {
        printf("%c",Horizontal);
    }

    printf("%c",KananAtas);

    printf("\r\n");

    printf("\t\t\t\t\t%c",Vertical);

    for (i = 1; i <= 7; ++i)
    {
        printf(" ");
    }

    printf("RESTO JURIT MALAM");

    for (i = 1; i <= 6; ++i)
    {
        printf(" ");
    }

    printf("%c",Vertical);

    printf("\r\n");

    printf("\t\t\t\t\t%c",pertigaankiri);

    for (i = 1; i <= 30; ++i)
    {
        printf("%c",Horizontal);
    }

    printf("%c",pertigaankanan);

    /////////////////////////////////

    printf("\r\n");

    printf("\t\t\t\t\t%c",Vertical);

    printf("Menu Khayalan:");

    for (i = 1; i <= 16; ++i)
    {
        printf(" ");
    }

    printf("%c",Vertical);

    printf("\r\n");

    printf("\t\t\t\t\t%c",pertigaankiri);

    for (i = 1; i <= 30; ++i)
    {
        printf("%c",Horizontal);
    }

    printf("%c",pertigaankanan);
    //////////////////////////
    printf("\r\n");
    printf("\t\t\t\t\t%c",Vertical);

    printf("1. Tambah isi dompet");
    for (i = 1; i <= 10; ++i)
    {
        printf(" ");
    }
    printf("%c",Vertical);

    printf("\n");
    /////
    printf("\t\t\t\t\t%c",Vertical);

    printf("2. apa aja");
    for (i = 1; i <= 20; ++i)
    {
        printf(" ");
    }
    printf("%c",Vertical);

    printf("\n");
    printf("\t\t\t\t\t%c",Vertical);

    printf("3. tes tes");
    for (i = 1; i <= 20; ++i)
    {
        printf(" ");
    }
    printf("%c",Vertical);

    printf("\n");
    printf("\t\t\t\t\t%c",Vertical);

    printf("4. oi kocak");
    for (i = 1; i <= 19; ++i)
    {
        printf(" ");
    }
    printf("%c",Vertical);

    printf("\n");
    printf("\t\t\t\t\t%c",Vertical);

    printf("5. MAK AKU NYERAH");
    for (i = 1; i <= 13; ++i)
    {
        printf(" ");
    }
    printf("%c",Vertical);

    printf("\n");
    printf("\t\t\t\t\t%c",Vertical);

    printf("6. KELUAR LO");

    for (i = 1; i <= 18; ++i)
    {
        printf(" ");
    }
    printf("%c",Vertical);

    printf("\r\n");

    printf("\t\t\t\t\t%c",KiriBawah);

    for (i = 1; i <= 30; ++i)
    {
        printf("%c",Horizontal);
    }
        printf("%c", KananBawah);


        printf("\n\t\t\t\t\tPilihan: ");
        scanf("%i%*c",&pilih);

        system("cls");

        switch(pilih)
        {
        case 1:
            printf("Masukkan Nama: ");
            gets(nama);
            printf("\n\nMasukkan Saldo: ");
            scanf("%d", &saldo);
            break;
        case 2:
            printf("ya");
            break;
        default:
            printf("lu salah kocak");
        }
        printf("\nUlang program?");
        scanf("%c", &ulang);
        system("pause");

        }
        while(ulang!=6);


}
=========================================================================
int a;
    unsigned char BlackBox;

    system("cls");

    BlackBox = 219;

    for (a = 1; a <= 10; ++a)
    {
        printf("\r\n");
    }

    for (a = 1; a <= 35; ++a)
    {
        printf(" ");
    }

    printf("Sabar ya deck");

    printf("\r\n\r\n\r\n");

    for (a = 1; a <= 15; ++a)
    {
        printf(" ");
    }

    for (a = 1; a <= 45; ++a)
    {
        printf("%c",BlackBox);
        Sleep(100);
    }

    printf("\r\n\r\n\r\n");

    for (a = 1; a <= 32; ++a)
    {
        printf(" ");
    }

    printf("Nih dah kelar");

    getch();

    system("cls");
}
============================================================================
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#include<conio.h>
#include<io.h>

void main()
{
    system("color E0");
    int i = 0, benar=0, cekulang=1,salah,selesai = 0, j = 0;
    char ch;
    char username[20];
    char password[20];

    while(cekulang<=3)
    {
    i = 0;
    selesai = 0;
    strncpy(password, "", sizeof(password));
    printf("Login\n\n");
    printf("Username : ");
    //scanf("%[^\n]",&username);
    gets(username);
    printf("Password : ");
    //gets(password);

    while(selesai != 1)
    {
        ch = getch();
        if(ch == 13)
        {
            selesai = 1;
        }
        else if(ch == 8)
        {
            if(i > 0)
            {
                password[i]="";
                printf("\b \b");
                i--;
            }

        }
        else
        {
            password[i]=ch;
            printf("*");
            i++;
        }
    }

    printf("\n");

    if((strcmp(username,"fti")==benar) && (strcmp(password,"fti")==benar))
        {
            printf("widih bener");
            break;
        }
        else
        {

            salah++;

            if(salah==3)
            {
                printf("ERROR!\r\n");
                printf("USERNAME DAN PASSWORD SALAH SEBANYAK 3X!\r\n");
                printf("MAAF ANDA KURANG BERUNTUNG!\r\n");
                getch();
                exit(0);
            }

            printf("Error! Udah salah %d kali\nUlang lagi ya ges", salah);
            getch();
            system("cls");
        }

        cekulang++;
    }

}
==========================================================================
TR DDP
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>

void main(){
    system("color E0");
    loading();
    login();
    menu1();
}

void loading()
{
    int a;
    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t       ");
    printf("Tugas kok joki\n\n");
    printf("\t\t\t\t   ");
    for(a=0;a<=50;a++){
        printf("%c",219);
        Sleep(50);
    }
    printf("\n\n\t\t\t\t\t\t     Ya harus joki lah   ");
    getch();
}

void login(){
    int o = 0, benar=0, cekulang=1,salah,selesai = 0, j = 0,aa,bb,cc;
    char ch;
    char username[20];
    char password[20];

    system("cls");
    while(cekulang<=3)
    {
        for(aa=0;aa<=5;aa++)
        {
            printf("\n");
            for(bb=0;bb<=5;bb++)
            {
                printf("\t");
            }
        }
    o = 0;
    selesai = 0;
    strncpy(password, "", sizeof(password));
    printf("=====================");
    printf("\n\t\t\t\t\t\t\tLogin");
    printf("\n\t\t\t\t\t\t=====================");
    for(aa=0;aa<=1;aa++)
        {
            printf("\n");
            for(bb=0;bb<=3;bb++)
            {
                printf("\t");
            }
        }
    printf("Username : ");
    gets(username);
    for(aa=1;aa<=1;aa++)
        {
            printf("\n");
            for(bb=0;bb<=3;bb++)
            {
                printf("\t");
            }
        }
    printf("Password : ");

    while(selesai != 1)
    {
        ch = getch();
        if(ch == 13)
        {
            selesai = 1;
        }
        else if(ch == 8)
        {
            if(o > 0)
            {
                password[o]="";
                printf("\b \b");
                o--;
            }
        }
        else
        {
            password[o]=ch;
            printf("*");
            o++;
        }
    }

    printf("\n");

        if((strcmp(username,"emerald")==benar) && (strcmp(password,"fti")==benar))
        {
           menu1();
        }
        else
        {
            salah++;
            if(salah==3)
            {
                for(aa=1;aa<=1;aa++)
               {
                 printf("\n");
                 for(bb=0;bb<=3;bb++)
                 {
                     printf("\t");
                 }
               }
                printf("ERROR!");
                printf("USERNAME DAN PASSWORD SALAH SEBANYAK 3X!");
                printf("MAAF ANDA KURANG BERUNTUNG!");
                getch();
                exit(0);
            }
            {
               for(aa=1;aa<=1;aa++)
               {
                 printf("\n");
                 for(bb=0;bb<=3;bb++)
                 {
                     printf("\t");
                 }
               }
            }
            printf("Error! Udah salah %d kali :)", salah);
            printf(" \n\t\t\t\tUlangi lagi ya ges");
            getch();
            system("cls");
        }
        cekulang++;
    }
}

void menu1(){

    ////////////////////////UNTUK MENU DKK
    int i,saldo,ttl=0,aa,bb,cc, memilih, tagihan, nominal, kembalian,aw,nilai,n;
    char KiriAtas,KananAtas,KiriBawah,KananBawah,Vertical,Horizontal;
    char pertigaankiri,pertigaankanan,ulang,kesempatan,nama[20] = {NULL};
    int num = 0, ch,pilih;


    KiriAtas = 201;
    KiriBawah = 200;
    KananAtas = 187;
    KananBawah = 188;
    Vertical = 186;
    Horizontal = 205;
    pertigaankiri = 204;
    pertigaankanan = 185;

    ////////////////////////UNTUK JAM PASIR
    int j,k;
    int batasAtas,batasBawah,bintangAtas,baris,tinggiPasir,inputLebar;

    do
    {
    system("cls");

    menu:

    ////////////////////////BARIS 1 2 3

    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t%c",KiriAtas);
    for (i = 1; i <= 30; ++i)
    {
        printf("%c",Horizontal);
    }
    printf("%c",KananAtas);
    printf("\r\n");
    printf("\t\t\t\t\t%c",Vertical);
    for (i = 1; i <= 7; ++i)
    {
        printf(" ");
    }
    printf("RESTO JURIT MALAM");
    for (i = 1; i <= 6; ++i)
    {
        printf(" ");
    }
    printf("%c",Vertical);
    printf("\r\n");
    printf("\t\t\t\t\t%c",pertigaankiri);
    for (i = 1; i <= 30; ++i)
    {
        printf("%c",Horizontal);
    }
    printf("%c",pertigaankanan);

    //////////////////////// BARIS 4 5

    printf("\r\n");
    printf("\t\t\t\t\t%c",Vertical);
    printf("Menu Khayalan:");
    for (i = 1; i <= 16; ++i)
    {
        printf(" ");
    }
    printf("%c",Vertical);
    printf("\r\n");
    printf("\t\t\t\t\t%c",pertigaankiri);
    for (i = 1; i <= 30; ++i)
    {
        printf("%c",Horizontal);
    }
    printf("%c",pertigaankanan);

    //////////////////////// MENU 1

    printf("\r\n");
    printf("\t\t\t\t\t%c",Vertical);
    printf("1. Tambah isi dompet");
    for (i = 1; i <= 10; ++i)
    {
        printf(" ");
    }
    printf("%c",Vertical);
    printf("\n");

    //////////////////////// MENU 2

    printf("\t\t\t\t\t%c",Vertical);
    printf("2. Cek isi dompet");
    for (i = 1; i <= 13; ++i)
    {
        printf(" ");
    }
    printf("%c",Vertical);

    //////////////////////// MENU 3

    printf("\n");
    printf("\t\t\t\t\t%c",Vertical);
    printf("3. Pesan Makanan");
    for (i = 1; i <= 14; ++i)
    {
        printf(" ");
    }
    printf("%c",Vertical);
    printf("\n");

    //////////////////////// MENU 4

    printf("\t\t\t\t\t%c",Vertical);
    printf("4. Cetak Pola Jam Pasir");
    for (i = 1; i <= 7; ++i)
    {
        printf(" ");
    }
    printf("%c",Vertical);
    printf("\n");

    //////////////////////// MENU 5

    printf("\t\t\t\t\t%c",Vertical);
    printf("5. Kesan Pesan Untuk Asdos");
    for (i = 1; i <= 4; ++i)
    {
        printf(" ");
    }
    printf("%c",Vertical);
    printf("\n");

    //////////////////////// MENU 6

    printf("\t\t\t\t\t%c",Vertical);
    printf("6. Keluar");
    for (i = 1; i <= 21; ++i)
    {
        printf(" ");
    }
    printf("%c",Vertical);

    //========================================================== BARIS AKHIR

    printf("\r\n");
    printf("\t\t\t\t\t%c",KiriBawah);
    for (i = 1; i <= 30; ++i)
    {
        printf("%c",Horizontal);
    }
    printf("%c", KananBawah);

    //////////////////////// PILIHAN

    printf("\n\t\t\t\t\tPilihan: ");
    scanf("%i%*c",&pilih);

    system("cls");

    switch(pilih)
    {
    case 1:
        system("cls");

        for(aa=1;aa<=1;aa++)
    {
        printf("\n");
        for(bb=0;bb<=3;bb++)
            {
                printf("\t");
            }
    }

        if(strlen(nama) == NULL)
            {
            printf("Masukkan nama Anda = ");
            gets(nama);
            }
        nmsld:
        for(aa=1;aa<=1;aa++)
        {
            printf("\n");
            for(bb=0;bb<=3;bb++)
            {
                printf("\t");
            }
        }
        printf("Masukkan saldo Anda = Rp ");
        scanf("%d", &saldo);
        ttl=ttl+saldo;

        printf("\n\n\t\t\t\tUlang program? [Y/N]= ");
        getchar();
        scanf("%c",&pilih);

        if(pilih=='y'||pilih=='Y')
        {
            system("cls");
            goto nmsld;
        }
        break;
    case 2:
        system("cls");

        mnu2:
        printf("\n\n\n\t\t\t\tIsi saldo dompet atas nama %s sejumlah Rp %d\n", nama, ttl);
        printf("\n\n\t\t\t\tUlang program? [Y/N]= ");
        getchar();
        scanf("%c",&pilih);

        if(pilih==131||pilih==171)
        {
            system("cls");
            goto mnu2;
        }
        break;
    case 3:
        system("cls");

        tagihan=0;

        retry:
        printf("\t\t\t\t1. Ayam goyeng kesukaan ipin = Rp 5000");
        printf("\n\t\t\t\t2. Hihang hoheng = Rp 3000");
        printf("\n\t\t\t\t3. Es campur aduk = Rp 4000");
        printf("\n\t\t\t\t4. Gado-Gado bukan Goda-Goda kamu = Rp 7000");
        printf("\n\t\t\t\t5. Bukan air putih tapi air bening = Rp 1000");
        printf("\n\t\t\t\tPilihan menu : ");
        scanf("%i", &memilih);

        switch (memilih)
        {
        case 1:
            printf("\t\t\t\tMenu berhasil ditambahkan");
            tagihan=tagihan+5000;
            printf("\n\t\t\t\tTotal tagihan adalah Rp %d", tagihan);
            printf("\n\n\t\t\t\tUlang program? [Y/N]= ");
            getchar();
            scanf("%c",&pilih);

            if(pilih=='y'||pilih=='Y')
            {
                system("cls");
                goto retry;
            }
            else if(pilih=='n'||pilih=='N')
            {
                system("cls");
                goto kasir;
            }
                break;
        case 2:
            printf("\t\t\t\tMenu berhasil ditambahkan");
            tagihan=tagihan+3000;
            printf("\n\t\t\t\tTotal tagihan adalah Rp %d", tagihan);
            printf("\n\t\t\t\tUlang program? [Y/N]= ");
            getchar();
            scanf("%c",&pilih);

            if(pilih=='y'||pilih=='Y')
            {
                system("cls");
                goto retry;
            }
            else if(pilih=='n'||pilih=='N')
            {
                system("cls");
                goto kasir;
            }
                break;
        case 3:
            printf("\t\t\t\tMenu berhasil ditambahkan");
            tagihan=tagihan+4000;
            printf("\n\t\t\t\tTotal tagihan adalah Rp %d", tagihan);
            printf("\n\t\t\t\tUlang program? [Y/N]= ");
            getchar();
            scanf("%c",&pilih);

            if(pilih=='y'||pilih=='Y')
            {
                system("cls");
                goto retry;
            }
            else if(pilih=='n'||pilih=='N')
            {
                system("cls");
                goto kasir;
            }
                break;
        case 4:
            printf("\t\t\t\tMenu berhasil ditambahkan");
            tagihan=tagihan+7000;
            printf("\n\t\t\t\tTotal tagihan adalah Rp %d", tagihan);
            printf("\n\t\t\t\tUlang program? [Y/N]= ");
            getchar();
            scanf("%c",&pilih);

            if(pilih=='y'||pilih=='Y')
            {
                system("cls");
                goto retry;
            }
            else if(pilih=='n'||pilih=='N')
            {
                system("cls");
                goto kasir;
            }
                break;
        case 5:
            printf("\t\t\t\tMenu berhasil ditambahkan");
            tagihan=tagihan+1000;
            printf("\n\t\t\t\tTotal tagihan adalah Rp %d", tagihan);
            printf("\n\t\t\t\tUlang program? [Y/N]= ");
            getchar();
            scanf("%c",&pilih);

            if(pilih=='y'||pilih=='Y')
            {
                system("cls");
                goto retry;
            }
            else if(pilih=='n'||pilih=='N')
            {
                system("cls");
                goto kasir;
            }
                break;
        default:
            printf("\t\t\t\tMENU LO HALU WOI");
            printf("\n\t\t\t\tUlang program? [Y/N]= ");
            getchar();
            scanf("%c",&pilih);

            if(pilih=='y'||pilih=='Y')
            {
                system("cls");
                goto retry;
            }
            else if(pilih=='n'||pilih=='N')
            {
                system("cls");
                goto kasir;
            }
        }
        kasir:
        printf("\n\t\t\t\tKASIR");
        printf("\n\t\t\t\tTotal tagihanmu adalah Rp %d", tagihan);
        printf("\n\t\t\t\tTotal saldomu adalah Rp %d", ttl);
        printf("\n\t\t\t\tMasukkan nominal: Rp ");
        scanf("%d", &nominal);

        if(nominal>ttl)
        {
            printf("\t\t\t\tUangmu belum cukup");
            printf("\n\t\t\t\tApakah kamu ingin menambah saldo? [Y/N] = ");
            getchar();
            scanf("%c", &kesempatan);

            if(kesempatan=='Y'||kesempatan=='y')
            {
                printf("\t\t\t\tTambah saldo dan pesan kembali yeee :D");
                getch();
                system("cls");
                goto nmsld;
            }
            else
            {
                system("cls");
                goto kasir;
            }
        }
        else if(nominal<tagihan)
        {
            printf("\t\t\t\tSaldomu tidak cukup!!!");
            getch();
            system("cls");
            goto kasir;
        }
        else if(nominal>=tagihan)
        {
            kembalian=nominal-tagihan;
            ttl=ttl-tagihan;
            printf("\n\t\t\t\tPembayaran sukses");
            printf("\n\t\t\t\tUang kembalian: Rp %d", kembalian);
            printf("\n\t\t\t\tTotal saldomu sekarang: Rp %d", ttl);
            getch();
            printf("\n\t\t\t\tUlang program? [Y/N]= ");
            getchar();
            scanf("%c",&pilih);
            system("cls");
        }
        break;
    case 4:
        system("cls");

        jpsr:
        printf("Input lebar = ");
        scanf("%d", &inputLebar);

        if(inputLebar%2==1)
        {
        baris=inputLebar-1;
        batasBawah=(inputLebar-1)/2;
        batasAtas=inputLebar/3;
        bintangAtas=(batasBawah-batasAtas+1)*2;
        tinggiPasir=batasBawah-batasAtas;

        for(i=1;i<=baris;++i)
        {
            if(i==1||i==baris)
            {
                for(j=1;j<=inputLebar;j++)
                {
                    printf("*");
                }
            }
            else if(i>1&&i<batasAtas)
            {
                for(j=1;j<=inputLebar;j++)
                    if(j==1||j==inputLebar)
                    {
                        printf("*");
                    }
                    else if(j==i||j==inputLebar-i)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
            }
            else if(i>=batasAtas&&i<=batasBawah)
            {
                for(j=1;j<=inputLebar;j++)
                {
                    if(j==1||j==inputLebar)
                    {
                        printf("*");
                    }
                    else if(j>=i&&j<=inputLebar-i)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
            else if(i>batasBawah&&i<=batasBawah+2)
            {
                for(j=1;j<=inputLebar;j++)
                {
                    if(j==1||j==inputLebar)
                    {
                        printf("*");
                    }
                    else if(j>=inputLebar-i&&j<=i)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
            else if(i>batasBawah+2&&i<baris-tinggiPasir)
            {
                for(j=1;j<=inputLebar;j++)
                {
                    if(j==1||j==inputLebar)
                    {
                        printf("*");
                    }
                    else if(j==inputLebar-i||j==i||j==batasBawah||j==batasBawah+1)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
            else if(i>=baris-tinggiPasir&&i<baris)
            {
                for(j=1;j<=inputLebar;j++)
                {
                    if(j==1||j==inputLebar)
                    {
                        printf("*");
                    }
                    else if(j>=inputLebar-i&&j<=i)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        printf("\r\n");
        }
        }

        else{
        baris=inputLebar-1;
        batasBawah=(inputLebar)/2;
        batasAtas=inputLebar/3;
        bintangAtas=(batasBawah-batasAtas+1)*2;
        tinggiPasir=batasBawah-batasAtas;
        for(i=1;i<=baris;++i)
        {
            if(i==1||i==baris)
            {
                for(j=1;j<=inputLebar;j++)
                {
                    printf("*");
                }
            }
            else if(i>1&&i<batasAtas)
            {
                for(j=1;j<=inputLebar;j++)
                    if(j==1||j==inputLebar)
                    {
                        printf("*");
                    }
                    else if(j==i||j==inputLebar-i)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
            }
            else if(i>=batasAtas&&i<=batasBawah)
            {
                for(j=1;j<=inputLebar;j++)
                {
                    if(j==1||j==inputLebar)
                    {
                        printf("*");
                    }
                    else if(j>=i&&j<=inputLebar-i)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
            else if(i>batasBawah&&i<=baris-tinggiPasir)
            {
                for(j=1;j<=inputLebar;j++)
                {
                    if(j==1||j==inputLebar)
                    {
                        printf("*");
                    }
                    else if(j==inputLebar-i||j==i||j==batasBawah)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
            else if(i>baris-tinggiPasir&&i<baris)
            {
                for(j=1;j<=inputLebar;j++)
                {
                    if(j==1||j==inputLebar)
                    {
                        printf("*");
                    }
                    else if(j>=inputLebar-i&&j<=i)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        printf("\r\n");
        }
        }

        printf("Ulang program? [Y/N]= ");
        getchar();
        scanf("%c",&pilih);

        if(pilih=='y'||pilih=='Y')
        {
            system("cls");
            goto jpsr;
        }
        break;
    case 5:
        system("cls");

        dpr:
        printf("Kesan pesan untuk asdos: ");
        printf("\n1. Giovanni Sebastian Ekayuda");
        printf("\n2. Sherly Septiani");
        printf("\n3. Sella Febriana");
        printf("\n4. Kurnia Mahendra Setya Abdi");
        printf("\n5. Stefanus Adhi Dwi Winarta");
        printf("\n6. Berikan nilai untuk kelompok kami: ");
        printf("\nMasukkan pilihan: ");
        scanf("%i",&aw);

        switch(aw){
        case 1:
            printf("\nGiovanni Sebastian Ekayuda");
            printf("\nKesan:\npas aku masuk kelas,aku kira kak asdos nya galak");
            printf("\napalagi matkul nya susah bat cuman pas kakaknya ngajar ternyata");
            printf("\npembawaan nya santai dan kalem jadi waktu pembelajaran aku merasa");
            printf("\nnyaman meskipun matkul nya malah tambah susah");
            printf("\nPesan:\nmakasi ya kak udh mau ngajar sama naikin nilai saya");
            printf("\nUlang program? [Y/N]= ");
            getchar();
            scanf("%c",&pilih);

            if(pilih=='y'||pilih=='Y')
            {
                system("cls");
                goto dpr;
            }
            break;
        case 2:
            printf("\nSherly Septiani");
            printf("\nKesan:\nkak sampe sekarang aku gak bisa bedain kalian hehehe");
            printf("\nPesan:\nJangan pelit nilai dongssss, KAK ADIT IG KU MINIMAL DI FB LAH");
            printf("\nUlang program? [Y/N]= ");
            getchar();
            scanf("%c",&pilih);

            if(pilih=='y'||pilih=='Y')
            {
                system("cls");
                goto dpr;
            }
            break;
        case 3:
            printf("\nSella Febriana");
            printf("\nKesan:\nKesan pertama liat kalian oh yaudah gitu aja hehe");
            printf("\nPesan:\nPesan untuk kalian semangat ngoding selalu");
            printf("\nUlang program? [Y/N]= ");
            getchar();
            scanf("%c",&pilih);

            if(pilih=='y'||pilih=='Y')
            {
                system("cls");
                goto dpr;
            }
            break;
        case 4:
            printf("\nKurnia Mahendra Setya Abdi");
            printf("\nKesan:\nsaya kira itu matkul DDP itu susah tapi kenyataannya emang susah kalo ngga belajar");
            printf("\nPesan:\nbelajar-belajar biar pinter jadi bodoh itu menyakitkan");
            printf("\nUlang program? [Y/N]= ");
            getchar();
            scanf("%c",&pilih);

            if(pilih=='y'||pilih=='Y')
            {
                system("cls");
                goto dpr;
            }
            break;
        case 5:
            printf("\nStefanus Adhi Dwi Winarta");
            printf("\nKesan:\n- Kak Adit: kurang lebih sama kayak kak Agung, tapi kak Adit lebih santai\n- Kak Agung: kak Agung dikira dulunya orang nya kaku, tapi makin kesini makin nyantai, bisa bercanda juga");
            printf("\nPesan:\n- Kak Adit: kurangin kak tugasnya, good luck study nya\n- Kak Agung: kurangin kak tugasnya, good luck study nya");
            printf("\nUlang program? [Y/N]= ");
            getchar();
            scanf("%c",&pilih);

            if(pilih=='y'||pilih=='Y')
            {
                system("cls");
                goto dpr;
            }
            break;
        case 6:
            system("cls");
            printf("Coba masukin nilai buat kelompok kami: ");
            scanf("%d", &nilai);

            if(nilai>=80)
            {
            for(i=n/2;i<=n;i+=2)
            {
                for(j=1;j<n-i;j+=2)
                {
                    printf(" ");
                }

                for(j=1;j<=i;j++)
                {
                    printf("*");
                }

                for(j=1;j<=n-i;j++)
                {
                    printf(" ");
                }

                for(j=1;j<=i;j++)
                {
                    printf("*");
                }

                printf("\n");
            }

            for(i=n;i>=1;i--)
            {
                for(j=i;j<n;j++)
                {
                    printf(" ");
                }

                for(j=1;j<=(i*2)-1;j++)
                {
                    printf("*");
                }

                printf("\n");
            }
            printf("lopyu hehew");
            }
            else
            {
                printf("FVCK NGODING\n");
                printf(".........................**\n");
                printf(".......................***\n");
                printf(".....................**** \n");
                printf("...................***** \n");
                printf("..................***** \n");
                printf("............./**/'***'/****** \n");
                printf("........../'/***/***/*******/**\\ \n");
                printf("........('(************ **/'***') \n");
                printf(".........\\*****************'****/ \n");
                printf("..........\\********** **** ****/\n");
                printf("............\\*****************( \n");
                printf("..............\\***************\\ \n");
                printf("NGODING ITU TIDAK MENYENANGKAN\n");
                printf("NGODING TIDAK RAMAH BINTANG 1\n");
                printf("\n\ncuman jokes kak hehe lopyu all");
            }
                    printf("\nUlang program? [Y/N]= ");
                    getchar();
                    scanf("%c",&pilih);

                    if(pilih=='y'||pilih=='Y')
                    {
                        system("cls");
                        goto dpr;
                    }

       default:
            printf("Kamu salah masukin\n");
            printf("\nUlang program? [Y/N]= ");
            getchar();
            scanf("%c",&pilih);

            if(pilih=='y'||pilih=='Y')
            {
                system("cls");
                goto dpr;
            }
            else if(pilih=='n'||pilih=='N')
            {
                system("cls");
                goto menu;
            }
        break;
        }
    break;
    case 6:
        printf("\n\n\n\n\t\t\t\tBYEEEE BXTCH");
        printf("\n\t\t\t\tSEE YOU LATER");
        printf("\n\t\t\t\t(or not)\n\n\n\n");
        exit(0);
    default:
        printf("\n\n\n\n\t\t\t\tlu salah kocak");
        printf("\n\n\t\t\t\t\t\tUlang program? [Y/N]= ");
        getchar();
        scanf("%c",&pilih);

        if(pilih=='y'||pilih=='Y')
        {
            system("cls");
            goto menu;
        }
    }
    }while(ulang!=6);
}


=========================================================================
2023

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d[20],e,pilih,sum;
    float f,sum1,haha,hihi;

    printf("Masukkan angka M: ");
    scanf("%d", &a);

    b=0;
    for (c=0;c<a;++c)
    {
        printf("Angka M ke %d: ", c+1);
        scanf("%d", &d[c]);
        b=b+d[c]%a;
        sum=sum+d[c];
    }


    sum1=sum/a;

    do{
        system("cls");

    printf("1. List data");
    printf("\n2. Total data");
    printf("\n3. Rata-rata");
    printf("\n4. Keluar");
    printf("\nPilih: ");
    scanf("%d", &pilih);

    switch(pilih)
    {
    case 1:
        printf("List data: ");
        for (c=0;c<a;++c)
    {
        printf("\n%d ",d[c]);

    }
        getch();
        break;
    case 2:
        printf("Total data adalah %d ",sum);
        getch();
        break;
    case 3:
        printf("Rata-rata adalah %f",sum1);
        getch();
        break;
    case 4:
        exit(0);

    default:
        printf("Angka halu");
        getch();
    }


    }while(pilih!=4);
return 0;
}
============================================================================================================
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //btw ini nama waifu waifu saya
    int hutao, keqing, ayaka, yelan, raiden[20][20], yae[20][20], shenhe, ganyu[20][20], guizhong[20][20],eula[20][20];

    printf("Masukkan ukuran matriks: ");
    scanf("%d", &hutao);
    printf("Matrix ukuran %d x %d", hutao, hutao);

    printf("\n\nMasukkan nilai dari matriks A\n");
    for (keqing=0;keqing<hutao;keqing++)
        for(ayaka=0;ayaka<hutao;ayaka++)
        {
        printf("Masukkan A [%d][%d]: ",keqing+1, ayaka+1);
        scanf("%d", &raiden[keqing][ayaka]);
        }

    printf("\n\nMasukkan nilai dari matriks B\n");
    for (keqing=0;keqing<hutao;keqing++)
        for(ayaka=0;ayaka<hutao;ayaka++)
        {
        printf("Masukkan A [%d][%d]: ",keqing+1, ayaka+1);
        scanf("%d", &yae[keqing][ayaka]);
        }
    printf("\nTekan enter untuk lanjut");
    getch();

    do{
        system("cls");
    printf("Pilih apa yang mau dipilih: ");
    printf("\n1. Tampilkan matriks");
    printf("\n2. Penjumlahan matriks");
    printf("\n3. Perkalian matriks");
    printf("\n4. Tranpose matriks A");
    printf("\n5. Tranpose matriks B");
    printf("\n6. Exit");
    printf("\nPilih: ");
    scanf("%d", &shenhe);

    switch(shenhe)
    {
    case 1:
        printf("Matriks A:\n\n");
        for (keqing=0;keqing<hutao;keqing++){
        for(ayaka=0;ayaka<hutao;ayaka++)
        {
            printf("%d\t", raiden[keqing][ayaka]);
        }
        printf("\n");
        }
        printf("\nMatriks B: \n");
        for (keqing=0;keqing<hutao;keqing++){
        for(ayaka=0;ayaka<hutao;ayaka++)
        {
            printf("%d\t", yae[keqing][ayaka]);
        }
        printf("\n");
        }
        printf("\nTekan enter untuk lanjut");
        getch();
        break;
    case 2:
        printf("Hasil penjumlahan kedua matriks: \n");
        for (keqing=0;keqing<hutao;keqing++){
        for(ayaka=0;ayaka<hutao;ayaka++)
            {
            ganyu[keqing][ayaka]=raiden[keqing][ayaka] + yae[keqing][ayaka];
            }
        }
        for (keqing=0;keqing<hutao;keqing++){
        for(ayaka=0;ayaka<hutao;ayaka++)
        {
            printf("%d\t", ganyu[keqing][ayaka]);
        }
        printf("\n");
        }
        printf("\nTekan enter untuk lanjut");
        getch();
        break;
    case 3:
        printf("Hasil perkalian kedua matriks: \n");
        for (keqing=0;keqing<hutao;keqing++){
        for(ayaka=0;ayaka<hutao;ayaka++)
            {
            ganyu[keqing][ayaka]=raiden[keqing][ayaka] * yae[keqing][ayaka];
            }
        }
        for (keqing=0;keqing<hutao;keqing++){
        for(ayaka=0;ayaka<hutao;ayaka++)
        {
            printf("%d\t", ganyu[keqing][ayaka]);
        }
        printf("\n");
        }
        printf("\nTekan enter untuk lanjut");
        getch();
        break;
    case 4:
        printf("Matriks A: \n");
        for (keqing=0;keqing<hutao;keqing++){
        for(ayaka=0;ayaka<hutao;ayaka++)
        {
            printf("%d\t", raiden[keqing][ayaka]);
        }
        printf("\n");
        }
        printf("\nHasil tranpose matriks A: \n");
        for (keqing=0;keqing<hutao;keqing++)
        for(ayaka=0;ayaka<hutao;ayaka++)
            guizhong[ayaka][keqing]= raiden[keqing][ayaka];

        for (keqing=0;keqing<hutao;keqing++)
        {
          for(ayaka=0;ayaka<hutao;ayaka++)
                printf("%d\t", guizhong[keqing][ayaka]);
          printf("\n");
        }
        printf("\nTekan enter untuk lanjut");
        getch();
        break;
    case 5:
        printf("Matriks B: \n");
        for (keqing=0;keqing<hutao;keqing++){
        for(ayaka=0;ayaka<hutao;ayaka++)
        {
            printf("%d\t", yae[keqing][ayaka]);
        }
        printf("\n");
        }
        printf("\nHasil tranpose matriks B:\n");
        for (keqing=0;keqing<hutao;keqing++)
        for(ayaka=0;ayaka<hutao;ayaka++)
            eula[ayaka][keqing]= yae[keqing][ayaka];

        for (keqing=0;keqing<hutao;keqing++)
        {
          for(ayaka=0;ayaka<hutao;ayaka++)
                printf("%d\t", eula[keqing][ayaka]);
          printf("\n");
        }
        printf("\nTekan enter untuk lanjut");
        getch();
        break;
    case 6:
        printf("Pergilah dan jangan datang lagi");
        printf("\nTekan enter untuk lanjut");
        exit(0);
    default:
        printf("Dipilihan adakah nomer ini? Mohon diliat baik-baik");
        printf("\nTekan enter untuk lanjut");
        getch();
    }

    }while(shenhe!=6);
    return 0;
}
============================================================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct User
{
    char nama[100],jk[100],email[100];

} usr;

struct Mahasiswa
{
    int nim;
    float ipk;

    usr User;

}mhs[50];

struct Dosen
{
    int nip,gj;

    usr User;

}dosen[50];

int main()
{

    int a,menu,b,x;
    char m;
    printf("Input data : ");
    scanf("%d",&x);
    printf("Data yang dimasukkan sebanyak %d kali", x);
    printf("\n\nTekan enter untuk lanjut");
    getch();
    mhs[x];
    dosen[x];

    do
    {
        system("cls");
        printf("1.Create Data Mahasiswa\n");
        printf("2.Read Data Mahasiswa\n");
        printf("3.Create Data Dosen\n");
        printf("4.Read Data Dosen\n");
        printf("5. Exit\n");
        printf("Input Menu : ");
        scanf("%i%*c",&menu);

        switch(menu)
        {
        case 1:
            system("cls");
            for(b=0; b<x; b++)
            {
                printf("Data Mahasiswa ke [%d]:\n",b+1);
                printf("Nama : ");
                fgets(mhs[b].User.nama,100,stdin);
                mhs[b].User.nama[strlen(mhs[b].User.nama) - 1] = '\0';
                printf("Jenis Kelamin L / P / Non-Binary : ");
                fgets(mhs[b].User.jk,100,stdin);
                mhs[b].User.jk[strlen(mhs[b].User.jk) - 1] = '\0';
                printf("email : ");
                fgets(mhs[b].User.email,100,stdin);
                mhs[b].User.email[strlen(mhs[b].User.email) - 1] = '\0';
                printf("Masukkan NIM: ");
                scanf("%d", &mhs[b].nim);
                printf("Masukkan IPK: ");
                scanf("%f",&mhs[b].ipk);
                getchar();
                printf("\n");
            }
            printf("\nTekan enter untuk lanjut");
            getch();
            break;
        case 2:
            system("cls");
            for(int b=0; b<x; b++)
            {
                printf("\nData Mahasiswa [%d]:\n",b+1);
                printf("Nama: %s\n", mhs[b].User.nama);
                printf("Jenis Kelamin: %s\n", mhs[b].User.jk);
                printf("NIM: %d\n", mhs[b].nim);
                printf("Email: %s\n", mhs[b].User.email);
                printf("IPK: %.2f\n", mhs[b].ipk);
            }
            printf("\nTekan enter untuk lanjut");
            getch();
            break;
        case 3:
            system("cls");
            for(b=0; b<x; b++)
            {
                printf("Data Dosen ke [%d]:\n",b+1);
                printf("Nama : ");
                fgets(dosen[b].User.nama,100,stdin);
                dosen[b].User.nama[strlen(dosen[b].User.nama) - 1] = '\0';
                printf("Jenis Kelamin L / P / Non-Binary : ");
                fgets(dosen[b].User.jk,100,stdin);
                dosen[b].User.jk[strlen(dosen[b].User.jk) - 1] = '\0';
                printf("Email : ");
                fgets(dosen[b].User.email,100,stdin);
                dosen[b].User.email[strlen(dosen[b].User.email) - 1] = '\0';
                printf("Masukkan NIP: ");
                scanf("%d", &dosen[b].nip);
                printf("Masukkan Gaji: ");
                scanf("%d", &dosen[b].gj);
                getchar();
                printf("\n");
            }
            printf("\nTekan enter untuk lanjut");
            getch();
            break;
        case 4:
            system("cls");
            for(int b=0; b<x; b++)
            {

                printf("\nData Dosen ke [%d]:\n",b+1);
                printf("Nama: %s\n", dosen[b].User.nama);
                printf("Jenis Kelamin: %s\n", dosen[b].User.jk);
                printf("Email: %s\n", dosen[b].User.email);
                printf("NIP: %d\n", dosen[b].nip);
                printf("Gaji: %d\n", dosen[b].gj);
            }
            printf("\nTekan enter untuk lanjut");
            getch();
            break;
        case 5:
            exit(0);
            break;
        default:
            system("cls");
            printf("Inputan salah");
            printf("\n\nTekan enter untuk lanjut");
            getch();
        }
    }
    while(menu!=5);

return 0;
}
===================================================================================
#include <stdio.h>
typedef struct
{
    int nim;
    char nama[100];
    char email[100];
} Mahasiswa;

int main()
{
    int n, i, j, temp, menu,c3,c4, mhsIndex;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);
    Mahasiswa mhs[n];

    do
    {
        system("cls");
        printf("Menu:\n");
        printf("1. Input NIM Mahasiswa\n");
        printf("2. Cetak Data Mahasiswa\n");
        printf("3. Sorting NIM\n");
        printf("4. Update Data Mahasiswa\n");
        printf("5. Keluar\n");
        printf("Pilih menu (1-5): ");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            system("cls");
            printf("Masukkan data mahasiswa:\n");
            for (i = 0; i < n; i++)
            {
                printf("\nData Mahasiswa-%d\n",i+1);

                printf("Nama : ");
                fflush(stdin);
                scanf("%[^\n]", &mhs[i].nama);

                printf("Email : ");
                fflush(stdin);
                scanf("%[^\n]", &mhs[i].email);

                printf("NIM  : ");
                scanf("%d",&mhs[i].nim);
            }
            break;
        case 2:
            system("cls");
            printf("Data Mahasiswa:\n");
            for (i = 0; i < n; i++)
            {
                printf("Nama : %s\n",mhs[i].nama);
                printf("Email : %s\n",mhs[i].email);
                printf("NIM : %d\n",mhs[i].nim);
                printf("\n");
            }
            getch();
            break;
        case 3:
cc3:
            system("cls");
            printf("1. Ascending\n");
            printf("2. Descending\n");
            printf("3. Kembali\n");
            printf("Input pilihan : ");
            scanf("%d",&c3);

            if(c3==1)
            {
                //Algoritma bubble sort dari terkecil ke terbesar
                for (i = 0; i < n-1; i++)
                {
                    for (j = 0; j < n-i-1; j++)
                    {
                        if (mhs[j].nim > mhs[j+1].nim)
                        {

                            temp = mhs[j].nim;
                            mhs[j].nim = mhs[j+1].nim;
                            mhs[j+1].nim = temp;

                            char tempNama[100];
                            strcpy(tempNama, mhs[j].nama);
                            strcpy(mhs[j].nama, mhs[j+1].nama);
                            strcpy(mhs[j+1].nama, tempNama);

                            char tempEmail[100];
                            strcpy(tempEmail, mhs[j].email);
                            strcpy(mhs[j].email, mhs[j+1].email);
                            strcpy(mhs[j+1].email, tempEmail);
                        }
                    }
                }
                printf("\nKecil ke Besar\n\n");
                for (i = 0; i < n; i++)
            {
                printf("Nama : %s\n",mhs[i].nama);
                printf("Email : %s\n",mhs[i].email);
                printf("NIM : %d\n",mhs[i].nim);
                printf("\n");
            }
            }
            else if(c3==2)
            {
                // Algoritma bubble sort dari terbesar ke terkecil
                for (i = 0; i < n-1; i++)
                {
                    for (j = 0; j < n-i-1; j++)
                    {
                        if (mhs[j].nim < mhs[j+1].nim)
                        {

                            temp = mhs[j].nim;
                            mhs[j].nim = mhs[j+1].nim;
                            mhs[j+1].nim = temp;

                            char tempNama[100];
                            strcpy(tempNama, mhs[j].nama);
                            strcpy(mhs[j].nama, mhs[j+1].nama);
                            strcpy(mhs[j+1].nama, tempNama);

                            char tempEmail[100];
                            strcpy(tempEmail, mhs[j].email);
                            strcpy(mhs[j].email, mhs[j+1].email);
                            strcpy(mhs[j+1].email, tempEmail);
                        }
                    }
                }
                printf("\nBesar ke Kecil\n\n");
                for (i = 0; i < n; i++)
            {
                printf("Nama : %s\n",mhs[i].nama);
                printf("Email : %s\n",mhs[i].email);
                printf("NIM : %d\n",mhs[i].nim);
                printf("\n");
            }

            }
            else if(c3==3)
            {
                printf("\nYe");
            }
            else
            {
                printf("Inputan salah");
                getch();
                goto cc3;
            }
            getch();
            break;
        case 4:
cc4:
            system("cls");
            printf("1. Ganti Nama Mahasiswa\n");
            printf("2. Ganti Email Mahasiswa\n");
            printf("3. Kembali\n");
            printf("Input Pilihan : ");
            scanf("%d",&c4);

            if(c4==1)
            {
                printf("Input NIM Mahasiswa yang akan diupdate namanya : ");
                scanf("%d",&mhsIndex);
                for(i=0; i<n; i++)
                {
                    if(mhs[i].nim == mhsIndex)
                    {
                        printf("Input Nama Baru : ");
                        fflush(stdin);
                        scanf("%[^\n]", mhs[i].nama);
                        break;
                    }
                }
            }
            else if(c4==2)
            {
                printf("Input NIM Mahasiswa yang akan diupdate emailnya : ");
                scanf("%d",&mhsIndex);
                for(i=0; i<n; i++)
                {
                    if(mhs[i].nim==mhsIndex)
                    {
                        printf("Input Email Baru : ");
                        fflush(stdin);
                        scanf("%[^\n]", mhs[i].email);
                        break;
                    }
                }
            }
            else if(c4==3)
            {
                printf("\n Ye");
            }
            else
            {
                printf("Inputan Salah");
                getch();
                goto cc4;
            }
            break;
        case 5:
            system("cls");
            printf("Keluar dari program...\n");
            break;
        default:
            system("cls");
            printf("Menu yang dipilih tidak tersedia.\nSilakan pilih menu (1-5).\n");
            getch();
        }
    }
    while (menu != 5);
    return 0;
}

==========================================================================================
#include <stdio.h>
#include <stdlib.h>
#define THAI_TEA 50

typedef struct MATCHA {
    char nama[THAI_TEA][50], nim[THAI_TEA][50], nilai[THAI_TEA][50];
    int choco;
}MATCHA;

MATCHA mocca;

void inisialisasi(){
    mocca.choco = -1;
    }
int penuh(){
    return mocca.choco == THAI_TEA -1;
    }
int kosong(){
    return mocca.choco == -1;
    }
void push(char namae[], char nim[], char nilai[]){
    mocca.choco++;
    strcpy(mocca.nama[mocca.choco], namae);
    strcpy(mocca.nim[mocca.choco], nim);
    strcpy(mocca.nilai[mocca.choco], nilai);
    }
void pop(){
    printf("Data nama: %s telah dihapus", mocca.nama[mocca.choco]);
    mocca.choco--;
    }
void print(){
    for(int i= mocca.choco;i>=0;i--){
    printf("Data Nama: %s\n", mocca.nama[i]);
    printf("Data Nim: %s\n", mocca.nim[i]);
    printf("Data Nilai: %s\n", mocca.nilai[i]);
    printf("\n");
    }
}
void bersih(int redvelvet){
    for (int i=0; i<redvelvet; i++)
    {
        mocca.choco--;
    }
}


int main()
{
    int greentea, i, taro, n;
    char namae[50], nim[50], nilai[50];
    inisialisasi();
    do{
        system ("cls");
        printf("\n1. Push Data Mahasiswa");
        printf("\n2. Pop Data Mahasiswa");
        printf("\n3. Cetak Data Mahasiswa");
        printf("\n4. Clear Data Mahasiswa");
        printf("\n5. Keluar");

        printf("\nPilih: ");
        scanf("%d", &greentea);
        switch (greentea)
        {
        case 1:
            printf("Masukkan data mahasiswa: ");
            scanf("%d", &taro);
            for (i = 0; i < taro; i++)
            {
                if(penuh() !=1){

                printf("Masukkan nama: ");
                scanf("%s", &namae);

                printf("Masukkan NIM: ");
                scanf("%s", &nim);

                printf("Masukkan Nilai: ");
                scanf("%s", &nilai);

                push(namae, nim, nilai);
                printf("\n");
            }
        else {
            printf("\nData telah full");
        }
            }
            getch();
            break;
        case 2:
            if (kosong() !=1){
                pop();
            }else{
                printf("\nData telah kosong!");
                }
                getch();
            break;
        case 3:
            system ("cls");
            print();
            getch();
            break;
        case 4:
            system ("cls");
            if(kosong() != 1)
        {
            bersih(taro);
        }

        printf("Data telah dihapus!");
        getch();
        break;
        case 5:
            system("cls");
            printf("Pergi sana luwh\n");
            getch();
            break;
        default:
            system("cls");
            printf("Halu ya?");
            getch();

        }
    }
    while (greentea !=5);

  return 0;
}
====================================================================================
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define MAX 5//untuk membatasi input data queuenya

typedef struct Queue{//untuk menyederhanakan nama struct nya
    int data[MAX];
    int head;
    int tail;
} queue_t;

queue_t queue;//nama struct yg sudah disederhanakan

void inisialisasi(){//awalan agar variable menjadi -1 dan tidak jadi angka random saat di run
    queue.head=-1;
    queue.tail=-1;
}

short penuh() {//untuk mengecek data dari queue itu penuh atau ngga
  if (queue.tail == MAX - 1) {
    return 1;//1=true, kalo queuenya udah penuh maka hasilnya true
  }
  return 0;//0=false, kalo queuenya masih kosong maka hasilnya false
}

short kosong() {//untuk mengecek data dari queue itu kosong atau ngga
  if (queue.tail == -1) {
    return 1;//1=true, kalo queuenya masih kosong maka hasilnya true
  }
  return 0;//0=false, kalo queuenya ga kosong maka hasilnya false
}

void enqueue(int data){//untuk menambah data queue
    if (penuh()){
      printf("Data udah full ya ges ya");//if nya akan ngecetak ini kalo nilai penuh nya true (queue penuh)
      return;
    }
    queue.tail++;
    queue.data[queue.tail]=data;
    printf("Data %d berhasil dimasukkan", queue.data[queue.tail]);
}

void dequeue(){//untuk menghilangkan data queue
    if (kosong()) {
    printf("\nDatanya kosong :<");//if nya ngecetak ini kalo nilai kosong nya true (queue kosong)
    return;
    }
    int temp=queue.data[0];
    for(int i=0; i<=queue.tail; i++){
        queue.data[i]=queue.data[i+1];
    }
    queue.tail--; //untuk menghilangkan data queue pertama yg diinput
    printf("Data %d telah dibuang ke laut", temp);
}

void awal(){//sama seperti inisialisasi
    queue.head=queue.tail=-1;
}

void cetak(){//untuk nampilin isi data nya
    if (kosong()){
        printf("\nData kosong seperti hati kamu");//if nya ngecetak ini kalo nilai kosong nya true (queue kosong)
        return;
    }
    printf("Isi data: ");
    for (int i=queue.head+1; i<=queue.tail; i++)
    {
        Sleep(100);//berguna untuk men delay data yg akan muncul
        printf("\n%d", queue.data[i]);
    }
}

void bersih(){//untuk menghapus semua data
    if(kosong()){
        printf("\nDatanya kosong");//if nya ngecetak ini kalo nilai kosong nya true (queue kosong)
        return;
    }
    inisialisasi();
    printf("\nSemua data telah terbuang entah kemana");
}

int main()
{
    inisialisasi();
    awal();
    int pilihan;
    int data;
    int a;

    printf("\n\n\n\n\n\n");//loading screen
    printf("\t\t\t\t\t\t       ");
    printf("KAK UDAH KAK\n\n");
    printf("\t\t\t\t   ");
    for(a=0;a<=50;a++){
        printf("%c",219);
        Sleep(100);
    }
    printf("\n\n\t\t\t\t\t\t     Tetaplah putus asa   ");
    getch();

    do{
        system ("cls");//untuk bersihin layar
    printf("1. Masukkan satu antrian");
    printf("\n2. Keluarkan satu antrian");
    printf("\n3. Lihat isi antrian");
    printf("\n4. Hapus isi antrian");
    printf("\n5. Keluar");
    printf("\nMasukkan pilihan: ");
    scanf("%d", &pilihan);//untuk input nilai ke variable

    switch (pilihan){//menu nya kakak...

    case 1:
        printf("Masukkan data: ");
        scanf("%d", &data);
        enqueue(data);
        getch();
        break;
    case 2:
        dequeue();
        getch();
        break;
    case 3:
        cetak();
        getch();
        break;
    case 4:
        bersih();
        getch();
        break;
    case 5:
        exit(0);
    default:
        printf("\nAngka nya ga ada kok dipilih");
        getch();
    }
}while (pilihan !=5);//untuk ngulang menu
return 0;
}




