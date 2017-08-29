#include <stdio.h>
#include <stdlib.h>

main()
{
	int k,u, kolom[5];
	
	//memasukkan nilai kedalam array 
	for(u=0; u<5; u++){
		printf("masukkan nilai indeks ke-%d : ", u); scanf("%d", &kolom[u]);
	}
	
	printf("\n\nRESULT\n\n");
	//mengeluarkan nilai yang ada dalam array
	for(k=0; k<5; k++){
		printf("nilai pada indeks ke-%d : %d \n", k, kolom[k]);
	}
	
	return 0;
}
