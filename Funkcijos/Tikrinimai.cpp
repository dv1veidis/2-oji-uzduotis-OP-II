#include "My_lib.h"
#include "Studentas.h"

string Rtikrinimas (){
string n;
cin>>n;
while (cin.fail()){
	cin.clear();
	cin.ignore();
	cout<<"Blogas Ivestis. Iveskite (t-taip arba bet kokia kita raide jei ne)"<<endl;
	cin>>n;
}
return n;
}

int Sktikrinimas(){
int n;
cin>>n;
while (n<1 || n>10){
	cout<<"Bloga Ivestis. Prasome ivesti skaciu tarp 1 ir 10!"<<endl;
	cin.clear();
	cin.ignore();	
	cin>>n;
	
}
return n;
}

int Paztikrinimas(){
int n;
cin>>n;
while (n<0 || n>10){
	cin.clear();
	cin.ignore();
	cout<<"Bloga Ivestis. Prasome ivesti skaciu tarp 1 ir 10 arba jei norite nutraukti 0!"<<endl;
	cin>>n;
}
return n;
}

bool filetikrinimas(int n){
if(n>0 && n<11){
	return true;
}
else return false;
}

int StudentuSK(){
	int n;
cin>>n;
	 while(n<1){
	cout<<"Bloga Ivestis. Prasome ivesti skaciu didesni uz 1"<<endl;
	cin.clear();
	cin.ignore();	
	cin>>n;
	 }
return n;
 }

template <class X>
void sortByVidurkis(X &studentas){
  sort(studentas.begin(), studentas.end(), compare);
}
template <class X>
void sortByVidurkisList(X &studentas){
  studentas.sort(compare);
}