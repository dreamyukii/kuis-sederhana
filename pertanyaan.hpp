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

    pertanyaan[0] = "Volvo";
    pertanyaan[1] = "BMW";
    pertanyaan[2] = "Volvo";
    pertanyaan[3] = "BMW";
    pertanyaan[4] = "Volvo";

    std::string jawaban1[5]; //jawaban1
    jawaban1[0] ="";
    jawaban1[1] ="";
    jawaban1[2] ="";
    jawaban1[3] ="";
    jawaban1[4] ="";

    std::string jawaban2[5]; //jawaban2
    jawaban2[0] ="";
    jawaban2[1] ="";
    jawaban2[2] ="";
    jawaban2[3] ="";
    jawaban2[4] ="";

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
