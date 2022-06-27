//fungsi gameover()
void gameover(){
    std::cout << R"(
   _____          __  __ ______    ______      ________ _____
  / ____|   /\   |  \/  |  ____|  / __ \ \    / /  ____|  __ \
 | |  __   /  \  | \  / | |__    | |  | \ \  / /| |__  | |__) |
 | | |_ | / /\ \ | |\/| |  __|   | |  | |\ \/ / |  __| |  _  /
 | |__| |/ ____ \| |  | | |____  | |__| | \  /  | |____| | \ \
  \_____/_/    \_\_|  |_|______|  \____/   \/   |______|_|  \_\)"<<std::endl;
}
//fungsi game utama
void masukGame(){
    std::string pertanyaan[5];

    pertanyaan[0] = "Negara mana yang hanya terdapat dua wanita saja?";
    pertanyaan[1] = "Ada ayam lima, dikali dua. Berapa total ayam semuanya? ";
    pertanyaan[2] = "Jika dibutuhkan waktu 10 menit untuk merebus 1 butir telur, Berapa waktu yang diperlukan untuk merebus 5 butir telur? ";
    pertanyaan[3] = "Tebak binatang apa yang jago renang?";
    pertanyaan[4] = "Saat di balik akan berkurang 3. Apakah itu? ";

    std::string jawaban1[5]; //jawaban1
    jawaban1[0] ="A. ITALIA";
    jawaban1[1] ="A. 10";
    jawaban1[2] ="A. 50 Menit";
    jawaban1[3] ="A. Bebek";
    jawaban1[4] ="A. Angka 12";

    std::string jawaban2[5]; //jawaban2
    jawaban2[0] ="B. JERMAN";
    jawaban2[1] ="B. 5";
    jawaban2[2] ="B. 10 Menit";
    jawaban2[3] ="B. Ikan";
    jawaban2[4] ="B. Angka 9";

    std::string benar[5]; //benar
    benar[0] ="ITALIA (ITA dan LIA)";
    benar[1] ="5, Karena yang di kali 2, yang di darat 3 jadi total semuanya ada 5";
    benar[2] ="Tetap 10 menit, Tinggal rebus aja secara bersama-sama";
    benar[3] ="Bebek. Kalau ikan bukan renang, tapi menyelam";
    benar[4] ="Angka 9. karena angka 9 kalo di balik jadi angka 6.";


//jawabannya dibuat 2 karena biar bisa dispawn secara berdampingan
    char kunci[5]={'A','B','B','A','B'};//kunci jawaban
    char jawab;

    tampilkanNyawa();//menampilkan kesempatan awal
    for(int i = 0;i < 5; i++)
    {
        std::cout << i+1 << ". " << pertanyaan[i] << std::endl; //pertanyaan
        std::cout << "Pilih jawaban di bawah ini : " << std::endl;
        std::cout << jawaban1[i] << "\t" << jawaban2[i] << std::endl; //pilihan jawaban
        std::cout << "Jawab [A/B]: "; std::cin >> jawab; //input jawaban
        if(jawab == kunci[i]) //jika jawab sesuai dengan kunci[i] program ini dijalankan
        {
            std::cout << "Jawaban Benar!" << std::endl;
            tampilkanKesempatan();//menampilkan sisa kesempatan
        }
        else
        {
            //jika pemain salah menjawab program ini yang dijalankan
            std::cout << "Jawaban Salah!" << std::endl;
            hapusNyawa();//fungsi untuk mengurangi kesempatan pemain
            tampilkanKesempatan();//menampilkan kesempatan
        }
        std::cout << std::endl << std::endl;
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
