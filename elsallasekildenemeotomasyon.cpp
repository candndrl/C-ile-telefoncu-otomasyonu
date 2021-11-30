#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
void aliskayitlistele();
void perkayit(){
	FILE *sifre;
	sifre=fopen("sifreper.txt","a");
	char isim[15];
	char soyisim[15];
	int sifre1,aranansifre,bulundumu=0,secim1=1;
	printf("Lutfen Bir Isim Giriniz=");
	scanf("%s",&isim);
	fprintf(sifre,"%s\t",isim);
	
	printf("Lutfen Bir Soyisim Giriniz=");
	scanf("%s",&soyisim);
	fprintf(sifre,"%s\t",soyisim);
	
	printf("Lutfen Bir Sifre Belirleyiniz=");
	scanf("%d",&sifre1);
	fprintf(sifre,"%d\n",sifre1);
	
	
	printf("Personel Kaydedilmistir.\n");
	fclose(sifre);
}

void permukayit(){
	FILE *sifre;
	sifre=fopen("sifrepermu.txt","a");
	char isim[15];
	char soyisim[15];
	int sifre1,aranansifre,bulundumu=0,secim1=1;
	printf("Lutfen Bir Isim Giriniz=");
	scanf("%s",&isim);
	fprintf(sifre,"%s\t",isim);
	
	printf("Lutfen Bir Soyisim Giriniz=");
	scanf("%s",&soyisim);
	fprintf(sifre,"%s\t",soyisim);
	
	printf("Lutfen Bir Sifre Belirleyiniz=");
	scanf("%d",&sifre1);
	fprintf(sifre,"%d\n",sifre1);
	
	
	printf("Personel Muduru Kaydedilmistir.\n");
	fclose(sifre);
}

void permusil(){
	FILE *kayit,*geciciD,*geciciS;
	kayit=fopen("sifrepermu.txt","r");
	geciciD=fopen("gecici.txt","w");
	geciciS=fopen("silinenpermu.txt","a");
	char isim[15];
	char soyisim[15];
	char silinecekisim[15];
	char silineceksoyisim[15];
	int sifre,gun,ay,yil;
	printf("\nLutfen Silinecek Personel Mudurunun Ismini Giriniz=");
	scanf("%s",&silinecekisim);
	printf("Lutfen Silinecek Personel Mudurunun Soyismini Giriniz=");
	scanf("%s",&silineceksoyisim);

	while(feof(kayit) == 0){
		fscanf(kayit,"%s\t%s\t%d\n",isim,soyisim,&sifre);
		if(strcmp(isim,silinecekisim) || strcmp(soyisim,silineceksoyisim)){
				fprintf(geciciD,"%s\t%s\t%d",isim,soyisim,sifre);
					
		}
		else {
		fprintf(geciciS,"%s\t%s\t%d\n",isim,soyisim,sifre);
		printf("Lutfen Gun Giriniz=");
		scanf("%d",&gun);
		if (gun>31){
			while(gun>31){ 
    			printf("\nHatali!!!Yeni bir secim yapiniz:");
				scanf("%d",&gun);
        		if (gun<31){
				fprintf(geciciS,"%d.",gun);
				break;
				}
			
    		}
		}
		else fprintf(geciciS,"%d.",gun);
	
		printf("Lutfen Ay Giriniz=");
		scanf("%d",&ay);
		if (ay>12){
			while(ay>12){ 
	    		printf("\nHatali!!!Yeni bir secim yapiniz:");
	    		scanf("%d",&ay);
	        	if (ay<12){
	        		
				fprintf(geciciS,"%d.",ay);
				break;
				}
			
	    	}
		}
		else {
			fprintf(geciciS,"%d.",ay);
		}
		
		printf("Lutfen Yil Giriniz=");
		scanf("%d",&yil);
		if (yil>2018){
			while(yil>2018){ 
	    		printf("\nHatali!!!Yeni bir secim yapiniz:");
				scanf("%d",&yil);
	        	if (yil<2018){
				fprintf(geciciS,"%d\n",yil);
				break;
				}
				
	    	}
		}
		else fprintf(geciciS,"%d\n",yil);
		
		}
	}
	printf("Personel Muduru Silinmistir.");
	fclose(kayit);
	fclose(geciciD);
	fclose(geciciS);
	remove("sifrepermu.txt");
	rename("gecici.txt","sifrepermu.txt");
}

void persil(){
	FILE *kayit,*geciciD,*geciciS;
	kayit=fopen("sifreper.txt","r");
	geciciD=fopen("gecici.txt","w");
	geciciS=fopen("silinenper.txt","a");
	char isim[15];
	char soyisim[15];
	char silinecekisim[15];
	char silineceksoyisim[15];
	int sifre,gun,ay,yil;
	printf("\nLutfen Silinecek Personelin Ismini Giriniz=");
	scanf("%s",&silinecekisim);
	printf("Lutfen Silinecek Personelin Soyismini Giriniz=");
	scanf("%s",&silineceksoyisim);

	while(feof(kayit) == 0){
		fscanf(kayit,"%s\t%s\t%d\n",isim,soyisim,&sifre);
		if(strcmp(isim,silinecekisim) || strcmp(soyisim,silineceksoyisim)){
				fprintf(geciciD,"%s\t%s\t%d",isim,soyisim,sifre);
					
		}
		else {
		fprintf(geciciS,"%s\t%s\t%d\n",isim,soyisim,sifre);
			
			printf("Lutfen Gun Giriniz=");
		scanf("%d",&gun);
		if (gun>31){
			while(gun>31){ 
    			printf("\nHatali!!!Yeni bir secim yapiniz:");
				scanf("%d",&gun);
        		if (gun<31){
				fprintf(geciciS,"%d.",gun);
				break;
				}
			
    		}
		}
		else fprintf(geciciS,"%d.",gun);
	
		printf("Lutfen Ay Giriniz=");
		scanf("%d",&ay);
		if (ay>12){
			while(ay>12){ 
	    		printf("\nHatali!!!Yeni bir secim yapiniz:");
	    		scanf("%d",&ay);
	        	if (ay<12){
	        		
				fprintf(geciciS,"%d.",ay);
				break;
				}
			
	    	}
		}
		else {
			fprintf(geciciS,"%d.",ay);
		}
		
		printf("Lutfen Yil Giriniz=");
		scanf("%d",&yil);
		if (yil>2018){
			while(yil>2018){ 
	    		printf("\nHatali!!!Yeni bir secim yapiniz:");
				scanf("%d",&yil);
	        	if (yil<2018){
				fprintf(geciciS,"%d\n",yil);
				break;
				}
				
	    	}
		}
		else fprintf(geciciS,"%d\n",yil);
		
		}
	}
	printf("Personel Silinmistir.");
	fclose(kayit);
	fclose(geciciD);
	fclose(geciciS);
	remove("sifreper.txt");
	rename("gecici.txt","sifreper.txt");
}

void sifredegistiryon(){
	FILE *sifre,*geciciD;
	sifre=fopen("sifreyon.txt","r");
	geciciD=fopen("gecici.txt","w");
	char isim[15];
	char soyisim[15];
	int sifre1,aranansifre,bulundumu=0,yenisifre,yenisifretekrar,secim1=1,i=0;;
	
	while(feof(sifre) == 0){
		
		fscanf(sifre,"%s %s %d\n",isim,soyisim,&sifre1);
	}
		while(secim1 == 1){
		printf("\nSuan ki Sifrenizi Giriniz=");
		scanf("%d",&aranansifre);
		if(sifre1==aranansifre){
			bulundumu=1;
			printf("Yeni Sifrenizi Giriniz=");
			scanf("%d",&yenisifre);
			printf("Yeni Sifrenizi Tekrar Giriniz=");
			scanf("%d",&yenisifretekrar);
			i=1;
			if(yenisifre==yenisifretekrar){
				fprintf(geciciD,"%s\t%s\t%d\n",isim,soyisim,yenisifre);
				break;
			}
			else printf("Sifreler Ayni Degil Tekrar Deneyiniz.");
			
			
		}
	
	if(bulundumu==0 && i==0){
		printf("Yanlis Bir Sifre Girdiniz Tekrar Deneyiniz.");
	}
	
}
	printf("Sifreniz Degismistir");
	fclose(sifre);
	fclose(geciciD);
	remove("sifreyon.txt");
	rename("gecici.txt","sifreyon.txt");
}

void sifredegistirpermu(){
	FILE *sifre,*geciciD;
	sifre=fopen("sifrepermu.txt","r");
	geciciD=fopen("gecici.txt","w");
	char isim[15];
	char soyisim[15];
	int hafiza[20];
	int sifre1,aranansifre,bulundumu=0,yenisifre,yenisifretekrar,secim1=1,i=0;
	printf("Sifre Giriniz=");
	while(feof(sifre) == 0){
		
		fscanf(sifre,"%s %s %d\n",isim,soyisim,&sifre1);
		hafiza[i]=sifre1;
		i++;
	}
		while(secim1 == 1){
		scanf("%d",&aranansifre);
		if(hafiza[0]==aranansifre || hafiza[1]==aranansifre || hafiza[2]==aranansifre || hafiza[3]==aranansifre || hafiza[4]==aranansifre || hafiza[5]==aranansifre || hafiza[6]==aranansifre){
			bulundumu=1;
			printf("Yeni Sifrenizi Giriniz=");
			scanf("%d",&yenisifre);
			printf("Yeni Sifrenizi Tekrar Giriniz=");
			scanf("%d",&yenisifretekrar);
		
			if(yenisifre==yenisifretekrar){
				fprintf(geciciD,"%s\t%s\t%d\n",isim,soyisim,yenisifre);
			}
			break;
			
		}
	
	if(bulundumu==0){
		printf("Yanlis Bir Sifre Girdiniz Tekrar Giriniz=");
	}
	
}
	printf("Sifreniz Degismistir");
	fclose(sifre);
	fclose(geciciD);
	remove("sifrepermu.txt");
	rename("gecici.txt","sifrepermu.txt");
}

void sifredegistirper(){
	FILE *sifre,*geciciD;
	sifre=fopen("sifreper.txt","r");
	geciciD=fopen("gecici.txt","w");
	char isim[15];
	char soyisim[15];
	int hafiza[20];
	int sifre1,aranansifre,bulundumu=0,yenisifre,yenisifretekrar,secim1=1,i=0;
	printf("Sifre Giriniz=");
	while(feof(sifre) == 0){
		
		fscanf(sifre,"%s %s %d\n",isim,soyisim,&sifre1);
		hafiza[i]=sifre1;
		i++;
	}
		while(secim1 == 1){
		scanf("%d",&aranansifre);
		if(hafiza[0]==aranansifre || hafiza[1]==aranansifre || hafiza[2]==aranansifre || hafiza[3]==aranansifre || hafiza[4]==aranansifre || hafiza[5]==aranansifre || hafiza[6]==aranansifre){
			bulundumu=1;
			printf("Yeni Sifrenizi Giriniz=");
			scanf("%d",&yenisifre);
			printf("Yeni Sifrenizi Tekrar Giriniz=");
			scanf("%d",&yenisifretekrar);
		
			if(yenisifre==yenisifretekrar){
				fprintf(geciciD,"%s\t%s\t%d\n",isim,soyisim,yenisifre);
			}
			break;
			
		}
	
	if(bulundumu==0){
		printf("Yanlis Bir Sifre Girdiniz Tekrar Giriniz=");
	}
	
}
	printf("Sifreniz Degismistir");
	fclose(sifre);
	fclose(geciciD);
	remove("sifreper.txt");
	rename("gecici.txt","sifreper.txt");
}

void sifreyon(int secim1){
	FILE *sifre;
	sifre=fopen("sifreyon.txt","r");
	char isim[15];
	char soyisim[15];
	int sifre1,aranansifre,bulundumu=0;
	printf("Sifre Giriniz=");

	
	
	while(feof(sifre) == 0){
		
		fscanf(sifre,"%s %s %d\n",isim,soyisim,&sifre1);
	}
		while(secim1 == 1){
		scanf("%d",&aranansifre);
		if(sifre1==aranansifre){
			bulundumu=1;
			
			break;
			
		}
	
	if(bulundumu==0){
		printf("Yanlis Bir Sifre Girdiniz Tekrar Giriniz=");
	}
	
}
	fclose(sifre);
}

