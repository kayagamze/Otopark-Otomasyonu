#include <stdio.h>
#include <stdlib.h>
int n=1,a=0,araba[10],tip[10],plaka[10],ucret[10],giris_saat[10],cikis_saat[10],fark_saat[10],toplam_ucret[10],plakaa;
int main()
{

    int menu,i;

        printf("Otopark arac eklemek istiyorsaniz 1 e basiniz:\n");
        printf("Otoparktaki araclari listelemek istiyorsaniz 2 ye basiniz:\n");
        printf("Girdiginiz plakali aracin ucretini gormek icin 3 e basiniz:\n");
        printf("Maksimum ve minimum ucret odeyen araclari gormek istiyorsaniz 4 e basiniz:\n");
        scanf("%d",&menu);
        if(menu==1)
        {
         arabaekleme();
        }
         if(menu==2)
        {
           aracListele(plaka,n);

        }

         if(menu==3)
        {

            printf("Plakasini girdiginiz aracin ucreti hesaplanir:");
            scanf("%d",&plakaa);

            printf("Odemeniz gereken ucret:%d\n",ucretHesapla(plakaa));

            }


         if(menu==4)
            {
                //int araba[i];


                printf("Maksimum ucret:%d\n",maksUcretBul(toplam_ucret,n));
                printf("Minimum ucret:%d\n",miniUcretBul(toplam_ucret,n));
              }




    main ();
    return 0;
    }


void aracListele (int plaka[],int n)
 {
     int i;
     for(i=0;i<(n-1);i++)
        printf("%d\n",plaka[i]);
 }


  int maksUcretBul(int toplam_ucret[],int n)
  {
      int i,maksimumUcret=toplam_ucret[0];
      for(i=0;i<(n-1);i++){

            if(toplam_ucret[i]>maksimumUcret)
        maksimumUcret=toplam_ucret[i];
      }
      return maksimumUcret;
  }
   int miniUcretBul (int toplam_ucret[],int n)
   {
       int i,minimumUcret=toplam_ucret[0];
       for(i=0;i<(n-1);i++)
       {
           if(toplam_ucret[i]<minimumUcret)
            minimumUcret=toplam_ucret[i];
       }
       return minimumUcret;
   }
   void arabaekleme()
   { int i;
   for(i=a;i<n;i++){
        printf("Aracin tipini giriniz:");
           scanf("%d",&tip[i]);
        if(tip[i]<1 || tip[i]>3){
           printf("Hatali giris yaptiniz.Tekrar deneyiniz.\n");
           printf("Aracin tipini giriniz:");
           scanf("%d",&tip[i]);
        }

        }saat();
           plakaekleme();

            n++;
       a++;



   }
   void saat()
   {

    int  i;
    for(i=a;i<n;i++){
         printf("Aracin giris saatini giriniz:");
            scanf("%d",&giris_saat[i]);

        if(giris_saat[i]<1 || giris_saat[i]>24){
            printf("Hatali giris yaptiniz.Tekrar deneyiniz.\n");
            printf("Aracin giris saatini giriniz:");
            scanf("%d",&giris_saat[i]);
           }
           printf("Aracin cikis saatini giriniz:");
           scanf("%d",&cikis_saat[i]);

    if (cikis_saat[i]<1 || cikis_saat[i]>24){
           printf("Hatali giris yaptiniz.Tekrar deneyiniz.\n");
           printf("Aracin cikis saatini giriniz:");
           scanf("%d",&cikis_saat[i]);}
    if(cikis_saat[i]<giris_saat[i]){
           printf("Hatali giris yaptiniz.Tekrar deneyiniz.\n");
           printf("Aracin giris saatini giriniz:");
           scanf("%d",&giris_saat[i]);
           printf("Aracin cikis saatini giriniz:");
           scanf("%d",&cikis_saat[i]);
         }

     fark_saat[i]=cikis_saat[i]-giris_saat[i];
   }
   }
   void plakaekleme()
   {
       int i;
       for(i=a;i<n;i++)
       {
            printf("Aracin plakasini giriniz:");
            scanf("%d",&plaka[i]);

            if(plaka[i]<1 && plaka[i]>81)
            printf("Hatali giris yaptiniz.Tekrar deneyiniz.");
         }
   }
int ucretHesapla(int plakaa)
  {
      int i,giris_birim_ucret=5;
      for(i=0;i<(n-1);i++){
      if(tip[i]==1){
        toplam_ucret[i]=(giris_birim_ucret+(fark_saat[i]*1));
      }
     else if(tip[i]==2){
        toplam_ucret[i]=(giris_birim_ucret+(fark_saat[i]*2));
      }
      else if(tip[i]==3){
        toplam_ucret[i]=(giris_birim_ucret+(fark_saat[i]*3));
      }
     if (plaka[i]==plakaa){
    return toplam_ucret[i];
      }
  }}
