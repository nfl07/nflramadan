#include<iostream>
#include<string.h>
using namespace std;
void XORChiper(char orignalString[]) {
   char xorKey = 'T';
   int len = strlen(orignalString);
   for (int i = 0; i < len; i++){
      orignalString[i] = orignalString[i] ^ xorKey;
      cout<<orignalString[i];
   }
}
int main(){
   char sampleString[] = "Selamat dan Sukses Ujian Akhir Semester Gasal 2022-2023";
   cout<<"Stringnya adalah: "<<sampleString<<endl;
   cout<<"Enkripsinya adalah: ";
   XORChiper(sampleString);
   return 0;
}
