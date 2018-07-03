#include <stdio.h>
int a=5,b=2,s,i;

int topla(){
s=a+b;
printf("\n\n a=%d ve b=%d toplama sonucu = %d \n\n",a,b,s);
}

int cikar(){
s=a-b;
printf("\n\n a=%d ve b=%d çikarma sonucu = %d \n\n",a,b,s);
}


int main(){
	
printf("\n\nLütfen Toplama=1 Çikarma=2 değerini giriniz : ");
scanf("%d",&i);

	if(i==1){
		topla();
	}else if(i==2){
		cikar();
	}else{
		printf("\n\nLütfen geçerli bir işlem seçiniz...\n\n");
	}

}