void sifreper(int secim1){
	FILE *sifre;
	sifre=fopen("sifreper.txt","r");
	char isim[15];
	char soyisim[15];
	int sifre1,aranansifre,bulundumu=0;
	printf("Sifre Giriniz=");
	int i=0;
	int hafiza[20];
	while(feof(sifre) == 0){
		
		fscanf(sifre,"%s %s %d\n",isim,soyisim,&sifre1);
		hafiza[i]=sifre1;
		i++;
	}
		while(secim1 == 3){
		scanf("%d",&aranansifre);
		if(hafiza[0]==aranansifre || hafiza[1]==aranansifre || hafiza[2]==aranansifre || hafiza[3]==aranansifre || hafiza[4]==aranansifre || hafiza[5]==aranansifre || hafiza[6]==aranansifre){
			bulundumu=1;
			
			break;
			
		}
	
	if(bulundumu==0){
		printf("Yanlis Bir Sifre Girdiniz Tekrar Giriniz=");
	}
	
}
	fclose(sifre);
}

void sifrepermu(int secim1){
	FILE *sifre;
	sifre=fopen("sifrepermu.txt","r");
	char isim[15];
	char soyisim[15];
	int sifre1,aranansifre,bulundumu=0;
	printf("Sifre Giriniz=");
	int i=0;
	int hafiza[20];
	
	
	while(feof(sifre) == 0){
		
		fscanf(sifre,"%s %s %d\n",isim,soyisim,&sifre1);
		hafiza[i]=sifre1;
		i++;
	}
		while(secim1 == 2){
		scanf("%d",&aranansifre);
		if(hafiza[0]==aranansifre || hafiza[1]==aranansifre || hafiza[2]==aranansifre || hafiza[3]==aranansifre || hafiza[4]==aranansifre || hafiza[5]==aranansifre || hafiza[6]==aranansifre){
			bulundumu=1;
			
			break;
			
		}
	
	if(bulundumu==0){
		printf("Yanlis Bir Sifre Girdiniz Tekrar Giriniz=");
	}
	
}
	fclose(sifre);
}
void satis(int secim1){
	
	FILE *kayitekle,*geciciD,*satisD;
	kayitekle=fopen("kayit.txt","r");
	geciciD=fopen("gecici.txt","w");
	satisD=fopen("satis.txt","a");
	char marka[10];
	char model[10];
	char renk[10];
	int alisfiyat,gun,ay,yil;
	char silinecekmarka[10];
	char silinecekmodel[10];
	char silinecekrenk[10];
	int silinecekalisfiyat,i=0;
	aliskayitlistele();
	printf("\n\n\nLutfen Satilacak Telefonun Markasini Giriniz=");
	scanf("%s",&silinecekmarka);
	printf("Lutfen Satilacak Telefonun Modelini Giriniz=");
	scanf("%s",&silinecekmodel);
	printf("Lutfen Satilacak Telefonun Rengini Giriniz=");
	scanf("%s",&silinecekrenk);
	printf("Lutfen Satilacak Telefonun Alis Fiyatini Giriniz=");
	scanf("%d",&silinecekalisfiyat);
	
	while(feof(kayitekle) == 0){
		fscanf(kayitekle,"%s %s %s %d %d.%d.%d\n",marka,model,renk,&alisfiyat,&gun,&ay,&yil);
		if(strcmp(marka,silinecekmarka) || strcmp(model,silinecekmodel) || strcmp(renk,silinecekrenk) || alisfiyat!=silinecekalisfiyat){
				fprintf(geciciD,"%s\t\t%s\t\t%s\t%d\t%d.%d.%d\n",marka,model,renk,alisfiyat,gun,ay,yil);
		}
		else {
				
				if(secim1==1) fprintf(satisD,"%s\t\t%s\t\t%s\t%d\tyonetici\t",marka,model,renk,alisfiyat+=alisfiyat*0.15);
				if(secim1==2) fprintf(satisD,"%s\t\t%s\t\t%s\t%d\tpermudur\t",marka,model,renk,alisfiyat+=alisfiyat*0.15);
				if(secim1==3) fprintf(satisD,"%s\t\t%s\t\t%s\t%d\tpersonel\t",marka,model,renk,alisfiyat+=alisfiyat*0.15);
				printf("Lutfen Gun Giriniz=");
		scanf("%d",&gun);
		if (gun>31){
			while(gun>31){ 
    			printf("\nHatali!!!Yeni bir secim yapiniz:");
				scanf("%d",&gun);
        		if (gun<31){
				fprintf(satisD,"%d.",gun);
				break;
				}
			
    		}
		}
		else fprintf(satisD,"%d.",gun);
	
		printf("Lutfen Ay Giriniz=");
		scanf("%d",&ay);
		if (ay>12){
			while(ay>12){ 
	    		printf("\nHatali!!!Yeni bir secim yapiniz:");
	    		scanf("%d",&ay);
	        	if (ay<12){
	        		
				fprintf(satisD,"%d.",ay);
				break;
				}
			
	    	}
		}
		else {
			fprintf(satisD,"%d.",ay);
		}
		
		printf("Lutfen Yil Giriniz=");
		scanf("%d",&yil);
		if (yil>2018){
			while(yil>2018){ 
	    		printf("\nHatali!!!Yeni bir secim yapiniz:");
				scanf("%d",&yil);
	        	if (yil<2018){
				fprintf(satisD,"%d\n",yil);
				break;
				}
				
	    	}
		}
		else fprintf(satisD,"%d\n",yil);
			}
	}
	printf("Urununuz Satilmistir.");

	fclose(kayitekle);
	fclose(geciciD);
	fclose(satisD);
	remove("kayit.txt");
	rename("gecici.txt","kayit.txt");
	rename("kayit.txt","satis.txt");
}



void kayitekle(){
	FILE *kayitekle;
	kayitekle=fopen("kayit.txt","a");
	char marka[10];
	char model[10];
	char renk[10];
	int alisfiyat;
	int gun,ay,yil;
	printf("Lutfen Bir Marka Giriniz=");
	scanf("%s",&marka);
	fprintf(kayitekle,"%s\t\t",marka);
	
	printf("Lutfen Bir Model Giriniz=");
	scanf("%s",&model);
	fprintf(kayitekle,"%s\t\t",model);
	
	printf("Lutfen Bir Renk Giriniz=");
	scanf("%s",&renk);
	fprintf(kayitekle,"%s\t",renk);
	
	printf("Lutfen Alis Fiyatini Giriniz=");
	scanf("%d",&alisfiyat);
	fprintf(kayitekle,"%d\t",alisfiyat);
	
	printf("Lutfen Gun Giriniz=");
		scanf("%d",&gun);
		if (gun>31){
			while(gun>31){ 
    			printf("\nHatali!!!Yeni bir secim yapiniz:");
				scanf("%d",&gun);
        		if (gun<31){
				fprintf(kayitekle,"%d.",gun);
				break;
				}
			
    		}
		}
		else fprintf(kayitekle,"%d.",gun);
	
	printf("Lutfen Ay Giriniz=");
	scanf("%d",&ay);
	if (ay>12){
		while(ay>12){ 
    		printf("\nHatali!!!Yeni bir secim yapiniz:");
    		scanf("%d",&ay);
        	if (ay<12){
			fprintf(kayitekle,"%d.",ay);
			break;
			}
		
    	}
	}
	else fprintf(kayitekle,"%d.",ay);
	
	printf("Lutfen Yil Giriniz=");
	scanf("%d",&yil);
	if (yil>2018){
		while(yil>2018){ 
    		printf("\nHatali!!!Yeni bir secim yapiniz:");
			scanf("%d",&yil);
        	if (yil<2018){
			fprintf(kayitekle,"%d\n",yil);
			break;
			}
			
    	}
	}
	else fprintf(kayitekle,"%d\n",yil);
	
	printf("URUNUNUZ KAYDEDILMISTIR");
	fclose(kayitekle);
}


void kayitara(){
	FILE *kayitekle;
	kayitekle=fopen("kayit.txt","r");
	char arananmarka[10];
	char marka[10];
	char model[10];
	char renk[10];
	int alisfiyat,gun,ay,yil;
	int bulundumu=0;
	printf("Aradiginiz Telefon Markasi=");
	scanf("%s",&arananmarka);
	printf("Marka\t\tModel\t\tRenk\tFiyat\t\tTarih\n");
	printf("-----------------------------------------------------------\n");
	while(feof(kayitekle) == 0){
		fscanf(kayitekle,"%s %s %s %d %d.%d.%d\n",marka,model,renk,&alisfiyat,&gun,&ay,&yil);
		if(!strcmp(marka,arananmarka)){
			bulundumu=1;
			
			printf("%s\t\t%s\t\t%s\t%d TL\t\t%d.%d.%d\n",marka,model,renk,alisfiyat*=1.15,gun,ay,yil);
			
		}
	}
	printf("-----------------------------------------------------------\n");
	if(bulundumu==0){
		printf("%s Marka Bir Telefon Bulunmamaktadir",arananmarka);
	}
	fclose(kayitekle);
}


void kayitsil(){
	FILE *kayitekle,*geciciD,*geciciS;
	kayitekle=fopen("kayit.txt","r");
	geciciD=fopen("gecici.txt","w");
	geciciS=fopen("silinen.txt","a");
	char marka[10];
	char model[10];
	char renk[10];
	int alisfiyat,gun,ay,yil;
	char silinecekmarka[10];
	char silinecekmodel[10];
	char silinecekrenk[10];
	int silinecekalisfiyat;
	aliskayitlistele();
	printf("\n\nLutfen Silinecek Markayi Giriniz=");
	scanf("%s",&silinecekmarka);
	printf("Lutfen Silinecek Modeli Giriniz=");
	scanf("%s",&silinecekmodel);
	printf("Lutfen Silinecek Rengi Giriniz=");
	scanf("%s",&silinecekrenk);
	printf("Lutfen Silinecek Alis Fiyatini Giriniz=");
	scanf("%d",&silinecekalisfiyat);
	while(feof(kayitekle) == 0){
		fscanf(kayitekle,"%s %s %s %d %d.%d.%d\n",marka,model,renk,&alisfiyat,&gun,&ay,&yil);
		if(strcmp(marka,silinecekmarka) || strcmp(model,silinecekmodel) || strcmp(renk,silinecekrenk) || alisfiyat!=silinecekalisfiyat){
				fprintf(geciciD,"%s\t\t%s\t\t%s\t%d\t%d.%d.%d\n",marka,model,renk,alisfiyat,gun,ay,yil);
				
				
		}
		else {
		fprintf(geciciS,"%s\t\t%s\t\t%s\t%d\t%d.%d.%d\n",marka,model,renk,alisfiyat,gun,ay,yil);
		
		}
	}
	
	printf("Urun Silinmistir.");
	fclose(kayitekle);
	fclose(geciciD);
	fclose(geciciS);
	remove("kayit.txt");
	
	rename("gecici.txt","kayit.txt");
}

void silinengoruntule(){
	FILE *kayitekle;
	kayitekle=fopen("silinen.txt","r");
	char marka[10];
	char model[10];
	char renk[10];
	int s=0;
	int alisfiyat,gun,ay,yil;
	printf("Marka\t\tModel\t\tRenk\tFiyat\t\tTarih\n");
	printf("------------------------------------------------------------------------------\n");
	while(feof(kayitekle) == 0){
		
		fscanf(kayitekle,"%s %s %s %d %d.%d.%d\n",marka,model,renk,&alisfiyat,&gun,&ay,&yil);
		printf("%s\t\t%s\t\t%s\t%d TL\t\t%d.%d.%d\n",marka,model,renk,alisfiyat,gun,ay,yil);
		
		s++;
	}
	printf("------------------------------------------------------------------------------\n");
	printf("\n Silinmis %d Adet Telefon Vardir",s);
	fclose(kayitekle);
}


