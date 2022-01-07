// Juliana de Faria Duarte Ribeiro | Número USP: 12684969
#include <stdio.h>

double fnModulo(double x, double n)
{
    double modulo;
    if((x*x) - n < 0)
    modulo = ((x*x) - n) * (-1);
    else
    modulo = (x*x) - n;

    return modulo;
}

int main()
{
    double n, e, x, xInicial, xFinal, condicao;

    //printf("Digite um numero n >= 1: ");
    if(scanf("%lf", &n) == 1)
    {
        if(n >= 1)
        {
            //printf("Digite um numero e > 0: ");
            if(scanf("%lf", &e) == 1)
            {
                if(e > 0)
                {
                    int contador = 0;
                    xInicial = 0;
                    xFinal = n;
                    x = n/2;
                    //printf("00%d: intervalo = [%.8lf, %.8lf] x = %.8lf\n", contador, xInicial, xFinal, x);  

                    condicao = fnModulo(x,n);
                    
                    if((x*x) > n)
                    {
                        xInicial = 0;
                        xFinal = x;

                        while(condicao > e)
                        {
                            x = (xInicial + xFinal) / 2;
                            contador++; 
                            //printf("00%d: intervalo = [%.8lf, %.8lf] x = %.8lf\n", contador, xInicial, xFinal, x);  
                            if((x*x) > n)
                                xFinal = x;

                            else
                                xInicial = x;
                            
                            condicao = fnModulo(x,n);
                        } 
                    }
                    if((x*x) < n)
                    {
                        xInicial = x;
                        xFinal = n;

                         while(condicao > e)
                        {
                            x = (xInicial + xFinal) / 2;
                            contador++; 
                            //printf("00%d: intervalo = [%.8lf, %.8lf] x = %.8lf\n", contador, xInicial, xFinal, x);  
                            if((x*x) > n)
                                xFinal = x;
                            else
                                xInicial = x;
                            
                            condicao = fnModulo(x,n);
                        } 
                    }
                    printf("Numero de iteracoes: %d\n", contador + 1);  
                    printf("Diferenca absoluta: %.10lf\n", condicao);  
                    printf("Raiz quadrada: %.8lf\n", x);

                    return 0;
                }
            }
        }
    }
}