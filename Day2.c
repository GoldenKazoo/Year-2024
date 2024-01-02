#include <std.io>

int main()
{
    int test1 = 5;         // C'est un int, une valeur entiere il
    float test2 = 5.0;     // C'est un float, une valeur décimale
    char test3 = '5';      // C'est un caractere, il renvoie juste des caractere
    char test4[] = "cinq"; // C'est un string, il renvoie juste des chaines de caracteres

    printf("Voici differente manières d'écrire 5 :\n");
    printf("D'abord ecrivons %d\n", test1);
    printf("Puis %f\n", test2);
    printf("Ensuite %c\n", test3);
    printf("Et enfin %s\n", test4);

    return 0;
}