void aliskayitlistele(){
	FILE *kayitekle;
	kayitekle=fopen("kayit.txt","r");
	char marka[10];
	char model[10];
	char renk[10];
	int s=0;
	int alisfiyat,gun,ay,yil;
	printf("Marka\t\tModel\t\tRenk\tFiyat\t\tTarih\n");
	printf("------------------------------------------------------------------------------\n");
	while(feof(kayitekle) == 0){
		
		fscanf(kayitekle,"%s %s %s %d %d.%d.%d\n",marka,model,renk,&alisfiyat,&gun,&ay,&yil);
		printf("%s\t\t%s\t\t%s\t%d TL\t\t%d.%d.%d\n",marka,model,renk,alisfiyat,gun,ay,yil);
		
		s++;
	}
	printf("------------------------------------------------------------------------------\n");
	printf("\n Stokta %d Adet Telefon Vardir",s);
	fclose(kayitekle);
}


void satiskayitlistele(){
	FILE *kayitekle;
	kayitekle=fopen("kayit.txt","r");
	char marka[10];
	char model[10];
	char renk[10];
	int s=0;
	int alisfiyat,gun,ay,yil;
	printf("Marka\t\tModel\t\tRenk\tFiyat\t\tTarih\n");
	printf("------------------------------------------------------------------------------\n");
	while(feof(kayitekle) == 0){
	
		fscanf(kayitekle,"%s %s %s %d %d.%d.%d\n",marka,model,renk,&alisfiyat,&gun,&ay,&yil);
		printf("%s\t\t%s\t\t%s\t%d TL\t\t%d.%d.%d\n",marka,model,renk,alisfiyat+=alisfiyat*0.15,gun,ay,yil);
	
		s++;
	}
	printf("------------------------------------------------------------------------------\n");
	printf("\n Stokta %d Adet Telefon Vardir",s);
	fclose(kayitekle);
}

void stokkayitaratarihgun(){
	FILE *kayitekle;
	kayitekle=fopen("kayit.txt","r");
	int arananyil,arananay,aranangun;
	char marka[10];
	char model[10];
	char renk[10];
	int alisfiyat;
	int bulundumu=0;
	int gun,ay,yil;
	printf("Aradiginiz Gun=");
	scanf("%d",&aranangun);
	printf("Aradiginiz Ay=");
	scanf("%d",&arananay);
	printf("Aradiginiz Yil=");
	scanf("%d",&arananyil);
	printf("Marka\t\tModel\t\tRenk\tFiyat\t\tTarih\n");
	printf("------------------------------------------------------------------------------\n");
	while(feof(kayitekle) == 0){
		fscanf(kayitekle,"%s %s %s %d %d.%d.%d\n",marka,model,renk,&alisfiyat,&gun,&ay,&yil);
		if(arananay==ay && arananyil==yil && aranangun==gun){
			bulundumu=1;
			printf("%s\t\t%s\t\t%s\t%d TL\t\t%d.%d.%d\n",marka,model,renk,alisfiyat*=1.15,gun,ay,yil);
		}
	}
	printf("------------------------------------------------------------------------------\n");
	if(bulundumu==0){
		printf("%d.%d.%d Tarihinde Bir Telefon Bulunmamaktadir",aranangun,arananay,arananyil);
	}
	fclose(kayitekle);
}

void stokkayitaratarihay(){
	FILE *kayitekle;
	kayitekle=fopen("kayit.txt","r");
	int arananyil,arananay;
	char marka[10];
	char model[10];
	char renk[10];
	int alisfiyat;
	int bulundumu=0;
	int gun,ay,yil;
	printf("Aradiginiz Ay=");
	scanf("%d",&arananay);
	printf("Aradiginiz Yil=");
	scanf("%d",&arananyil);
	printf("Marka\t\tModel\t\tRenk\tFiyat\t\tTarih\n");
	printf("------------------------------------------------------------------------------\n");
	while(feof(kayitekle) == 0){
		fscanf(kayitekle,"%s %s %s %d %d.%d.%d\n",marka,model,renk,&alisfiyat,&gun,&ay,&yil);
		if(arananay==ay && arananyil==yil){
			bulundumu=1;
			printf("%s\t\t%s\t\t%s\t%d TL\t\t%d.%d.%d\n",marka,model,renk,alisfiyat*=1.15,gun,ay,yil);
		}
	}
	printf("------------------------------------------------------------------------------\n");
	if(bulundumu==0){
		printf("%d. Ayda %d Yilinda Bir Telefon Bulunmamaktadir",arananay,arananyil);
	}
	fclose(kayitekle);
}


void stokkayitaratarihyil(){
	FILE *kayitekle;
	kayitekle=fopen("kayit.txt","r");
	int arananyil;
	char marka[10];
	char model[10];
	char renk[10];
	int alisfiyat;
	int bulundumu=0;
	int gun,ay,yil;
	printf("Aradiginiz Yil=");
	scanf("%d",&arananyil);
	printf("Marka\t\tModel\t\tRenk\tFiyat\t\tTarih\n");
	printf("------------------------------------------------------------------------------\n");
	while(feof(kayitekle) == 0){
		fscanf(kayitekle,"%s %s %s%d %d.%d.%d\n",marka,model,renk,&alisfiyat,&gun,&ay,&yil);
		if(arananyil==yil){
			bulundumu=1;
			printf("%s\t\t%s\t\t%s\t%d TL\t\t%d.%d.%d\n",marka,model,renk,alisfiyat*=1.15,gun,ay,yil);
		}
	}
	printf("------------------------------------------------------------------------------\n");
	if(bulundumu==0){
		printf("%d Yilinda Bir Telefon Bulunmamaktadir",arananyil);
	}
	fclose(kayitekle);
}


void vergi(){
	FILE *satisD;
	satisD=fopen("satis.txt","r");
	char arananmarka[10];
	char marka[10];
	char model[10];
	char statu[10];
	char renk[10];
	int alisfiyat=0;
	int toplam=0;
	int kar=0;
	int bulundumu=0;
	int gun,ay,yil;
	printf("Aradiginiz Telefon Markasi=");
	scanf("%s",&arananmarka);
	printf("Marka\t\tModel\t\tRenk\tVergi\t\tStatu\t\tTarih\n");
	printf("------------------------------------------------------------------------------\n");
	while(feof(satisD) == 0){
		fscanf(satisD,"%s %s %s %d %s %d.%d.%d\n",marka,model,renk,&alisfiyat,statu,&gun,&ay,&yil);
		if(!strcmp(marka,arananmarka)){
			bulundumu=1;
			toplam+=alisfiyat;
			printf("%s\t\t%s\t\t%s\t%d TL\t\t%s\t%d.%d.%d\n",marka,model,renk,alisfiyat*=0.05,statu,gun,ay,yil);
		}
	kar=toplam*0.05;

	}
	printf("------------------------------------------------------------------------------\n");
	printf("Toplam Vergi=%d",kar);
	if(bulundumu==0){
		printf("%s Marka Bir Telefon Bulunmamaktadir",arananmarka);
	}
	fclose(satisD);
}


void satistellistele(){
	FILE *satisD;
	satisD=fopen("satis.txt","r");
	char marka[10];
	char model[10];
	char statu[10];
	char renk[10];
	int s=0;
	int alisfiyat,gun,ay,yil;
	printf("Marka\t\tModel\t\tRenk\tFiyat\tStatu\t\tTarih\n");
	printf("------------------------------------------------------------------------------\n");
	while(feof(satisD) == 0){
		fscanf(satisD,"%s %s %s %d %s %d.%d.%d\n",marka,model,renk,&alisfiyat,statu,&gun,&ay,&yil);
		printf("%s\t\t%s\t\t%s\t%d TL\t%s\t%d.%d.%d\n",marka,model,renk,alisfiyat,statu,gun,ay,yil);
		s++;
	}
	printf("------------------------------------------------------------------------------\n");
	printf("\n Satilan %d Adet Telefon Vardir",s);
	fclose(satisD);
}


void satiskayitaratarihyil(){
	FILE *kayitekle;
	kayitekle=fopen("satis.txt","r");
	int arananyil;
	char marka[10];
	char model[10];
	char statu[10];
	char renk[10];
	int alisfiyat;
	int bulundumu=0;
	int gun,ay,yil;
	printf("Aradiginiz Yil=");
	scanf("%d",&arananyil);
	
	printf("Marka\t\tModel\t\tRenk\tFiyat\tStatu\t\tTarih\n");
	printf("------------------------------------------------------------------------------\n");
	while(feof(kayitekle) == 0){
		fscanf(kayitekle,"%s %s %s %d %s %d.%d.%d\n",marka,model,renk,&alisfiyat,statu,&gun,&ay,&yil);
		if(arananyil==yil){
			bulundumu=1;
		
			printf("%s\t\t%s\t\t%s\t%d TL\t%s\t%d.%d.%d\n",marka,model,renk,alisfiyat,statu,gun,ay,yil);
			
		}
	}
	printf("------------------------------------------------------------------------------\n");
	if(bulundumu==0){
		printf("%d Yilinda Bir Telefon Bulunmamaktadir",arananyil);
	}
	fclose(kayitekle);
}


void satiskayitaratarihay(){
	FILE *kayitekle;
	kayitekle=fopen("satis.txt","r");
	int arananyil,arananay;
	char marka[10];
	char model[10];
	char statu[10];
	char renk[10];
	int alisfiyat;
	int bulundumu=0;
	int gun,ay,yil;
	printf("Aradiginiz Ay=");
	scanf("%d",&arananay);
	printf("Aradiginiz Yil=");
	scanf("%d",&arananyil);
	printf("Marka\t\tModel\t\tRenk\tFiyat\tStatu\t\tTarih\n");
	printf("------------------------------------------------------------------------------\n");
	while(feof(kayitekle) == 0){
		fscanf(kayitekle,"%s %s %s %d %s %d.%d.%d\n",marka,model,renk,&alisfiyat,statu,&gun,&ay,&yil);
		if(arananay==ay && arananyil==yil){
			bulundumu=1;
			
			printf("%s\t\t%s\t\t%s\t%d TL\t%s\t%d.%d.%d\n",marka,model,renk,alisfiyat,statu,gun,ay,yil);
		
		}
	}
	printf("------------------------------------------------------------------------------\n");
	if(bulundumu==0){
		printf("%d. Ayda %d Yilinda Bir Telefon Bulunmamaktadir",arananay,arananyil);
	}
	fclose(kayitekle);
}


void satiskayitaratarihgun(){
	FILE *kayitekle;
	kayitekle=fopen("satis.txt","r");
	int arananyil,arananay,aranangun;
	char marka[10];
	char model[10];
	char statu[10];
	char renk[10];
	int alisfiyat;
	int bulundumu=0;
	int gun,ay,yil;
	printf("Aradiginiz Gun=");
	scanf("%d",&aranangun);
	printf("Aradiginiz Ay=");
	scanf("%d",&arananay);
	printf("Aradiginiz Yil=");
	scanf("%d",&arananyil);
	printf("Marka\t\tModel\t\tRenk\tFiyat\tStatu\t\tTarih\n");
	printf("------------------------------------------------------------------------------\n");
	while(feof(kayitekle) == 0){
		fscanf(kayitekle,"%s %s %s %d %s %d.%d.%d\n",marka,model,renk,&alisfiyat,statu,&gun,&ay,&yil);
		if(arananay==ay && arananyil==yil && aranangun==gun){
			bulundumu=1;
			
			printf("%s\t\t%s\t\t%s\t%d TL\t%s\t%d.%d.%d\n",marka,model,renk,alisfiyat,statu,gun,ay,yil);
			
		}
	}
	printf("------------------------------------------------------------------------------\n");
	if(bulundumu==0){
		printf("%d.%d.%d Tarihinde Bir Telefon Bulunmamaktadir",aranangun,arananay,arananyil);
	}
	fclose(kayitekle);
}


