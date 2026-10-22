//Tem que arrumar

#include <stdio.h>

int main() {

    float demandaMensal, fatura100, fatura101, fatura250;
    int faturaFixa = 15;
    printf("Coloque sua demanda mensal em quilowatts-hora(kWh): ");
    scanf("%f", &demandaMensal);
    
    if(demandaMensal > 250){
        fatura250 = (demandaMensal * 0.9) + faturaFixa;
        printf("Sua fatura mensal é de: %f", fatura250);
    } else if(demandaMensal >= 101 && demandaMensal <= 250){
        fatura101 = (demandaMensal * 0.65) + faturaFixa;
        printf("Sua fatura mensal é de: %f", fatura101);
    } else if(demandaMensal <= 100){
        fatura100 = (demandaMensal * 0.4) + faturaFixa;
        printf("Sua fatura mensal é de: %f", "reais", fatura100);
    }
    
} 
