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

int carp(){
s=a*b;
printf("\n\n a=%d ve b=%d çarpma sonucu = %d \n\n",a,b,s);
}

int main(){
	
printf("\n\nLütfen Toplama=1 Çikarma=2 Çarpma=3 Çıkış=0 değerini giriniz : ");
scanf("%d",&i);

	if(i==1){
		topla();
		main();
	}else if(i==2){
		cikar();
		main();
	}else if(i==3){
		carp();
		main();
	}else if(i==0){
		printf("\n\nİyi Çalışmalar...\n\n");
	}else{
		printf("\n\nLütfen geçerli bir işlem seçiniz...\n\n");
		main();
	}

}
