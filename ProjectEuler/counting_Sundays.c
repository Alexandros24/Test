#include<stdio.h>

int main() {
  int year=1901;
  int ndays[]={31,28,31,30,31,30,31,31,30,31,30,31};
  int k=0;
  int total=0;
  int i;
  for(i=0;i<12;i++)
    k+=ndays[i];
  for(year=1901;year<2001;year++) {
    if(!(year%4) || (!(year%100)&& !(year%400))) 
      ndays[1]=29;
    else 
      ndays[1]=28;
    for(i=0;i<12;i++) {
      if(!((k-1)%7)) {
	total++;
      }
      k+=ndays[i];
    }
  }
  printf("%d",total);
  return 0;
}

//h poli apla 12(protes meres tou mina)*100(xronia) / 7(ana 7 meres mia akribos Kiriaki)