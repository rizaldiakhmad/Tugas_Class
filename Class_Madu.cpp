#include <iostream>
#include <string>
using namespace std;


class madu{
	public:
		int jumlahmadu ;
		int hargamadu;
		string jenismadu;
		string teksturdanwarna;
		
		void berkhasiat(string manfaat);
		void kualitas(string hasil);
		
};
		void madu::berkhasiat(string manfaat){
	cout << "Khasiat madu :"<< manfaat <<endl <<endl;
}
	
void madu::kualitas(string hasil){
	cout << "Kualitas : " <<hasil<<endl <<endl;
	}	
int main(){
	madu maduTJ, maduAlWadey, maduBima;
	
	maduTJ.jumlahmadu =1;
	maduTJ.hargamadu =135000;
	maduTJ.jenismadu = "Madu Kelulut";
	maduTJ.teksturdanwarna ="Agak Kecoklatan";
	
	maduAlWadey.jumlahmadu =1;
	maduAlWadey.hargamadu = 150000;
	maduAlWadey.jenismadu ="Monoflora";
	maduAlWadey.teksturdanwarna="Kental & Kekuningan";
	
	maduBima.jumlahmadu =1;
	maduBima.hargamadu = 200000;
	maduBima.jenismadu ="Hitam Pahit";
	maduBima.teksturdanwarna ="Sangat Kental & Hitam Pekat";
	
	string pilih;
	cout<< "Pilih Madu : "; cin >> pilih;
	
	if(pilih=="MADUTJ"){
		cout << "Madu TJ : "<<endl;
		cout << " - Jumlah Madu       = " <<maduTJ.jumlahmadu<<"Botol"<<endl;
		cout << " - Harga Madu 	     = " <<maduTJ.hargamadu<<" Rupiah"<<endl;
		cout << " - Jenis Madu        = " <<maduTJ.jenismadu<<endl;
		cout << " - Tekstur dan Warna = " <<maduTJ.teksturdanwarna<<endl;
		maduTJ.berkhasiat("Khasiat utama dapat meningkatkan Metabolisme tubuh agar tetap sehat dan kuat");
		maduTJ.kualitas("baik");
	}
	
	
}