void satiskayitarar(){
	FILE *kayitekle;
	kayitekle=fopen("satis.txt","r");
	char arananmarka[10];
	char marka[10];
	char model[10];
	char statu[10];
	char renk[10];
	int alisfiyat,gun,ay,yil;
	int bulundumu=0;
	printf("Aradiginiz Telefon Markasi=");
	scanf("%s",&arananmarka);
	printf("Marka\t\tModel\t\tRenk\tFiyat\tStatu\t\tTarih\n");
	printf("------------------------------------------------------------------------------\n");
	while(feof(kayitekle) == 0){
		fscanf(kayitekle,"%s %s %s %d %s %d.%d.%d\n",marka,model,renk,&alisfiyat,statu,&gun,&ay,&yil);
		if(!strcmp(marka,arananmarka)){
			bulundumu=1;
			
			printf("%s\t\t%s\t\t%s\t%d TL\t%s\t%d.%d.%d\n",marka,model,renk,alisfiyat,statu,gun,ay,yil);
			
		}
	}
	printf("------------------------------------------------------------------------------\n");
	if(bulundumu==0){
		printf("%s Marka Bir Telefon Bulunmamaktadir",arananmarka);
	}
	fclose(kayitekle);
}


void kartum(){
	FILE *kayitekle;
	kayitekle=fopen("satis.txt","r");
	char arananmarka[10];
	char marka[10];
	char model[10];
	char statu[10];
	char renk[10];
	int alisfiyat;
	int toplam=0;
	int kar=0;
	int gun,ay,yil;
	printf("Marka\t\tModel\t\tRenk\tKar\tStatu\t\tTarih\n");
	printf("---------------------------------------------------------------------------\n");
	while(feof(kayitekle) == 0){
		fscanf(kayitekle,"%s %s %s %d %s %d.%d.%d\n",marka,model,renk,&alisfiyat,statu,&gun,&ay,&yil);
			toplam+=alisfiyat;
			printf("%s\t\t%s\t\t%s\t%d TL\t%s\t%d.%d.%d\n",marka,model,renk,alisfiyat*=0.10,statu,gun,ay,yil);
		}
	kar=toplam*0.10;

	printf("---------------------------------------------------------------------------\n");
	printf("Toplam Kar=%d TL",kar);
	fclose(kayitekle);
}


void karkayitaratarihgun(){
	FILE *kayitekle;
	kayitekle=fopen("satis.txt","r");
	int arananyil,arananay,aranangun;
	char marka[10];
	char model[10];
	char statu[10];
	char renk[10];
	int alisfiyat;
	int bulundumu=0;
	int gun,ay,yil,toplam=0,kar=0;
	printf("Aradiginiz Gun=");
	scanf("%d",&aranangun);
	printf("Aradiginiz Ay=");
	scanf("%d",&arananay);
	printf("Aradiginiz Yil=");
	scanf("%d",&arananyil);
	printf("Marka\t\tModel\t\tRenk\tKar\tStatu\t\tTarih\n");
	printf("---------------------------------------------------------------------------\n");
	while(feof(kayitekle) == 0){
		fscanf(kayitekle,"%s %s %s %d %s %d.%d.%d\n",marka,model,renk,&alisfiyat,statu,&gun,&ay,&yil);
		if(arananyil==yil && arananay==ay && aranangun==gun){
			bulundumu=1;
			
			toplam+=alisfiyat;
			printf("%s\t\t%s\t\t%s\t%d TL\t%s\t%d.%d.%d\n",marka,model,renk,alisfiyat*=0.10,statu,gun,ay,yil);
			
		}
		kar=toplam*0.10;
	}
	printf("---------------------------------------------------------------------------\n");
	printf("Toplam Kar=%d TL",kar);
	if(bulundumu==0){
		printf("%d Yilinda Bir Telefon Bulunmamaktadir",arananyil);
	}
	fclose(kayitekle);
}


void karkayitaratarihay(){
	FILE *kayitekle;
	kayitekle=fopen("satis.txt","r");
	int arananyil,arananay;
	char marka[10];
	char model[10];
	char statu[10];
	char renk[10];
	int alisfiyat;
	int bulundumu=0;
	int gun,ay,yil,toplam=0,kar=0;
	printf("Aradiginiz Ay=");
	scanf("%d",&arananay);
	printf("Aradiginiz Yil=");
	scanf("%d",&arananyil);
	printf("Marka\t\tModel\t\tRenk\tKar\tStatu\t\tTarih\n");
	printf("---------------------------------------------------------------------------\n");
	while(feof(kayitekle) == 0){
		fscanf(kayitekle,"%s %s %s %d %s %d.%d.%d\n",marka,model,renk,&alisfiyat,statu,&gun,&ay,&yil);
		if(arananyil==yil && arananay==ay){
			bulundumu=1;
			
			toplam+=alisfiyat;
			printf("%s\t\t%s\t\t%s\t%d TL\t%s\t%d.%d.%d\n",marka,model,renk,alisfiyat*=0.10,statu,gun,ay,yil);
			
		}
		kar=toplam*0.10;
	}
	printf("---------------------------------------------------------------------------\n");
	printf("Toplam Kar=%d TL",kar);
	if(bulundumu==0){
		printf("%d Yilinda Bir Telefon Bulunmamaktadir",arananyil);
	}
	fclose(kayitekle);
}


void karkayitaratarihyil(){
	FILE *kayitekle;
	kayitekle=fopen("satis.txt","r");
	int arananyil;
	char marka[10];
	char model[10];
	char statu[10];
	char renk[10];
	int alisfiyat;
	int bulundumu=0;
	int gun,ay,yil,toplam=0,kar=0;
	printf("Aradiginiz Yil=");
	scanf("%d",&arananyil);
	printf("Marka\t\tModel\t\tRenk\tKar\tStatu\t\tTarih\n");
	puts("---------------------------------------------------------------------------");
	while(feof(kayitekle) == 0){
		fscanf(kayitekle,"%s %s %s %d %s %d.%d.%d\n",marka,model,renk,&alisfiyat,statu,&gun,&ay,&yil);
		if(arananyil==yil){
			bulundumu=1;
			
			toplam+=alisfiyat;
			printf("%s\t\t%s\t\t%s\t%d TL\t%s\t%d.%d.%d\n",marka,model,renk,alisfiyat*=0.10,statu,gun,ay,yil);
			
		}
		kar=toplam*0.10;
	}
	printf("---------------------------------------------------------------------------\n");
	printf("Toplam Kar=%d TL",kar);
	if(bulundumu==0){
		printf("%d Yilinda Bir Telefon Bulunmamaktadir",arananyil);
	}
	fclose(kayitekle);
}


void karmarka(){
	FILE *satisD;
	satisD=fopen("satis.txt","r");
	char arananmarka[10];
	char marka[10];
	char model[10];
	char statu[10];
	char renk[10];
	int alisfiyat=0;
	int toplam=0;
	int kar=0;
	int bulundumu=0;
	int gun,ay,yil;
	printf("Aradiginiz Telefon Markasi=");
	scanf("%s",&arananmarka);
	printf("Marka\t\tModel\t\tRenk\tKar\tStatu\t\tTarih\n");
	printf("---------------------------------------------------------------------------\n");
	while(feof(satisD) == 0){
		fscanf(satisD,"%s %s %s %d %s %d.%d.%d\n",marka,model,renk,&alisfiyat,statu,&gun,&ay,&yil);
		if(!strcmp(marka,arananmarka)){
			bulundumu=1;
			toplam+=alisfiyat;
			printf("%s\t\t%s\t\t%s\t%d TL\t%s\t%d.%d.%d\n",marka,model,renk,alisfiyat*=0.10,statu,gun,ay,yil);
		}
	kar=toplam*0.10;

	}
	printf("---------------------------------------------------------------------------\n");
	printf("Toplam Kar=%d TL",kar);
	if(bulundumu==0){
		printf("%s Marka Bir Telefon Bulunmamaktadir",arananmarka);
	}
	fclose(satisD);
}

void vergitum(){
	FILE *satisD;
	satisD=fopen("satis.txt","r");
	char arananmarka[10];
	char marka[10];
	char model[10];
	char statu[10];
	char renk[10];
	int alisfiyat=0;
	int toplam=0;
	int kar=0;
	int bulundumu=0;
	int gun,ay,yil;
	
	printf("Marka\t\tModel\t\tRenk\tVergi\tStatu\t\tTarih\n");
	printf("----------------------------------------------------------------------------\n");
	while(feof(satisD) == 0){
		fscanf(satisD,"%s %s %s %d %s %d.%d.%d\n",marka,model,renk,&alisfiyat,statu,&gun,&ay,&yil);
		
			toplam+=alisfiyat;
			printf("%s\t\t%s\t\t%s\t%d TL\t%s\t%d.%d.%d\n",marka,model,renk,alisfiyat*=0.05,statu,gun,ay,yil);
		}
	kar=toplam*0.05;


	printf("----------------------------------------------------------------------------\n");
	printf("Toplam Vergi=%d",kar);
	fclose(satisD);
}


void vergiyil(){
	FILE *kayitekle;
	kayitekle=fopen("satis.txt","r");
	int arananyil;
	char marka[10];
	char model[10];
	char statu[10];
	char renk[10];
	int alisfiyat;
	int bulundumu=0;
	int gun,ay,yil,toplam=0,vergi=0;
	printf("Aradiginiz Yil=");
	scanf("%d",&arananyil);
	printf("Marka\t\tModel\t\tRenk\tVergi\tStatu\t\tTarih\n");
	puts("-----------------------------------------------------------------");
	while(feof(kayitekle) == 0){
		fscanf(kayitekle,"%s %s %s %d %s %d.%d.%d\n",marka,model,renk,&alisfiyat,statu,&gun,&ay,&yil);
		if(arananyil==yil){
			bulundumu=1;
			
			toplam+=alisfiyat;
			printf("%s\t\t%s\t\t%s\t%d TL\t%s\t%d.%d.%d\n",marka,model,renk,alisfiyat*=0.05,statu,gun,ay,yil);
			
		}
		vergi=toplam*0.05;
	}
	printf("----------------------------------------------------------------------------\n");
	printf("Toplam Vergi=%d TL",vergi);
	if(bulundumu==0){
		printf("%d Yilinda Bir Telefon Bulunmamaktadir",arananyil);
	}
	fclose(kayitekle);
}


void vergiay(){
	FILE *kayitekle;
	kayitekle=fopen("satis.txt","r");
	int arananyil,arananay;
	char marka[10];
	char model[10];
	char statu[10];
	char renk[10];
	int alisfiyat;
	int bulundumu=0;
	int gun,ay,yil,toplam=0,vergi=0;
	printf("Aradiginiz Ay=");
	scanf("%d",&arananay);
	printf("Aradiginiz Yil=");
	scanf("%d",&arananyil);
	printf("Marka\t\tModel\t\tRenk\tVergi\tStatu\t\tTarih\n");
	puts("-----------------------------------------------------------------");
	while(feof(kayitekle) == 0){
		fscanf(kayitekle,"%s %s %s %d %s %d.%d.%d\n",marka,model,renk,&alisfiyat,statu,&gun,&ay,&yil);
		if(arananyil==yil && arananay==ay){
			bulundumu=1;
			
			toplam+=alisfiyat;
			printf("%s\t\t%s\t\t%s\t%d TL\t%s\t%d.%d.%d\n",marka,model,renk,alisfiyat*=0.05,statu,gun,ay,yil);
			
		}
		vergi=toplam*0.05;
	}
	printf("----------------------------------------------------------------------------\n");
	printf("Toplam Vergi=%d TL",vergi);
	if(bulundumu==0){
		printf("%d Yilinda Bir Telefon Bulunmamaktadir",arananyil);
	}
	fclose(kayitekle);
}


