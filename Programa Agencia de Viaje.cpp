#include<stdio.h>

float calculo(int *Paq,int *Paq1,int *Paq2, int *Paq3, int *CantPer,int *PaqTot, float *RecPaq1, float *RecPaq2, float *RecPaq3,float *RecTot);

float SeleccionPack(int *Paq,int *Paq1,int *Paq2, int *Paq3, int *CantPer, float *RecPaq1, float *RecPaq2, float *RecPaq3);

int main()
{
	int CantPer=0,Paq=0,Paq1=0,Paq2=0,Paq3=0,PaqTot=0;
	float RecPaq1=0,RecPaq2=0,RecPaq3=0,RecTot=0;
		
	printf("Ingrese paquete turistico: ");
	scanf("%d", &Paq);
	
	calculo(&Paq,&Paq1,&Paq2,&Paq3,&CantPer,&PaqTot,&RecPaq1,&RecPaq2,&RecPaq3,&RecTot);

	
	printf("\n");
	printf("Cantidad vendida de Paquete 1: %d", Paq1);
	printf("\n");
	printf("Cantidad vendida de Paquete 2: %d", Paq2);
	printf("\n");
	printf("Cantidad vendida de Paquete 3: %d", Paq3);
	printf("\n");
	printf("\n");
	printf("Cantidad total de Paquetes vendidos: %d", PaqTot);
	printf("\n");
	printf("--------------------------\n");
	printf("Recaudacion por Paquete 1: %.2f", RecPaq1);
	printf("\n");
	printf("Recaudacion por Paquete 2: %.2f", RecPaq2);
	printf("\n");
	printf("Recaudacion por Paquete 3: %.2f", RecPaq3);
	printf("\n");
	printf("\n");
	printf("Recaudacion Total: %.2f", RecTot);
	printf("\n");
}

float calculo(int *Paq,int *Paq1,int *Paq2, int *Paq3, int *CantPer,int *PaqTot, float *RecPaq1, float *RecPaq2, float *RecPaq3,float *RecTot)
{

	while(*Paq !=0)
	{
		if (*Paq <0 || *Paq >3)
		{
				printf("Error de Ingreso");
				printf("\n");
				printf("Ingrese paquete turistico 1, 2 o 3");
				printf("\n");
				printf("----------------------\n");	
		}
		else
		{
		printf("Ingrese cantidad de personas: ");
		scanf("%d", &*CantPer);
		printf("--------------------\n");
		
		SeleccionPack(&*Paq, &*Paq1, &*Paq2, &*Paq3, &*CantPer, &*RecPaq1, &*RecPaq2, &*RecPaq3);
		
		}	
		printf("Ingrese paquete turistico: ");
		scanf("%d", &*Paq);
	}
	printf("--------------------\n");
	
	*PaqTot=*Paq1+*Paq2+*Paq3;
	*RecTot=*RecPaq1+*RecPaq2+*RecPaq3;
}

float SeleccionPack(int *Paq,int *Paq1,int *Paq2, int *Paq3, int *CantPer, float *RecPaq1, float *RecPaq2, float *RecPaq3)
{
	switch(*Paq)
		{
			case 1:
				*Paq1=*Paq1+*CantPer;
				if(*CantPer > 2)
				{
					*RecPaq1=*RecPaq1+(2000*(*CantPer)*0.80);
				}
				else
				{
					*RecPaq1=*RecPaq1+2000;
				}
				break;
			case 2:
				*Paq2=*Paq2+*CantPer;
				if(*CantPer > 2)
				{
					*RecPaq2=*RecPaq2+(3000*(*CantPer)*0.80);
				}
				else
				{
					*RecPaq2=*RecPaq2+3000;
				}
				break;
			case 3:
				*Paq3=*Paq3+*CantPer;
				if(*CantPer > 2)
				{
					*RecPaq3=*RecPaq3+(2500*(*CantPer)*0.65);
				}
				else
				{
					*RecPaq3=*RecPaq3+(2500*0.85);
				}
				break;
		}
}
