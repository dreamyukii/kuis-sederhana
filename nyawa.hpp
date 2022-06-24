using namespace std;
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
    std::cout<<Kesempatan.atas<<endl;
}
//menampilkan sisa kesempatan pemain
void tampilkanKesempatan(){
    std::cout << Kesempatan.atas<<endl;
}


void opsiDebug(){
    int masukan;
    string keluar;
    bool apakahKeluar = false;

    do {
        system("clear");
        cout<<"------DEBUG-------\n";
        cout<<"1.Hapus Nyawa\n";
        cout<<"2.Tampilkan Nyawa\n";
        cout<<"3.Keluar\n";
        cout<<"--------------------------\n";
        cout<<"=";
        cin>>masukan;

        switch (masukan){
            case 1:
                hapusNyawa();
                break;
            case 2:
                tampilkanNyawa();
                break;
            case 3:
                goto keluar;
            default:
                cout<<"Menu tidak tersedia!";
                break;
        }

        cout<<"Mau keluar? (y/n) = ";cin>>keluar;

        apakahKeluar = keluar == "y";

    }

    while(!apakahKeluar);
    keluar:
    exit(0);

}