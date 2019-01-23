#include <stdio.h>
#include <stdlib.h>
typedef char string[50];

struct belanja{
	char *nama_belanja;
	int banyaknya_barang;
	
};

typedef struct{
	char *nama_toko;
	char *pemilik_toko;
	struct belanja jajan;
}toko;

int main()
{
	string nmpemilik,nmtoko,nmbelanja;
	int byk;
	
	printf("\n\n**** Toko  Hari Mulia Permata Sari ***\n\n");
	printf("Nama pemilik Toko 	= "); gets(nmpemilik);
	printf("Nama Toko		= "); gets(nmtoko);
	printf("Belanjaan		= "); gets(nmbelanja);
	printf("Banyak belanjaan	= "); scanf("%d",&byk);
	
	toko shoping = {nmtoko,nmpemilik,{nmbelanja,byk}};
	
	printf("\n\nResult ==> \n\n");
	printf("Nama Toko		= %s", shoping.nama_toko);
	printf("\nNama pemilik		= %s", shoping.pemilik_toko);
	printf("\nBeli			= %s", shoping.jajan.nama_belanja);
	printf("\nBanyaknya		= %d", shoping.jajan.banyaknya_barang);
	
	return 0;
}
