#include <stdio.h>
#include <stdlib.h>

void nothesaplama(int vize,int final)
{
	double ort = (double)vize*0.40 + (double)final*0.60;
	if(ort>90 && ort<100){
		printf("Ortalama : %.2lf -- AA ",ort);
	}
	
	else if(ort>70 && ort<90){
		printf("Ortalama : %.2lf -- BB ",ort);
	}
	else if(ort>50 && ort<70){
		printf("Ortalama : %.2lf -- CC ",ort);
	}
	else if(ort>30 && ort<50){
		printf("Ortalama : %.2lf -- DD ",ort);
	}
	else {
		printf("Ortalama : %.2lf -- FF ",ort);
	}
}



int main() {
	int vize,final;
	printf("Vize Notunuz : ");
	scanf("%d",&vize);
	printf("Final Notunuz : ");
	scanf("%d",&final);
	nothesaplama(vize,final);
	return 0;
}
