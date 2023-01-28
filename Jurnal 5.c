#include <stdio.h> 
void gaya(int a, int b);
int x,y; 
void main(){ 
 printf("Masukkan Massa (kg) : ");
 scanf("%d",&x);
 printf("Masukkan Percepatan (m/s^2) : ");
 scanf("%d",&y);
 gaya(x,y); 
} 
void gaya(int a, int b){ 
 int hasil;
 hasil=a*b;
printf("Besar gaya (N) = %d", hasil);
}
