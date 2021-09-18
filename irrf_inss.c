//This algorithm reads the gross salary and mention the inss and irrf discounts


// Autor : Lucas Arndt
// Data : 17/09/2021

        #include <stdio.h>
        #include <math.h>
        #include <locale.h>
        void main()
        {

        setlocale(LC_ALL, "Portuguese");

        float sal_bruto, sal_liq, desc_irrf, desc_inss;
                
        printf("Escreva o salario bruto: \n");
        scanf("%f", &sal_bruto);

                //descontando inss
                if(sal_bruto<1399.12){
                        desc_inss = sal_bruto * 8/100;
                        sal_liq = sal_bruto - desc_inss;
                        
                } else if(sal_bruto>=1399.13 && sal_bruto<=2331.88){
                        desc_inss = sal_bruto * 9/100;
                        sal_liq = sal_bruto - desc_inss;
                        
                } else if(sal_bruto>=2331.89 && sal_bruto<=4663.75){
                        desc_inss = sal_bruto * 11/100;
                        sal_liq = sal_bruto - desc_inss;
                        
                } else{
                        desc_inss = 513.02;
                        sal_liq = sal_bruto - 513.02;
                }


        //descontando irrf
        if(sal_liq<1903.98){
                sal_liq = sal_liq;
                
        } else if(sal_liq>=1903.99 && sal_liq<=2826.65){
                desc_irrf = sal_liq * 7.5/100 - 142.80;
                sal_liq = sal_liq - desc_irrf;
                
        } else if(sal_liq>=2826.66 && sal_liq<=3751.05){
                desc_irrf = sal_liq * 15/100 - 354.80;
                sal_liq = sal_liq - desc_irrf;
                
        } else if(sal_liq>=3751.06 && sal_liq<=4664.68){
                desc_irrf = sal_liq * 22.5/100 - 636.13;
                sal_liq = sal_liq - desc_irrf;
                
        } else {
                desc_irrf = sal_liq * 27.5/100 - 869.36;
                sal_liq = sal_liq - desc_irrf;
        } 

                printf("Salario bruto: R$ %.2f\n", sal_bruto);
                printf("Desconto INSS: R$ %.2f\n", desc_inss);
                printf("Desconto IRRF: R$ %.2f\n", desc_irrf);
                printf("Salario liquido: R$ %.2f\n", sal_liq);
        }
