#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nilai[4], i;
	float rata2;
	
	// mengisi array nilai 
	for(i=0; i<4; ++i)
	{
		printf("Masukkan nilai kuliah [%d] = ", i);
		scanf("%d", &nilai[i]);
	}
	
	
	printf("\n\nNilai 4 Mata Kuliah : ||");
	// output keluaran array 
	for(i=0; i<4; i++)
	{
		printf(" %d ||", nilai[i]);
	}
	
	printf("\n\nRata-rata matakuliah \n\n");
	rata2 = (nilai[0]+nilai[1]+nilai[2]+nilai[3])/4;
	printf("Rata-ratanya adalah = %.2f", rata2);
	return 0;
}
