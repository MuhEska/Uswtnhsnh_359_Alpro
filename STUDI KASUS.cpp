#include <iostream>
using namespace std;
int main()
{
    int kode, pri, jml, tot, byr, kbl, jarak,ongkir,hrg,dis,disongkir;
    char mad;
    do
    {
        cout<<"========================================"<<endl;
    	cout<<"        	 Rumah Makan Barokah           "<<endl;
    	cout<<"        Jl. ni Saja Apa Yang Ada        "<<endl;
    	cout<<"========================================"<<endl;
    	cout<<"                                        "<<endl;
    	cout<<" ______________________________________ "<<endl;
    	cout<<"|     Menu Makanan      |      Harga   |"<<endl;
        cout<<"|                       |              |"<<endl;
        cout<<"|   1. Ayam Geprek      |  Rp. 21.000  |"<<endl;
        cout<<"|   2. Ayam Goreng      |  Rp. 17.000  |"<<endl;
        cout<<"|   3. Udang Goreng     |  Rp. 19.000  |"<<endl;
        cout<<"|   4. Cumi Goreng      |  Rp. 20.000  |"<<endl;
        cout<<"|   5. Ayam Bakar       |  Rp. 25.000  |"<<endl;
        cout<<"|_______________________|______________|"<<endl;
        cout<<""<<endl;
        cout<<"Masukan Pilihan Anda : ";
        cin>>kode;
        switch (kode)
        {
        case 1:
        cout<<'\n'<<"Ayam Geprek"<<endl;
        pri=21000;
        cout<<"Masukkan jarak rumah : "; cin>>jarak;
        cout<<"Masukan Jumlah Porsi : ";
        cin>>jml;
        hrg=pri*jml;
        if(jarak<3)
        ongkir=15000;
        else if(jarak>=3)
        ongkir=25000;
        else if(hrg<25000)
		disongkir=0;
		dis=0;
		if (hrg>=25000)
		disongkir=3000;
		else if(hrg>=50000)
		disongkir=5000;
		dis = jml*15/100;
        tot=hrg+ongkir-dis-disongkir;
        cout<<"harga 		       : Rp. "<<hrg<<endl;
        cout<<"ongkir 		       : Rp. "<<ongkir<<endl;
        cout<<"diskon		       : Rp. "<<dis<<endl;
        cout<<"diskon ongkir	       : Rp. "<<disongkir<<endl;
        cout<<"Total Hargany           : Rp. "<<tot<<endl;
        cout<<"Dibayar                 : Rp. ";
        cin>>byr;
        kbl=byr-tot;
        cout<<"Kembali                 : Rp."<<kbl<<endl;
        cout<<""<<endl;
        cout<<"Masih Ada Yang Lain Y/T : ";
        cin>>mad;
        break;
            
        case 2:
        cout<<'\n'<<"Ayam Goreng"<<endl;
        pri=17000;
        cout<<"Masukkan jarak rumah : "; cin>>jarak;
        cout<<"Masukan Jumlah Porsi : ";
        cin>>jml;
        hrg=pri*jml;
        if(jarak<3)
        ongkir=15000;
        else if(jarak>=3)
        ongkir=25000;
        else if(hrg<25000)
		disongkir=0;
		dis=0;
		if (hrg>=25000)
		disongkir=3000;
		else if(hrg>=50000)
		disongkir=5000;
		dis = jml*15/100;
        tot=hrg+ongkir-dis-disongkir;
        cout<<"harga 		       : Rp. "<<hrg<<endl;
        cout<<"ongkir 		       : Rp. "<<ongkir<<endl;
        cout<<"diskon		       : Rp. "<<dis<<endl;
        cout<<"diskon ongkir	       : Rp. "<<disongkir<<endl;
    	cout<<"Total Hargany           : Rp. "<<tot<<endl;
        cout<<"Dibayar                 : Rp. ";
        cin>>byr;
        kbl=byr-tot;
        cout<<"Kembali                 : Rp."<<kbl<<endl;
        cout<<""<<endl;
        cout<<"Masih Ada Yang Lain Y/T : ";
        cin>>mad;
        break;
        
    	case 3:
        cout<<'\n'<<"Udang Goreng"<<endl;
        pri=19000;
        cout<<"Masukkan jarak rumah : "; cin>>jarak;
        cout<<"Masukan Jumlah Porsi : ";
        cin>>jml;
        hrg=pri*jml;
        if(jarak<3)
        ongkir=15000;
        else if(jarak>=3)
        ongkir=25000;
        else if(hrg<25000)
		disongkir=0;
		dis=0;
		if (hrg>=25000)
		disongkir=3000;
		else if(hrg>=50000)
		disongkir=5000;
		dis = jml*15/100;
        tot=hrg+ongkir-dis-disongkir;
        cout<<"harga 		       : Rp. "<<hrg<<endl;
        cout<<"ongkir 		       : Rp. "<<ongkir<<endl;
        cout<<"diskon		       : Rp. "<<dis<<endl;
        cout<<"diskon ongkir	       : Rp. "<<disongkir<<endl;
        cout<<"Total Hargany           : Rp. "<<tot<<endl;
        cout<<"Dibayar                 : Rp. ";
        cin>>byr;
        kbl=byr-tot;
        cout<<"Kembali                 : Rp."<<kbl<<endl;
        cout<<""<<endl;
        cout<<"Masih Ada Yang Lain Y/T : ";
        cin>>mad;
        break;
    
        case 4:
        cout<<'\n'<<"Cumi Goreng"<<endl;   
        pri=20000;
        cout<<"Masukkan jarak rumah : "; cin>>jarak;
        cout<<"Masukan Jumlah Porsi : ";
    	cin>>jml;
    	hrg=pri*jml;
        if(jarak<3)
        ongkir=15000;
        else if(jarak>=3)
        ongkir=25000;
        else if(hrg<25000)
		disongkir=0;
		dis=0;
		if (hrg>=25000)
		disongkir=3000;
		else if(hrg>=50000)
		disongkir=5000;
		dis = jml*15/100;
        tot=hrg+ongkir-dis-disongkir;
        cout<<"harga 		       : Rp. "<<hrg<<endl;
        cout<<"ongkir 		       : Rp. "<<ongkir<<endl;
        cout<<"diskon		       : Rp. "<<dis<<endl;
        cout<<"diskon ongkir	       : Rp. "<<disongkir<<endl;
        cout<<"Total Hargany           : Rp. "<<tot<<endl;
        cout<<"Dibayar                 : Rp. ";
        cin>>byr;
        kbl=byr-tot;
        cout<<"Kembali                 : Rp."<<kbl<<endl;
        cout<<""<<endl;
        cout<<"Masih Ada Yang Lain Y/T : ";
        cin>>mad;
        break;
    
        case 5:
        cout<<'\n'<<"Ayam Bakar"<<endl;    
        pri=25000;
        cout<<"Masukkan jarak rumah : "; cin>>jarak;
        cout<<"Masukan Jumlah Porsi : ";
        cin>>jml;
        hrg=pri*jml;
        if(jarak<3)
        ongkir=15000;
        else if(jarak>=3)
        ongkir=25000;
        else if(hrg<25000)
		disongkir=0;
		dis=0;
		if (hrg>=25000)
		disongkir=3000;
		else if(hrg>=50000)
		disongkir=5000;
		dis = jml*15/100;
        tot=hrg+ongkir-dis-disongkir;
        cout<<"harga 		       : Rp. "<<hrg<<endl;
        cout<<"ongkir 		       : Rp. "<<ongkir<<endl;
        cout<<"diskon		       : Rp. "<<dis<<endl;
        cout<<"diskon ongkir	       : Rp. "<<disongkir<<endl;
        cout<<"Total Hargany           : Rp. "<<tot<<endl;
        cout<<"Dibayar                 : Rp. ";
        cin>>byr;
        kbl=byr-tot;
        cout<<"Kembali                 : Rp."<<kbl<<endl;
        cout<<""<<endl;
        cout<<"Masih Ada Yang Lain Y/T : ";
        cin>>mad;
        break;
        default:
        cout<<"Kode Yang Anda Masukan Tidak Tersedia";
        } 
    }
    while (mad/='Y');
    cout<<"Terima Kasih Atas Kunjungan Anda Di Rumah Makan Barokah";
    return 0;
}
