/* Dekripsi sembarang berkas dengan  algoritma XOR sederhana.
*/
 
#include <stdio.h>
 
main(int argc, char *argv[])
{
 FILE *Fin, *Fout;
 char p, c, K[100];
 int i, n; 
 
 Fin = fopen(argv[1], "rb");
 if (Fin == NULL)
   printf("Kesalahan dalam membuka %s sebagai berkas masukan/n",  argv[1]);
    
 Fout = fopen(argv[2], "wb"); 
 printf("\nEnkripsi %s menjadi %s ...\n", argv[1], argv[2]);
 printf("\n");
 
 printf("Kata kunci : "); gets(K); 
 n = strlen(K);    /*panjang kunci*/ 
 i = 0; 
 while ((c = getc(Fin)) != EOF)  {  
   p = c ^ K[i];   /* operasi XOR */  
   putc(p, Fout);    
   i++; 
   if (i > (n - 1)) i = 0; 
 } 
 fclose(Fin);
 fclose(Fout);  
}  

