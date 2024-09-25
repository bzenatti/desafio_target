#include <bits/stdc++.h>

using namespace std;

int count_a(string str) {
    unsigned counter = 0;

    // Verifica na string se encontra 'a' ou 'A', se sim, conta
    for(string::size_type i = 0;i < str.length();i++){
        if(str[i] == 'a' || str[i] == 'A')
            counter++;
    }
    return counter;
}

int main() {

    string str = "Com 5 A, entao, BAnaNA";   //Teste com 5 As
    // string str = "teste sem";                //Teste sem As
    // string str = "a";                        //Teste com 1 a
    // string str = "A";                        //Teste com 1 A

    printf("Quantidade de As ou as eh igual a %d\n", count_a(str));

    return 0;
}