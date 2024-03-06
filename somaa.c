
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    long long int A, B;
    printf("Digite DOIS numeros inteiros:");
    scanf("%lld %lld", &A, &B);
    printf("O numero %lld multiplicado por 4 Bi é %lld", A, A * 200000000);
    printf("\n");
    printf("O numero %lld multiplicado por 4 Bi é %lld", B, B * 200000000);
    return 0;
}
            
