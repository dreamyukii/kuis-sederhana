using namespace std;

std::string pertanyaan[5] = {" 5 + 5 "," 10 + 10 "," 50 x 50 "," 100 : 4 ", " 100 - 50 "}; //soal
int jawaban1[5] = {10,25,250,25,60}; //jawaban1
int jawaban2[5] = {15,20,2500,20,50}; //jawaban2
//jawabannya dibuat 2 karena biar bisa dispawn secara berdampingan
char kunci[5]={'A','B','B','A','B'};//kunci jawaban

//fungsi gameover()
void gameover(){
    std::cout << "====================================\n";
    std::cout << "=\t\tGAME\t"   "\t=\n";
    std::cout << "=\t\tOVER\t "  "\t=\n";
    std::cout << "====================================\n";
}
//fungsi game utama
void masukGame(){
    char jawab;
    tampilkanNyawa();//menampilkan kesempatan awal
    for(int i = 0;i < 5; i++)
    {
        cout << i+1 << ". " << pertanyaan[i] << endl; //pertanyaan
        cout << "Pilih jawaban di bawah ini : " << endl;
        cout << jawaban1[i] << "\t" << jawaban2[i] << endl; //pilihan jawaban
        cout << "Jawab [A/B]: "; cin >> jawab; //input jawaban
        if(jawab == kunci[i]) //jika jawab sesuai dengan kunci[i] program ini dijalankan
        {
            cout << "Jawaban Benar!" << endl;
            tampilkanKesempatan();//menampilkan sisa kesempatan
        }
        else
        {
            //jika pemain salah menjawab program ini yang dijalankan
            cout << "Jawaban Salah!" << endl;
            hapusNyawa();//fungsi untuk mengurangi kesempatan pemain
            tampilkanKesempatan();//menampilkan kesempatan
        }
        cout << endl << endl;
    }

    if(apakahKosong()==true)//jika fungsi apakahKosong() bernilai true maka nilai ini akan dijalankan
    {
        gameover();//menampilkan fungsi gameover();
        tampilkanKesempatan();//menampilkan sisa kesempatan
    }
    else
    {
        tampilkanKesempatan();//menampilkan sisa kesempatan
    }
}
