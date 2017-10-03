#include <stdio.h>

int main(int argc, char **argv){

    const double VAT = 0.23;
    double post_tax, pre_tax, amount_VAT; //post_tax == netto, pre_tax == brutto

    printf("Give me a price excluding tax: ");
    scanf("%lf", &post_tax);

    amount_VAT = post_tax * VAT;
    pre_tax = post_tax + amount_VAT;

    printf("Price excluding tax: %.2f \n", post_tax);
    printf("VAT: %.2f \n", VAT);
    printf("Price including tax: %.2f \n", pre_tax);
    printf("Amount of tax: %.2f \n", amount_VAT);

    return 0;
}