void vergigun(){
	FILE *kayitekle;
	kayitekle=fopen("satis.txt","r");
	int arananyil,arananay,aranangun;
	char marka[10];
	char model[10];
	char statu[10];
	char renk[10];
	int alisfiyat;
	int bulundumu=0;
	int gun,ay,yil,toplam=0,vergi=0;
	printf("Aradiginiz Gun=");
	scanf("%d",&aranangun);
	printf("Aradiginiz Ay=");
	scanf("%d",&arananay);
	printf("Aradiginiz Yil=");
	scanf("%d",&arananyil);
	printf("Marka\t\tModel\t\tRenk\tVergi\tStatu\t\tTarih\n");
	puts("-----------------------------------------------------------------");
	while(feof(kayitekle) == 0){
		fscanf(kayitekle,"%s %s %s %d %s %d.%d.%d\n",marka,model,renk,&alisfiyat,statu,&gun,&ay,&yil);
		if(arananyil==yil && arananay==ay && aranangun==gun){
			bulundumu=1;
			
			toplam+=alisfiyat;
			printf("%s\t\t%s\t\t%s\t%d TL\t%s\t%d.%d.%d\n",marka,model,renk,alisfiyat*=0.05,statu,gun,ay,yil);
			
		}
		vergi=toplam*0.05;
	}
	printf("-----------------------------------------------------------------\n");
	printf("Toplam Vergi=%d TL",vergi);
	if(bulundumu==0){
		printf("%d Yilinda Bir Telefon Bulunmamaktadir",arananyil);
	}
	fclose(kayitekle);
}
void silinenpermugoruntule(){
	FILE *kayitekle;
	kayitekle=fopen("silinenpermu.txt","r");
	char isim[15];
	char soyisim[15];
	int sifre,gun,ay,yil;
	int s=0;
	printf("Isim\t\tSoyisim\t\tTarih\n");
	printf("-----------------------------------------------------\n");
	while(feof(kayitekle) == 0){
		
		fscanf(kayitekle,"%s %s %d %d.%d.%d\n",isim,soyisim,&sifre,&gun,&ay,&yil);
		printf("%s\t\t%s\t\t%d.%d.%d\n",isim,soyisim,gun,ay,yil);
		
		s++;
	}
	printf("-----------------------------------------------------\n");
	printf("\n Silinen %d Adet Personel Muduru Vardir",s);
	fclose(kayitekle);
}

void silinenpergoruntule(){
	FILE *kayitekle;
	kayitekle=fopen("silinenper.txt","r");
	char isim[15];
	char soyisim[15];
	int sifre,gun,ay,yil;
	int s=0;
	printf("Isim\t\tSoyisim\t\tTarih\n");
	printf("-----------------------------------------------------\n");
	while(feof(kayitekle) == 0){
		
		fscanf(kayitekle,"%s %s %d %d.%d.%d\n",isim,soyisim,&sifre,&gun,&ay,&yil);
		printf("%s\t\t%s\t\t%d.%d.%d\n",isim,soyisim,gun,ay,yil);
		
		s++;
	}
	printf("-----------------------------------------------------\n");
	printf("\n Silinen %d Adet Personel Vardir",s);
	fclose(kayitekle);
}

void sistemsilkayit(){
	FILE *satisD;
	satisD=fopen("kayit.txt","w");
	printf("Stok Dosyaniz Sifirlanmistir.");
	fclose(satisD);
}

void sistemsilsatis(){
	FILE *kayit;
	kayit=fopen("satis.txt","w");
	printf("Satis Dosyaniz Sifirlanmistir.");
	fclose(kayit);

}

int menu1(){
	int secim1;
	printf("\n\n\n\n\n");
printf("\t\t\t _______________________ \n");
printf("\t\t\t|  ___________________  |\n");
printf("\t\t\t| |                   | |\n");
printf("\t\t\t| |                   | |\n");
printf("\t\t\t| | -----  MENU  ---- | |\n");
printf("\t\t\t| |  ---------------  | |\n");
printf("\t\t\t| | 1. YONETICI       | |\n");
printf("\t\t\t| | 2. PERSONEL MUDURU| |\n");
printf("\t\t\t| | 3. PERSONEL       | |\n");
printf("\t\t\t| | 0. CIKIS          | |\n");
printf("\t\t\t| |                   | |\n");
printf("\t\t\t| |                   | |\n");
printf("\t\t\t| |                   | |\n");
printf("\t\t\t| |___________________| |\n");
printf("\t\t\t|   _________________   |\n");
printf("\t\t\t|  |  1  |  2  |  3  |  |\n");
printf("\t\t\t|  |     | abc | def |  |\n");
printf("\t\t\t|  |_____|_____|_____|  |\n");
printf("\t\t\t|  |  4  |  5  |  6  |  |\n");
printf("\t\t\t|  | ghi | jkl | mno |  |\n");
printf("\t\t\t|  |_____|_____|_____|  |\n");
printf("\t\t\t|  |  7  |  8  |  9  |  |\n");
printf("\t\t\t|  | pqrs| tuv |wxyz |  |\n");
printf("\t\t\t|  |_____|_____|_____|  |\n");
printf("\t\t\t|  |     |     |     |  |\n");
printf("\t\t\t|  |  *  |  0  |  #  |  |\n");
printf("\t\t\t|  |_____|_____|_____|  |\n");
printf("\t\t\t|_______________________|\n");
	printf("\t\t\t\n");
	printf("\n\t\t\tKullanici kimliginizi giriniz:");
	scanf("%d",&secim1);
	if (secim1!=1 && secim1!=2 && secim1!=3 && secim1!=0){
		while(secim1!=1 || secim1!=2 || secim1!=3 || secim1!=0){ 
    		printf("\t\t\t\tYanlis Secim Tekrar Deneyiniz=");
			scanf("%d",&secim1);
        	if (secim1==1 || secim1==2 || secim1==3 || secim1==0) break;
    	}
    }
    return secim1;
}

