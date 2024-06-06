//Shiva Indah Kurnia, 2311102035
#include <iostream>

using namespace std;

int main()
{
   string kalimat;
   int count=0;
   cout << "======================================" << endl;
   cout << "====PROGRAM MENENTUKAN HURUF VOKAL====" << endl;
   cout << "======================================" << endl;
   cout << "Masukan Kalimat yang anda inginkan: "   ;
   cin  >> kalimat; 

   for (int i=0; i<kalimat.length(); i++)
   {
       if(kalimat[i]=='a'|| kalimat[i]=='i'|| kalimat[i]=='u'|| kalimat[i]=='e'|| kalimat[i]=='o')
       {
             count++;
       }
   }
   cout << "Jumlah huruf vokal pada kalimat tersebut adalah : " << count;
   
}
