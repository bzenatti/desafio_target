#include <bits/stdc++.h>

using namespace std;

/*
O melhor jeito de resolver este problema, é verificando se (5*n^2 + 4) ou (5*n^2 – 4) 
é um quadrado perfeito, sendo n o valor a ser procurado.
Dessa forma, o problema é O(log n), sendo n o valor a ser procurado.
*/

// Verifica se num é quadrado perfeito
bool is_perfect_square(int num) {
    int root = sqrt(num);   
    return (root * root == num);
}

int main() {
    int number = 0;
    printf("Entre o numero a ser verificado:\n");
    scanf("%d", &number);

    if(is_perfect_square((5 * number * number) + 4) || is_perfect_square((5 * number * number) - 4))
        printf("%d é um número de fibonacci\n", number);
    else 
        printf("%d não é um número de fibonacci\n", number);

    return 0;
}