int menuyon(){
	int secimyon;
	printf("\n\n\n\n\n");
	printf("\t\t\t ____________________________\n");
    printf("\t\t\t|  ________________________  |\n");
	printf("\t\t\t| |                        | |\n");
	printf("\t\t\t| |                        | |\n");
	printf("\t\t\t| |  --  HOS GELDINIZ --   | |\n");
	printf("\t\t\t| |  ----  YONETICI ----   | |\n");
	printf("\t\t\t| |    ---------------     | |\n");
	printf("\t\t\t| |                        | |\n");
	printf("\t\t\t| |   1. Satis             | |\n");
	printf("\t\t\t| |   2. Yeni Urun         | |\n");
	printf("\t\t\t| |   3. Stok Listele      | |\n");
	printf("\t\t\t| |   4. Stokta Ara        | |\n");
	printf("\t\t\t| |   5. Satilanlar        | |\n");
	printf("\t\t\t| |   6. Kar               | |\n");
	printf("\t\t\t| |   7. Vergi             | |\n");
	printf("\t\t\t| |   8. Urun Sil          | |\n");
	printf("\t\t\t| |   9. Sifirla           | |\n");
	printf("\t\t\t| |  10. Ana Menu          | |\n");
	printf("\t\t\t| |  11. Personel Ekle/Sil | |\n");
	printf("\t\t\t| |  12. P. Mudur Ekle/Sil | |\n");
	printf("\t\t\t| |  13. Sifre Degistir    | |\n");
	printf("\t\t\t| |  14. Silinen Goruntule | |\n");
	printf("\t\t\t| |  15. Silinen Calisan G.| |\n");
	printf("\t\t\t| |   0. Cikis             | |\n");
	printf("\t\t\t| |                        | |\n");
	printf("\t\t\t| |                        | |\n");
	printf("\t\t\t| |                        | |\n");
	printf("\t\t\t| |                        | |\n");
	printf("\t\t\t| |                        | |\n");
	printf("\t\t\t| |________________________| |\n");
	printf("\t\t\t|             __             |\n");
	printf("\t\t\t|            |__|            |\n");
	printf("\t\t\t|____________________________|\n");
	printf("\t\t\t\n");
	printf("\t\t\tSecim yapiniz:");
	scanf("%d",&secimyon);
	if (secimyon!=1 && secimyon!=2 && secimyon!=3 && secimyon!=4 && secimyon!=5 && secimyon!=6 && secimyon!=7 && secimyon!=8 && secimyon!=9 && secimyon!=0 && secimyon!=10 && secimyon!=11 && secimyon!=12 && secimyon!=13 && secimyon!=14 && secimyon!=15){
		while(secimyon!=1 || secimyon!=2 || secimyon!=3 || secimyon!=4 || secimyon!=5 || secimyon!=6 || secimyon!=7 || secimyon!=8 || secimyon!=9 || secimyon!=0 || secimyon!=10 || secimyon!=11 || secimyon!=12 || secimyon!=13 || secimyon!=14 || secimyon!=15){ 
    		printf("\t\t\t\tYanlis Secim Tekrar Deneyiniz=");
			scanf("%d",&secimyon);
        	if (secimyon==1 || secimyon==2 || secimyon==3 || secimyon==4 || secimyon==5 || secimyon==6 || secimyon==7 || secimyon==8 || secimyon==9 || secimyon==0 || secimyon==10 || secimyon==11 || secimyon==12 || secimyon==13 || secimyon==14 || secimyon==15)break;
    	}
    return secimyon;
	}
}
int menupermu(){
	int secimpermu;
	printf("\n\n\n\n\n");
printf("\t\t\t _________________________ \n");
printf("\t\t\t|  _____________________  |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| | --  HOS GELDINIZ -- | |\n");
printf("\t\t\t| | - PERSONEL MUDURU - | |\n");
printf("\t\t\t| |   ---------------   | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |   1. Satis          | |\n");
printf("\t\t\t| |   2. Yeni Urun      | |\n");
printf("\t\t\t| |   3. Stok Listele   | |\n");
printf("\t\t\t| |   4. Stokta Ara     | |\n");
printf("\t\t\t| |   5. Satilanlar     | |\n");
printf("\t\t\t| |   6. Urun Sil       | |\n");
printf("\t\t\t| |   7. Ana Menu       | |\n");
printf("\t\t\t| |   8. Sifre Degistir | |\n");
printf("\t\t\t| |   0. Cikis          | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |_____________________| |\n");
printf("\t\t\t|           __            |\n");
printf("\t\t\t|          |__|           |\n");
printf("\t\t\t|_________________________|\n");
	printf("\t\t\t\n");
	printf("\t\t\tSecim yapiniz:");
	scanf("%d",&secimpermu);
	if (secimpermu!=1 && secimpermu!=2 && secimpermu!=3 && secimpermu!=4 && secimpermu!=5 && secimpermu!=6 && secimpermu!=7 && secimpermu!=0 && secimpermu!=8){
		while(secimpermu!=1 || secimpermu!=2 || secimpermu!=3 || secimpermu!=4 || secimpermu!=5 || secimpermu!=6 || secimpermu!=7 || secimpermu!=0 || secimpermu!=8){ 
    		printf("\t\t\t\tYanlis Secim Tekrar Deneyiniz=");
			scanf("%d",&secimpermu);
        	if (secimpermu==1 || secimpermu==2 || secimpermu==3 || secimpermu==4 || secimpermu==5 || secimpermu==6 || secimpermu==7 || secimpermu==0 || secimpermu==8) break;
    	}
    return secimpermu;
	}	
}
int menuper(){
	int secimper;
	printf("\n\n\n\n\n");
printf("\t\t\t _________________________ \n");
printf("\t\t\t|  _____________________  |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| | --  HOS GELDINIZ -- | |\n");
printf("\t\t\t| | ----  PERSONEL ---- | |\n");
printf("\t\t\t| |   ---------------   | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |   1. Satis          | |\n");
printf("\t\t\t| |   2. Yeni Urun      | |\n");
printf("\t\t\t| |   3. Stok Listele   | |\n");
printf("\t\t\t| |   4. Stokta Ara     | |\n");
printf("\t\t\t| |   5. Ana Menu       | |\n");
printf("\t\t\t| |   6. Sifre Degistir | |\n");
printf("\t\t\t| |   0. Cikis          | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |                     | |\n");
printf("\t\t\t| |_____________________| |\n");
printf("\t\t\t|           __            |\n");
printf("\t\t\t|          |__|           |\n");
printf("\t\t\t|_________________________|\n");
	printf("\t\t\t\n");
	printf("\t\t\tSecim yapiniz:");
	scanf("%d",&secimper);
	if (secimper!=1 && secimper!=2 && secimper!=3 && secimper!=4 && secimper!=5 && secimper!=0 && secimper!=6){
		while(secimper!=1 || secimper!=2 || secimper!=3 || secimper!=4 || secimper!=5 || secimper!=0 || secimper!=6){ 
    		printf("\t\t\t\tYanlis Secim Tekrar Deneyiniz=");
			scanf("%d",&secimper);
        	if (secimper==1 || secimper==2 || secimper==3 || secimper==4 || secimper==5 || secimper==0 || secimper==6) break;
    	}
    return secimper;
	}
}
int menuyonlis(){
	int secimyonlis;
	printf("\n\n\n\n\n");
printf("\t\t\t _______________________________ \n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|             NOKIA             |\n");
printf("\t\t\t|   __________________________  |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |    --  HOS GELDINIZ --   | |\n");
printf("\t\t\t|  |   ---  STOK LÝSTELE ---  | |\n");
printf("\t\t\t|  |      ---------------     | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  | 1. Alis Fiyat Goruntule  | |\n");
printf("\t\t\t|  | 2. Satis Fiyat Goruntule | |\n");
printf("\t\t\t|  | 0. Cikis                 | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |__________________________| |\n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|    _______________________    |\n");
printf("\t\t\t|   |   1   |   2   |   3   |   |\n");
printf("\t\t\t|   |       |  abc  |  def  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |   4   |   5   |   6   |   |\n");
printf("\t\t\t|   |  ghi  |  jkl  |  mno  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |   7   |   8   |   9   |   |\n");
printf("\t\t\t|   |  pqrs |  tuv  | wxyz  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |       |       |       |   |\n");
printf("\t\t\t|   |   *   |   0   |   #   |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|_______________________________|\n");
	printf("\t\t\t\n");
	printf("\t\t\tSecim yapiniz:");
	scanf("%d",&secimyonlis);
	if (secimyonlis!=1 && secimyonlis!=2 && secimyonlis!=0){
		while(secimyonlis!=1 || secimyonlis!=2 || secimyonlis!=0){ 
    		printf("\t\t\t\tYanlis Secim Tekrar Deneyiniz=");
			scanf("%d",&secimyonlis);
        	if (secimyonlis==1 || secimyonlis==2 || secimyonlis==0)break;
    	}
    return secimyonlis;
	}
}
menusilcalisan(){
	int secimsilcalisan;
	printf("\n\n\n\n\n");
printf("\t\t\t _______________________________ \n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|             NOKIA             |\n");
printf("\t\t\t|   __________________________  |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |    --  HOS GELDINIZ --   | |\n");
printf("\t\t\t|  | ---  SILINEN CALISAN --- | |\n");
printf("\t\t\t|  |      ---------------     | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  | 1. Silinen Personel Gor. | |\n");
printf("\t\t\t|  | 2. Silinen Per.Mudur Gor.| |\n");
printf("\t\t\t|  | 0. Cikis                 | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |__________________________| |\n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|    _______________________    |\n");
printf("\t\t\t|   |   1   |   2   |   3   |   |\n");
printf("\t\t\t|   |       |  abc  |  def  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |   4   |   5   |   6   |   |\n");
printf("\t\t\t|   |  ghi  |  jkl  |  mno  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |   7   |   8   |   9   |   |\n");
printf("\t\t\t|   |  pqrs |  tuv  | wxyz  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |       |       |       |   |\n");
printf("\t\t\t|   |   *   |   0   |   #   |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|_______________________________|\n");
	printf("\t\t\t\n");
	printf("\t\t\tSecim yapiniz:");
	scanf("%d",&secimsilcalisan);
	if (secimsilcalisan!=1 && secimsilcalisan!=2 && secimsilcalisan!=0){
		while(secimsilcalisan!=1 || secimsilcalisan!=2 || secimsilcalisan!=0){ 
    		printf("\t\t\t\tYanlis Secim Tekrar Deneyiniz=");
			scanf("%d",&secimsilcalisan);
        	if (secimsilcalisan==1 || secimsilcalisan==2 || secimsilcalisan==0)break;
    	}
    return secimsilcalisan;
	}
}
int menuyonstokara(){
	int secimyonstokara;
	printf("\n\n\n\n\n");
printf("\t\t\t _______________________________ \n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|         ERÝCSSON  ///         |\n");
printf("\t\t\t|   __________________________  |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |    --  HOS GELDINIZ --   | |\n");
printf("\t\t\t|  |    ---  STOKTA ARA ---   | |\n");
printf("\t\t\t|  |      ---------------     | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  | 1. Yila Gore Ara         | |\n");
printf("\t\t\t|  | 2. Aya Gore Ara          | |\n");
printf("\t\t\t|  | 3. Gune Gore Ara         | |\n");
printf("\t\t\t|  | 4. Markaya Gore Ara      | |\n");
printf("\t\t\t|  | 0. Cikis                 | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |__________________________| |\n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|    _______________________    |\n");
printf("\t\t\t|   |   1   |   2   |   3   |   |\n");
printf("\t\t\t|   |       |  abc  |  def  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |   4   |   5   |   6   |   |\n");
printf("\t\t\t|   |  ghi  |  jkl  |  mno  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |   7   |   8   |   9   |   |\n");
printf("\t\t\t|   |  pqrs |  tuv  | wxyz  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |       |       |       |   |\n");
printf("\t\t\t|   |   *   |   0   |   #   |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|_______________________________|\n");
	printf("\t\t\t\n");
	printf("\t\t\tSecim yapiniz:");
	scanf("%d",&secimyonstokara);
	if (secimyonstokara!=1 && secimyonstokara!=2 && secimyonstokara!=3 && secimyonstokara!=4 && secimyonstokara!=0){
		while(secimyonstokara!=1 || secimyonstokara!=2 || secimyonstokara!=3 || secimyonstokara!=4 || secimyonstokara!=0){ 
    		printf("\t\t\t\tYanlis Secim Tekrar Deneyiniz=");
			scanf("%d",&secimyonstokara);
        	if (secimyonstokara==1 || secimyonstokara==2 || secimyonstokara==3 || secimyonstokara==4 || secimyonstokara==0)break;
    	}
    return secimyonstokara;
	}
}
int menuyonsatilan(){
	int secimyonsatilan;
	printf("\n\n\n\n\n");
printf("\t\t\t _______________________________ \n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|            MOTOROLA           |\n");
printf("\t\t\t|   __________________________  |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |    --  HOS GELDINIZ --   | |\n");
printf("\t\t\t|  |    ---  SATILANLAR ---   | |\n");
printf("\t\t\t|  |      ---------------     | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  | 1. Tumunu Listele        | |\n");
printf("\t\t\t|  | 2. Yila Gore Listele     | |\n");
printf("\t\t\t|  | 3. Aya Gore Listele      | |\n");
printf("\t\t\t|  | 4. Gune Gore Listele     | |\n");
printf("\t\t\t|  | 5. Markaya Gore Listele  | |\n");
printf("\t\t\t|  | 0. Cikis                 | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |__________________________| |\n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|    _______________________    |\n");
printf("\t\t\t|   |   1   |   2   |   3   |   |\n");
printf("\t\t\t|   |       |  abc  |  def  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |   4   |   5   |   6   |   |\n");
printf("\t\t\t|   |  ghi  |  jkl  |  mno  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |   7   |   8   |   9   |   |\n");
printf("\t\t\t|   |  pqrs |  tuv  | wxyz  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |       |       |       |   |\n");
printf("\t\t\t|   |   *   |   0   |   #   |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|_______________________________|\n");
	printf("\t\t\t\n");
	printf("\t\t\tSecim yapiniz:");
	scanf("%d",&secimyonsatilan);
	if (secimyonsatilan!=1 && secimyonsatilan!=2 && secimyonsatilan!=3 && secimyonsatilan!=4 && secimyonsatilan!=5 && secimyonsatilan!=0){
		while(secimyonsatilan!=1 || secimyonsatilan!=2 || secimyonsatilan!=3 || secimyonsatilan!=4 || secimyonsatilan!=5 || secimyonsatilan!=0){ 
    		printf("\t\t\t\tYanlis Secim Tekrar Deneyiniz=");
			scanf("%d",&secimyonsatilan);
        	if (secimyonsatilan==1 || secimyonsatilan==2 || secimyonsatilan==3 || secimyonsatilan==4 || secimyonsatilan==5 || secimyonsatilan==0)break;
    	}
    return secimyonsatilan;
	}
}
int menuyonkar(){
	int secimyonkar;
	printf("\n\n\n\n\n");
printf("\t\t\t _______________________________ \n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|         Sony Ericsson         |\n");
printf("\t\t\t|   __________________________  |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |    --  HOS GELDINIZ --   | |\n");
printf("\t\t\t|  |        --- KAR ---       | |\n");
printf("\t\t\t|  |       -------------      | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  | 1. Tumunu Listele        | |\n");
printf("\t\t\t|  | 2. Yila Gore Listele     | |\n");
printf("\t\t\t|  | 3. Aya Gore Listele      | |\n");
printf("\t\t\t|  | 4. Gune Gore Listele     | |\n");
printf("\t\t\t|  | 5. Markaya Gore Listele  | |\n");
printf("\t\t\t|  | 0. Cikis                 | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |__________________________| |\n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|    _______________________    |\n");
printf("\t\t\t|   |   1   |   2   |   3   |   |\n");
printf("\t\t\t|   |       |  abc  |  def  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |   4   |   5   |   6   |   |\n");
printf("\t\t\t|   |  ghi  |  jkl  |  mno  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |   7   |   8   |   9   |   |\n");
printf("\t\t\t|   |  pqrs |  tuv  | wxyz  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |       |       |       |   |\n");
printf("\t\t\t|   |   *   |   0   |   #   |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|_______________________________|\n");
	printf("\t\t\t\n");
	printf("\t\t\tSecim yapiniz:");
	scanf("%d",&secimyonkar);
	if (secimyonkar!=1 && secimyonkar!=2 && secimyonkar!=3 && secimyonkar!=4 && secimyonkar!=5 && secimyonkar!=0){
		while(secimyonkar!=1 || secimyonkar!=2 || secimyonkar!=3 || secimyonkar!=4 || secimyonkar!=5 || secimyonkar!=0){ 
    		printf("\t\t\t\tYanlis Secim Tekrar Deneyiniz=");
			scanf("%d",&secimyonkar);
        	if (secimyonkar==1 || secimyonkar==2 || secimyonkar==3 || secimyonkar==4 || secimyonkar==5 || secimyonkar==0)break;
    	}
    return secimyonkar;
	}
}
int menuyonvergi(){
	int secimyonvergi;
	printf("\n\n\n\n\n");
printf("\t\t\t _______________________________ \n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|   __________________________  |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |    --  HOS GELDINIZ --   | |\n");
printf("\t\t\t|  |       --- VERGÝ ---      | |\n");
printf("\t\t\t|  |       -------------      | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  | 1. Tumunu Listele        | |\n");
printf("\t\t\t|  | 2. Yila Gore Listele     | |\n");
printf("\t\t\t|  | 3. Aya Gore Listele      | |\n");
printf("\t\t\t|  | 4. Gune Gore Listele     | |\n");
printf("\t\t\t|  | 5. Markaya Gore Listele  | |\n");
printf("\t\t\t|  | 0. Cikis                 | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |__________________________| |\n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|            SAMSUNG            |\n");
printf("\t\t\t|    _______________________    |\n");
printf("\t\t\t|   |   1   |   2   |   3   |   |\n");
printf("\t\t\t|   |       |  abc  |  def  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |   4   |   5   |   6   |   |\n");
printf("\t\t\t|   |  ghi  |  jkl  |  mno  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |   7   |   8   |   9   |   |\n");
printf("\t\t\t|   |  pqrs |  tuv  | wxyz  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |       |       |       |   |\n");
printf("\t\t\t|   |   *   |   0   |   #   |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|_______________________________|\n");
	printf("\t\t\t\n");
	printf("\t\t\tSecim yapiniz:");
	scanf("%d",&secimyonvergi);
	if (secimyonvergi!=1 && secimyonvergi!=2 && secimyonvergi!=3 && secimyonvergi!=4 && secimyonvergi!=5 && secimyonvergi!=0){
		while(secimyonvergi!=1 || secimyonvergi!=2 || secimyonvergi!=3 || secimyonvergi!=4 || secimyonvergi!=5 || secimyonvergi!=0){ 
    		printf("\t\t\t\tYanlis Secim Tekrar Deneyiniz=");
			scanf("%d",&secimyonvergi);
        	if (secimyonvergi==1 || secimyonvergi==2 || secimyonvergi==3 || secimyonvergi==4 || secimyonvergi==5 || secimyonvergi==0)break;
    	}
    return secimyonvergi;
	}
}
int menuyonsifirla(){
	int secimyonsifirla;
	printf("\n\n\n\n\n");
printf("\t\t\t _______________________________ \n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|               LG              |\n");
printf("\t\t\t|   __________________________  |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |    --  HOS GELDINIZ --   | |\n");
printf("\t\t\t|  |      --- SIFIRLA ---     | |\n");
printf("\t\t\t|  |       -------------      | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  | 1. Stok Sifirla          | |\n");
printf("\t\t\t|  | 2. Satis Sifirla         | |\n");
printf("\t\t\t|  | 0. Cikis                 | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |__________________________| |\n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|    _______________________    |\n");
printf("\t\t\t|   |   1   |   2   |   3   |   |\n");
printf("\t\t\t|   |       |  abc  |  def  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |   4   |   5   |   6   |   |\n");
printf("\t\t\t|   |  ghi  |  jkl  |  mno  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |   7   |   8   |   9   |   |\n");
printf("\t\t\t|   |  pqrs |  tuv  | wxyz  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |       |       |       |   |\n");
printf("\t\t\t|   |   *   |   0   |   #   |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|_______________________________|\n");
	printf("\t\t\t\n");
	printf("\t\t\tSecim yapiniz:");
	scanf("%d",&secimyonsifirla);
	if (secimyonsifirla!=1 && secimyonsifirla!=2 && secimyonsifirla!=0){
		while(secimyonsifirla!=1 || secimyonsifirla!=2 || secimyonsifirla!=0){ 
    		printf("\t\t\t\tYanlis Secim Tekrar Deneyiniz=");
			scanf("%d",&secimyonsifirla);
        	if (secimyonsifirla==1 || secimyonsifirla==2 || secimyonsifirla==0)break;
    	}
    return secimyonsifirla;
	}
}
int menupersil(){
	int secimpersil;
	printf("\n\n\n\n\n");
printf("\t\t\t _______________________________ \n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|               LG              |\n");
printf("\t\t\t|   __________________________  |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |    --  HOS GELDINIZ --   | |\n");
printf("\t\t\t|  |---  PERSONEL EKLE/SÝL ---| |\n");
printf("\t\t\t|  |       -------------      | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  | 1. Personel Ekle         | |\n");
printf("\t\t\t|  | 2. Personel Sil          | |\n");
printf("\t\t\t|  | 0. Cikis                 | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |__________________________| |\n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|    _______________________    |\n");
printf("\t\t\t|   |   1   |   2   |   3   |   |\n");
printf("\t\t\t|   |       |  abc  |  def  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |   4   |   5   |   6   |   |\n");
printf("\t\t\t|   |  ghi  |  jkl  |  mno  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |   7   |   8   |   9   |   |\n");
printf("\t\t\t|   |  pqrs |  tuv  | wxyz  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |       |       |       |   |\n");
printf("\t\t\t|   |   *   |   0   |   #   |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|_______________________________|\n");
	printf("\t\t\t\n");
	printf("\t\t\tSecim yapiniz:");
	scanf("%d",&secimpersil);
	if (secimpersil!=1 && secimpersil!=2 && secimpersil!=0){
		while(secimpersil!=1 || secimpersil!=2 || secimpersil!=0){ 
    		printf("\t\t\t\tYanlis Secim Tekrar Deneyiniz=");
			scanf("%d",&secimpersil);
        	if (secimpersil==1 || secimpersil==2 || secimpersil==0)break;
    	}
    return secimpersil;
	}
}
int menupermusil(){
	int secimpermusil;
	printf("\n\n\n\n\n");
printf("\t\t\t _______________________________ \n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|               LG              |\n");
printf("\t\t\t|   __________________________  |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |    --  HOS GELDINIZ --   | |\n");
printf("\t\t\t|  |--- P. MUDURU EKLE/SÝL ---| |\n");
printf("\t\t\t|  |       -------------      | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  | 1. Personel Muduru Ekle  | |\n");
printf("\t\t\t|  | 2. Personel Muduru Sil   | |\n");
printf("\t\t\t|  | 0. Cikis                 | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |                          | |\n");
printf("\t\t\t|  |__________________________| |\n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|    _______________________    |\n");
printf("\t\t\t|   |   1   |   2   |   3   |   |\n");
printf("\t\t\t|   |       |  abc  |  def  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |   4   |   5   |   6   |   |\n");
printf("\t\t\t|   |  ghi  |  jkl  |  mno  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |   7   |   8   |   9   |   |\n");
printf("\t\t\t|   |  pqrs |  tuv  | wxyz  |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|   |       |       |       |   |\n");
printf("\t\t\t|   |   *   |   0   |   #   |   |\n");
printf("\t\t\t|   |_______|_______|_______|   |\n");
printf("\t\t\t|                               |\n");
printf("\t\t\t|_______________________________|\n");
	printf("\t\t\t\n");
	printf("\t\t\tSecim yapiniz:");
	scanf("%d",&secimpermusil);
	if (secimpermusil!=1 && secimpermusil!=2 && secimpermusil!=0){
		while(secimpermusil!=1 || secimpermusil!=2 || secimpermusil!=0){ 
    		printf("\t\t\t\tYanlis Secim Tekrar Deneyiniz=");
			scanf("%d",&secimpermusil);
        	if (secimpermusil==1 || secimpermusil==2 || secimpermusil==0)break;
    	}
    return secimpermusil;
	}
}
void gulegule(){
	for(int i=0;i<4;i++){
	printf("\n");
	system("cls");
printf("\t\t\t _________________________________\n");
printf("\t\t\t|  _____________________________  |\n");
printf("\t\t\t| |                             | |\n");
printf("\t\t\t| |                             | |\n");
printf("\t\t\t| |                             | |\n");
printf("\t\t\t| |                             | |\n");
printf("\t\t\t| |                             | |\n");
printf("\t\t\t| |                             | |\n");
printf("\t\t\t| |      --  GULE GULE  --      | |\n");
printf("\t\t\t| |                             | |\n");
printf("\t\t\t| |        __   __   __   __ )) | |\n");
printf("\t\t\t| |       |  | |  | |  | |  | ))| |\n");
printf("\t\t\t| | ((    |  | |  | |  | |  |   | |\n");
printf("\t\t\t| |  ((   |  | |  | |  | |  |   | |\n");
printf("\t\t\t| |       |  | |  | |  | |  |   | |\n");
printf("\t\t\t| |       |  | |  | |  | |  |   | |\n");
printf("\t\t\t| |       |  | |  | |  | |  |   | |\n");
printf("\t\t\t| |   _   |  | |  | |  | |  |   | |\n");
printf("\t\t\t| |  / |  |  |_|  |_|  |_|  |   | |\n");
printf("\t\t\t| | |  |  |                 |   | |\n");
printf("\t\t\t| | |  |  |                 |   | |\n");
printf("\t\t\t| | |  |  |                 |   | |\n");
printf("\t\t\t| | |  |  |                 |   | |\n");
printf("\t\t\t| | |   \\_|                /    | |\n");
printf("\t\t\t| |  \\                    /     | |\n");
printf("\t\t\t| |   \\                  /      | |\n");
printf("\t\t\t| |    \\ __             /       | |\n");
printf("\t\t\t| |                             | |\n");
printf("\t\t\t| |                             | |\n");
printf("\t\t\t| |                             | |\n");
printf("\t\t\t| |                             | |\n");
printf("\t\t\t| |                             | |\n");
printf("\t\t\t| |_____________________________| |\n");
printf("\t\t\t|                __               |\n");
printf("\t\t\t|               |__|              |\n");
printf("\t\t\t|_________________________________|\n");
sleep(1);
printf("\n");
	system("cls");
printf("\t\t\t _________________________________\n");
printf("\t\t\t|  _____________________________  |\n");
printf("\t\t\t| |                             | |\n");
printf("\t\t\t| |                             | |\n");
printf("\t\t\t| |                             | |\n");
printf("\t\t\t| |                             | |\n");
printf("\t\t\t| |                             | |\n");
printf("\t\t\t| |                             | |\n");
printf("\t\t\t| |      --  GULE GULE  --      | |\n");
printf("\t\t\t| |                             | |\n");
printf("\t\t\t| |      __   __   __   __ ))   | |\n");
printf("\t\t\t| |     |  | |  | |  | |  | ))  | |\n");
printf("\t\t\t| | ((  |  | |  | |  | |  |     | |\n");
printf("\t\t\t| |  (( |  | |  | |  | |  |     | |\n");
printf("\t\t\t| |     |  | |  | |  | |  |     | |\n");
printf("\t\t\t| |     |  | |  | |  | |  |     | |\n");
printf("\t\t\t| |     |  | |  | |  | |  |     | |\n");
printf("\t\t\t| |  _  |  | |  | |  | |  |     | |\n");
printf("\t\t\t| | / |  \\  \\_\\  \\_\\  \\_\\  |    | |\n");
printf("\t\t\t| ||  |  |                 |    | |\n");
printf("\t\t\t| ||  |  |                 |    | |\n");
printf("\t\t\t| ||  |  |                 |    | |\n");
printf("\t\t\t| ||  |  |                 |    | |\n");
printf("\t\t\t| ||   \\_|                /     | |\n");
printf("\t\t\t| | \\                    /      | |\n");
printf("\t\t\t| |  \\                  /       | |\n");
printf("\t\t\t| |   \\ __             /        | |\n");
printf("\t\t\t| |                             | |\n");
printf("\t\t\t| |                             | |\n");
printf("\t\t\t| |                             | |\n");
printf("\t\t\t| |                             | |\n");
printf("\t\t\t| |                             | |\n");
printf("\t\t\t| |_____________________________| |\n");
printf("\t\t\t|                __               |\n");
printf("\t\t\t|               |__|              |\n");
printf("\t\t\t|_________________________________|\n");
sleep(1);
}

}

