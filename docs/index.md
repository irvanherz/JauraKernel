# Selamat Datang di Situs Pengembangan OS Indonesia

>**_Penulisan dokumen ini diprakarsai oleh Muhammad Irvan Hermawan dari perkumpulan OSDev_ID (Programmer OS Indonesia)_**

Semuanya berawal dari grup Programmer OS Indonesia di [Facebook](http://www.facebook.com/groups/programmer.OS.Indonesia). Awalnya kami hanya iseng mengembangkan kernel dari template 8086 emulator, lalu mulai muncul ketertarikan yang besar terhadap pengembangan kernel dan sistem operasi.
Saat ini, kami sudah berkembang lebih jauh hingga tahapan riset perencanaan _system architecture, memory management, driver architecture dan filesystem driver_. Dari awalnya yang hanya berkutat pada pengembangan kernel yang ditulis dengan assembly, sekarang kami sudah menguasai berbagai aspek untuk pengembangan kernel dengan C dan C++.
Halaman ini ditulis untuk tujuan pembelajaran mengenai pengembangan OS dengan C++. Tutorial didasarkan pada arsitektur kernel **Jaura**.


## Visi

Visi yang ingin dicapai adalah memperkenalkan kepada orang-orang yang tertarik untuk mengembangkan OS, sehingga nantinya diharapkan agar suatu saat ditemui hasil riset anak bangsa yang bermanfaat untuk perkembangan OS.

## Misi

Meskipun OS yang sudah ada banyak diakui sudah mendekati sempurna, bukan berarti harus patah semangat. Karena belajar membuat OS bukan hanya mengejar ketertinggalan, tapi di sini akan lebih ditekankan mengenai riset. Hasil riset diharapkan dapat bermanfaat untuk berbagai pihak. Misi yang ingin dicapai dijabarkan sebagai berikut:

 - Mempelajari internal sistem operasi secara mendasar.
 - Mempelajari metode pembangunan sistem operasi.
 - Melakukan riset pada berbagai aspek sistem operasi.
 - Menciptakan inovasi arsitektur sistem operasi yang lebih modern.

## Latar Belakang

Latar belakang dari penulisan dokumen dan tutorial ini adalah karena penulis melihat minimalnya materi praktek untuk mendalami bagaimana sebenarnya sistem operasi bekerja. Padahal materi sistem operasi hampir selalu ada di jurusan Teknik Informatika, namun belum banyak output dari mata kuliah tersebut yang menunukkan nilai kebermanfaatan ---atau setidaknya menghasilkan jejak---.

## Fokus Saat Ini

Sistem operasi kebanyakan ditulis dengan bahasa C. Karena bahasa ini dinilai memiliki banyak aspek yang mendukung dalam pengembangan sistem operasi. Hal ini bisa terjadi karena bahasa C adalah salah satu dari bahasa tingkat tinggi yang dapat menghasilkan output binary murni yang dapat dijalankan oleh prosesor secara langsung.
Bahasa C++ juga demikian, namun implementasi OOP itu rupanya menghasilkan beberapa kode tambahan yang seringkali masih membutuhkan dependensi dari library. Meski begitu, tidak dipungkiri bahwa fitur OOP membuat pembuatan program menjadi lebih mudah. Makanya, dalam tutorial ini, penulis sudah melakukan berbagai riset untuk memungkinkan pengembangan kernel dengan bahasa C++. Harapannya, pembaca yang mengikuti tulisan ini dapat mudah mengikuti dan termotivasi untuk pengembangan OS.
