#include<iostream>
using namespace std;
main()

{
 char nama[20], golongan;
 int jam;
 long gaji, lembur;
 cout<<"PROGRAM MENGHITUNG UPAH MINGGUAN KARYAWAN"<<endl;
 cout<<"-------------MIFTAHUL FARIDH-------------\n";
 cout<<"-----------------------------------------\n";
 cout<<"Nama Karyawan     : ";
 cin.getline(nama,sizeof(nama));
 cout<<"Golongan (a/b/c/d): ";
 cin>>golongan;
 cout<<"Jam Kerja         : ";
 cin>>jam;
 cout<<"-----------------------------------------\n";
 lembur=3000;
 int mylembur=0;
 if (jam>48){
  mylembur=jam-48;
 }
 switch(golongan)
 {
 case 'a' :
  gaji = (jam-mylembur) * 4000;
   break;
  case 'b' :
  gaji = (jam-mylembur) * 5000;
   break;
   case 'c' :
  gaji = (jam-mylembur) * 6000;
   break;
    case 'd' :
  gaji = (jam-mylembur) * 7000;
   break;
     default :
            cout<<"Golongan Tidak Tersedia!"<<endl;
            gaji = 0;
            lembur = 0;
 }
   if (jam>48){
gaji = gaji+( (jam - 48) * lembur);
 }
    cout<<"Nama Karyawan  : "<<nama<<endl;
 cout<<"Total Upah     : Rp. "<<gaji<<endl;
}