void sekil(){
	printf("\n");
	system("cls");
printf(" \n");
	printf("           _______\n");
	printf("         __       __\n");
	printf("       __           __\n");
	printf("     __               __           __\n");
	printf("   __                   __       __\n");
	printf(" __                       _______\n");
	printf(" \n");
	printf("\t\t\t\tLutfen Bekleyiniz\n");
	printf("\t\t ___________________________________________\n");
	printf("\t\t|||||||_____________________________________|\n");
sleep(1);
	system("cls");
printf(" \n");
	printf("           _______                       _______\n");
	printf("         __       __                   __       __\n");
	printf("                    __               __\n");
	printf("                      __           __\n");
	printf("                        __       __\n");
	printf("                          _______\n");
	printf(" \n");
	printf("\t\t\t\tLutfen Bekleyiniz\n");
	printf("\t\t ___________________________________________\n");
	printf("\t\t|||||||||||||||_____________________________|\n");
sleep(1);
system("cls");
printf(" \n");
	printf("                                         _______\n");
	printf("                                       __       __\n");
	printf("                    __               __           __\n");
	printf("                      __           __               __\n");
	printf("                        __       __                   __\n");
	printf("                          _______\n");
	printf(" \n");
	printf("\t\t\t\tLutfen Bekleyiniz\n");
	printf("\t\t ___________________________________________\n");
	printf("\t\t|||||||||||||||||||||||_____________________|\n");
sleep(1);
system("cls");
printf(" \n");
	printf("                                         _______\n");
	printf("                                       __       __\n");
	printf("                                     __           __\n");
	printf("                                   __               __           __\n");
	printf("                                 __                   __       __\n");
	printf("                          _______                       _______\n");
	printf(" \n");
	printf("\t\t\t\tLutfen Bekleyiniz\n");
	printf("\t\t ___________________________________________\n");
	printf("\t\t||||||||||||||||||||||||||||||||____________|\n");
sleep(1);
system("cls");
printf(" \n");
	printf("                                         _______                       _______\n");
	printf("                                       __       __                   __\n");
	printf("                                     __           __               __\n");
	printf("                                                    __           __\n");
	printf("                                                      __       __\n");
	printf("                                                        _______\n");
	printf(" \n");
	printf("\t\t\t\tLutfen Bekleyiniz\n");
	printf("\t\t ___________________________________________\n");
	printf("\t\t|||||||||||||||||||||||||||||||||||||||_____|\n");
sleep(1);

system("cls");
}

	
void menubasla();
void personel();
void personelmu();
		
