#include <iostream>
#define nyawa 5

//struct untuk kesempatan
struct Nyawa{
    int atas;
    int data[nyawa];
}Kesempatan;

//kesempatan dalam game ini yaitu 5x kesempatan
void kesempatanAwal(){
    Kesempatan.atas=5;
}

//mengecek apakah kesempatan habis/tidak
int apakahKosong(){
    if(Kesempatan.atas==0)
        return 1;
    else
        return 0;
}

//jika pemain memilih jawaban salah maka fungsi ini dijalankan
void hapusNyawa(){
    if(apakahKosong()==0){
        Kesempatan.atas--;
    }
}

//menampilkan kesempatan pemain
void tampilkanNyawa(){
    kesempatanAwal();
    std::cout<<Kesempatan.atas;
}