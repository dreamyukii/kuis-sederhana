void escapeUtama(){
    //fungsi game utama
        std::string pertanyaan[5];

        pertanyaan[0] = "Kamu terbangun ";
        pertanyaan[1] = "Kamu berjalan ditengah hutan untuk mencari jalan pulang,tiba-tiba air hujan";
        pertanyaan[2] = "";
        pertanyaan[3] = "BMW";
        pertanyaan[4] = "Volvo";

        std::string pertanyaan2[5];


        std::string opsi1[5]; //opsi1
        opsi1[0] ="1.Membawa ketiga barang tersebut dan pergi";
        opsi1[1] ="";
        opsi1[2] ="";
        opsi1[3] ="";
        opsi1[4] ="";

        std::string opsi2[5]; //ban2
        opsi2[0] ="2.Diam saja ditempat";
        opsi2[1] ="";
        opsi2[2] ="";
        opsi2[3] ="";
        opsi2[4] ="";

//jawabannya dibuat 2 karena biar bisa dispawn secara berdampingan
        char kunci[5]={'A','B','B','A','B'};//kunci jawaban
        char jawab;

    tampilkanNyawa();//menampilkan kesempatan awal
    for(int i = 0;i < 5; i++)
    {
        std::cout << i+1 << ". " << pertanyaan[i] << std::endl; //pertanyaan
        std::cout << "Pilihan anda : " << std::endl;

        std::cout << opsi1[i] << "\t" << opsi2[i] << std::endl; //pilihan jawaban

        std::cout << "Pilihan [A/B]: "; std::cin >> jawab; //input jawaban

        if(jawab == kunci[i]) //jika jawab sesuai dengan kunci[i] program ini dijalankan
        {
            std::cout << "Pilihan Benar!" << std::endl;
            tampilkanKesempatan();//menampilkan sisa kesempatan
        }
        else
        {
            //jika pemain salah menjawab program ini yang dijalankan
            std::cout << "Pilihan Salah!" << std::endl;
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