void yonetici(){
	int secim1,secimyon,secimpermu,secimper,secimyonlis,secimyonstokara,secimyonsatilan,secimyonkar,secimyonvergi,sifresifirla,secimyonsifirla,secimpersil,secimpermusil,secimsilcalisan;
		if(secimyon==1){
			system("cls");
			satis(1);		
		}
		if(secimyon==2){
			system("cls");
			kayitekle();
		}
		if(secimyon==3){
			system("cls");
			sekil();
			secimyonlis=menuyonlis();
			if(secimyonlis==1){
				system("cls");
				aliskayitlistele();
			}
			if(secimyonlis==2){
				system("cls");
				satiskayitlistele();
			}
			if(secimyonlis==0){
				system("cls");
				gulegule();
				exit(0);
			}
		}
		if(secimyon==4){
			system("cls");
			sekil();
			secimyonstokara=menuyonstokara();
			if(secimyonstokara==1){
				system("cls");
				stokkayitaratarihyil();
			}
			if(secimyonstokara==2){
				system("cls");
				stokkayitaratarihay();
			}
			if(secimyonstokara==3){
				system("cls");
				stokkayitaratarihgun();
				
			}if(secimyonstokara==4){
				system("cls");
			 	kayitara();	
			}
			if(secimyonstokara==0){
				system("cls");
				gulegule();
				exit(0);
			}
		
		}
		if(secimyon==5){
			system("cls");
			sekil();
			secimyonsatilan=menuyonsatilan();
			if(secimyonsatilan==1){
				system("cls");
				satistellistele();
			}
			if(secimyonsatilan==2){
				system("cls");
				satiskayitaratarihyil();
			}
			if(secimyonsatilan==3){
				system("cls");
				satiskayitaratarihay();
			}
			if(secimyonsatilan==4){
				system("cls");
				satiskayitaratarihgun();
			}
			if(secimyonsatilan==5){
				system("cls");
				satiskayitarar();
			}
			if(secimyonsatilan==0){
				system("cls");
				gulegule();
				exit(0);
			}
		}
		if(secimyon==6){
			system("cls");
			sekil();
			secimyonkar=menuyonkar();
			if(secimyonkar==1){
				system("cls");
				kartum();
			}
			if(secimyonkar==2){
				system("cls");
				karkayitaratarihyil();
			}
			if(secimyonkar==3){	
				system("cls");
				karkayitaratarihay();
			}
			if(secimyonkar==4){
				system("cls");
				karkayitaratarihgun();
			}
			if(secimyonkar==5){
				system("cls");
				karmarka();
			}
			if(secimyonkar==0){
				system("cls");
				
				gulegule();
				exit(0);
			}
		}
		if(secimyon==7){
			system("cls");
			sekil();
			secimyonvergi=menuyonvergi();
			if(secimyonvergi==1){
				system("cls");
				vergitum();
			}
			if(secimyonvergi==2){
				system("cls");
				vergiyil();
			}
			if(secimyonvergi==3){
				system("cls");
				vergiay();
			}
			if(secimyonvergi==4){
				system("cls");
				vergigun();
			}
			if(secimyonvergi==5){
				system("cls");
				vergi();
			}
			if(secimyonvergi==0){
				system("cls");
				gulegule();
				exit(0);
			}
		}
		
		if(secimyon==8){
			system("cls");
			kayitsil();
		}		
		if(secimyon==9){
			system("cls");
			sekil();
			printf("Lutfen Sifre Giriniz=");
			while(secimyon==9){
				scanf("%d",&sifresifirla);
				if(sifresifirla==123){
				secimyonsifirla=menuyonsifirla();
			
				if(secimyonsifirla==1){
				system("cls");
				sistemsilkayit();
				}
				if(secimyonsifirla==2){
				system("cls");
				sistemsilsatis();
				}
				if(secimyonsifirla==0){
				system("cls");
				gulegule();
				exit(0);
				}
				break;
				}
				else printf("Yanlis Sifre Tekrar Deneyiniz=");
		}
	}
	if(secimyon==0){
			system("cls");
			gulegule();
			exit(0);
			
		}	
	if(secimyon==10){
			system("cls");
					
	}
	if(secimyon==11){
			system("cls");
			sekil();
			secimpersil=menupersil();
			if(secimpersil==1){
				system("cls");
				perkayit();
			}
			if(secimpersil==2){
				system("cls");
				persil();
			}
			if(secimpersil==0){
				system("cls");
				gulegule();
				exit(0);
			}
		}
		
		
	if(secimyon==12){
			system("cls");
			sekil();
			secimpermusil=menupermusil();
			if(secimpermusil==1){
				system("cls");
				permukayit();
			}
			if(secimpermusil==2){
				system("cls");
				permusil();
			}
			if(secimpermusil==0){
				system("cls");
				gulegule();
				exit(0);
			}
			
	}
		if(secimyon==13){
			system("cls");
			sifredegistiryon();
					
	}
	if(secimyon==14){
			system("cls");
			silinengoruntule();
					
	}
	if(secimyon==15){
			system("cls");
			sekil();
			secimsilcalisan=menusilcalisan();
	
			if(secimsilcalisan==1){
				system("cls");
				silinenpergoruntule();
			}
			if(secimsilcalisan==2){
				system("cls");
				silinenpermugoruntule();
			}
			if(secimsilcalisan==0){
				system("cls");
				gulegule();
				exit(0);
			}
			
	}
}

void personelmu(){
	int secim1,secimyon,secimpermu,secimper,secimyonlis,secimyonstokara,secimyonsatilan,secimyonkar,secimyonvergi,sifresifirla,secimyonsifirla;
if(secimpermu==1){
			system("cls");
			satis(2);		
		}
		if(secimpermu==2){
			system("cls");
			kayitekle();
		}
		if(secimpermu==3){
			system("cls");
			sekil();
			secimyonlis=menuyonlis();
			if(secimyonlis==1){
				system("cls");
				aliskayitlistele();
			}
			if(secimyonlis==2){
				system("cls");
				satiskayitlistele();
			}
			if(secimyonlis==0){
				system("cls");
				gulegule();
				exit(0);
			}
		}
		if(secimpermu==4){
			system("cls");
			sekil();
			secimyonstokara=menuyonstokara();
			if(secimyonstokara==1){
				system("cls");
				stokkayitaratarihyil();
			}
			if(secimyonstokara==2){
				system("cls");
			
			}
			if(secimyonstokara==0){
				system("cls");
				
			}
			if(secimyonstokara==2){
				system("cls");
				kayitara();	
			}
			if(secimyonstokara==0){
				system("cls");
				gulegule();
				exit(0);
			}
		
		}
		if(secimpermu==5){
			system("cls");
			sekil();
			secimyonsatilan=menuyonsatilan();
			if(secimyonsatilan==1){
				system("cls");
				satistellistele();
			}
			if(secimyonsatilan==2){
				system("cls");
				satiskayitaratarihyil();
			}
			if(secimyonsatilan==3){
				system("cls");
				satiskayitaratarihay();
			}
			if(secimyonsatilan==4){
				system("cls");
				satiskayitaratarihgun();
			}
			if(secimyonsatilan==5){
				system("cls");
				satiskayitarar();
			}
			if(secimyonsatilan==0){
				system("cls");
				gulegule();
				exit(0);
			}
	}
	if(secimpermu==6){
			system("cls");
			kayitsil();
		}
	if(secimpermu==7){
		system("cls");
			
	}
	if(secimpermu==8){
			system("cls");
			sifredegistirpermu();
		}
	if(secimpermu==0){
			system("cls");
			gulegule();
			exit(0);
			
		}
}

void personel(){
	int secim1,secimyon,secimpermu,secimper,secimyonlis,secimyonstokara,secimyonsatilan,secimyonkar,secimyonvergi,sifresifirla,secimyonsifirla;
	if(secimper==1){
			system("cls");
			satis(3);		
		}
		if(secimper==2){
			system("cls");
			kayitekle();
		}
		if(secimper==3){
			system("cls");
			sekil();
			secimyonlis=menuyonlis();
			if(secimyonlis==1){
				system("cls");
				aliskayitlistele();
			}
			if(secimyonlis==2){
				system("cls");
				satiskayitlistele();
			}
			if(secimyonlis==0){
				system("cls");
				gulegule();
				exit(0);
			}
		}
		if(secimper==4){
			system("cls");
			sekil();
			secimyonstokara=menuyonstokara();
			if(secimyonstokara==1){
				system("cls");
				stokkayitaratarihyil();
			}
			if(secimyonstokara==2){
				system("cls");
				
			}
			if(secimyonstokara==3){
				system("cls");
				
			}
			if(secimyonstokara==4){
				system("cls");
				kayitara();	
			}
			if(secimyonstokara==0){
				system("cls");
				gulegule();
				exit(0);
			}
		
		}
		if(secimper==5){
			system("cls");
				
	}
		if(secimper==2){
			system("cls");
			sifredegistirper();
		}
		if(secimper==0){
			system("cls");
			gulegule();
			exit(0);
			
		}	
}

void menubasla(){
int secim1,secimyon,secimpermu,secimper,secimyonlis,secimyonstokara,secimyonsatilan,secimyonkar,secimyonvergi,sifresifirla,secimyonsifirla,sifre,sayac=0,kontrol=2;
char tus;	
	system("color 0e");
	secim1=menu1();
	if(secim1 == 1){
		
		sifreyon(1);
		system("cls");
    }
    if(secim1 == 2){
    	
		sifrepermu(2);
		system("cls");
    }
	if(secim1 == 3){
		
		sifreper(3);
		system("cls");
	}
	if(secim1 == 0){
			system("cls");
			gulegule();
			exit(0);
			}
    	
	while(secim1==1){
	
		if(secim1 == 1){
			
			system("color b0");
			secimyon=menuyon();
			yonetici();
			if(secimyon==10){
				system("cls");
				menubasla();
			
			}
		
			printf("\t\t\t\nDevam Etmek Icin E'ye Basiniz");
			tus=getch();
			if(tus=='e'||tus=='E'){
				system("cls");
				
			}
	
			else {
			gulegule(); 
			exit(0);
			}

			
		}
		}
	while(secim1==2){	
		if(secim1 == 2){
			system("color 17");
			secimpermu=menupermu();
			personelmu();
			if(secimpermu==7){
				system("cls");
				menubasla();
			
			}
		printf("\t\t\t\nDevam Etmek Icin E'ye Basiniz");
			tus=getch();
			if(tus=='e'||tus=='E'){
				system("cls");
			
			}
			else {
			gulegule(); 
			exit(0);
			}

			
			
		}
	}	
	while(secim1==3){
		if(secim1 == 3){
			system("color 71");
			secimper=menuper();
			personel();
			if(secimper==5){
				system("cls");
				menubasla();
			
			}
			
			printf("\t\t\t\nDevam Etmek Icin E'ye Basiniz");
			tus=getch();
			if(tus=='e'||tus=='E'){
				system("cls");
			
			}
			else {
			gulegule(); 
			exit(0);
			}

			
		}
	}
	
	}
int main(){
	menubasla();
	return 0;
		
 }


