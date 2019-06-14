#include "header.h"
// DICKY IBROHIM
// Struktur
struct titik // Typedata bentukan yang terbentuk dari banyak type data
{   // KOORDINAT
    int x;
    int y;

};

// STRUCTUR TYPE DATA BENTUKAN
typedef struct
{
    int angka1;
    int angka2;
    int total;

} penjumlahan;

typedef struct
{
    char bentuk [25]; // STRING
    char rasa [25];
    char warna [25];
    int harga;
} tahu;

typedef struct
{
    char *bentuk ; // STRING
    char *rasa ;
    char *warna;
    int harga;
} tahu2;



// STRUCTUR TYPE DATA BENTUKAN
typedef struct
{
    char *nama;
    char *warnakulit;
    int umur;
    char *warnarambut;
    char hoby [25];
    char *kesimpulan;
    //Nama
    int nilaiuts;
    int nilaiuas;
    int nilaitugas;
    int nilaiakhir;



} dimas;

int main()
{   // TYPEDEF STRUCT POINTER
    dimas karakter;
    karakter.nama="Dimas";
    karakter.warnakulit="Coklat";
    karakter.umur= 19;
    karakter.warnarambut="hitam";
    karakter.kesimpulan="Tampan";
    printf ("Nama         = %s\n", karakter.nama);
    printf ("Warna Kulit  = %s\n", karakter.warnakulit);
    printf ("Umur         = %d\n", karakter.umur);
    printf ("Warna rambut = %s\n", karakter.warnarambut);
    strcpy (karakter.hoby, "Gelutan");
    printf ("Hoby         = %s\n", karakter.hoby);
    printf ("Kesimpulan   = %s\n\n", karakter.kesimpulan);
    karakter.nilaiuts=90;
    karakter.nilaiuas=80;
    karakter.nilaitugas=100;
    karakter.nilaiakhir= (karakter.nilaiuts*0.3)+(karakter.nilaiuas*0.3)+(karakter.nilaitugas*0.4);
    printf ("Nilai UTS  = %d\n", karakter.nilaiuts);
    printf ("Nilai UAS  = %d\n", karakter.nilaiuas);
    printf ("Nilai TUGAS= %d\n", karakter.nilaitugas);
    printf ("Nilai Akhir= %d\n\n", karakter.nilaiakhir);
    tahu2 tehu;

    tehu.bentuk="Segitiga";




    // DARI TYPEDEF STRUCT
    penjumlahan jumlah; // Penjumlahan fungsinya sama dengan type data
    int              x; // Perbandingan
    jumlah.angka1= 12;
    jumlah.angka2= 20;
    jumlah.total= jumlah.angka1+jumlah.angka2;
    printf ("Jumlah= %d\n\n", jumlah.total);

    // DARI STRUCT
    struct titik ttk; //struct nama_struct nama_variable //titik menjadi type data --> Sati Struktur
           int     a; // Mirip ini type data variable;
    ttk.x= 10; //nama_variable.atributdistruct; --> Sari Struktur
    ttk.y= 6;// --> Dari Struct
    printf ("Titik X= %d\n", ttk.x);
    printf ("Titik Y= %d\n", ttk.y);

    //TAHU TYPEDEF
    tahu th; // Membuat Variable

    // Cara lain
    tahu th2 ={"Kotak", "Gurih", "Putih", 400}; // INISIALISASI
    printf ("Bentuk %s\n", th2.bentuk);

    // Cara lain
    strcpy(th.bentuk, "Bulat");
    strcpy (th.rasa, "Enak");
    strcpy (th.warna, "Coklat");
    th.harga=500;
    printf ("Bentuk: %s\n\tRasa: %s\n\tWarna: %s\n\tHarga: %d", th.bentuk, th.rasa, th.warna, th.harga);


    return 0;
}
