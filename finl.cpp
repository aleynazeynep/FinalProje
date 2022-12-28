#include<stdio.h>
void fonksiyon()
{  
	printf("\t\tSITEMIZE HOSGELDINIZ, SIZE HIZMET VERMEK BIZE BIZIM ICIN BIR MUTLULUK\n\n");
}

int isim()
{
	char isim[50];
	FILE *dosyapoint = fopen("müsteriisim.txt","a");
	if(dosyapoint == NULL)
		printf("Dosya olusturulamadi.");
	else {
		printf("Isminiz : ");
		fgets(isim,50,stdin);
		fputs(isim,dosyapoint);
		printf("\tKaydedildi.\n");
		fclose(dosyapoint);
	}
}
int soyisim()
{
	char soyisim[50];
	FILE *dosyapoint = fopen("müsterisoyisim.txt","a");
	if(dosyapoint == NULL)
		printf("Dosya olusturulamadi.");
	else {
		printf("\nSoyisminiz : ");
		fgets(soyisim,50,stdin);
		fputs(soyisim,dosyapoint);
		printf("\n\tKaydedildi.");
		fclose(dosyapoint);
	}
}


int main() {
	
	int  mail, odaturu, gunsayisi, kahvalti, ekstrahizmet, a, i=0, j=0, k=0, metin;
	
	for(i=0 ; i<1 ; i++ );
	{
	    
			
		  
    fonksiyon();
	isim();
	soyisim();
	
	char mail[50];
    
    printf("\n\n Mailinizi giriniz: ");
    scanf("%s",&mail);
    
    printf("\n\t Mailiniz = %s ", mail);
	
		do{
			
		printf("\n\nHangi oda turunu rezerve etmek istedigini giriniz. \n");
		printf("Iki kisilik: 1\nUc kisilik : 2\nDort kisilik icin : 3'u tuslayin.");
		scanf("%d" , &odaturu);
	
		if(odaturu>3)
			printf("\tLUTFEN GECERLI BIR DEGER GIRINIZ.\n");
		else
			continue;
	}
	while(odaturu>3);
	
		
		do
		{
		printf("\n\nOtelde kalacaginiz gun sayisini giriniz. \n");
		printf("3 gun: 3\n4 gun: 4\nBes gun : 5'i tuslayin.\n");
		scanf("%d" , &gunsayisi);
		
		if(gunsayisi>10)
			printf("\tLUTFEN 10'DAN AZ GUN SECINIZ.\n");
		else
		   continue;
	}
	while(gunsayisi>10);
	
		do
		{
		printf("\n\nKahvalti ister misiniz?\n");
	  	printf("Evet: 1\nHayir : 2\n",&kahvalti );
	  	scanf("%d" , &kahvalti);
	  	
	  	if(kahvalti>2)
			printf("\tLUTFEN 1 VEYA 2'YI TUSLAYINIZ'.\n");
		else 
		continue;
	}
	while(kahvalti>2);
	  	
	  	char metin[100];
	  	int j;
	  	printf("\tLUTFEN EKSTRA BIR ISTEGINIZ VARSA BURAYA YAZINIZ:\n\n");
	  	scanf("%s",&metin);
	  	gets(metin);
	  	
	  	
		printf("\t\n**REZERVASYONUNUZ YAPILMIÞTIR.\n\n\n");
    	printf("Rezervasyonu tamamla : 1'i\nRezervasyonu iptal et. : 2'i\nDanisma ile iletisime gec : 3'u \nGirilen secenekleri otel sorumlusuna bildir. : 4'u tuslayin.\t");
	    scanf("%d",&a);
		
		if(a==1)
			printf("\t\t\nREZERVASYON TAMAMLANDI.");
		else if(a==2)
			printf("\t\t\nREZERVASYON IPTAL EDILDI.");	
		else if(a==3)
			printf("\t\t\nDANISMAYA BAGLANILIYOR...");
		else if(a==4)
			printf("\t\t\nOTEL SORUMLUSUNA BILDIRI YAPILDI.\n");
			
	}
	
	
	return 0;
	
}





	

