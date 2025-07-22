#include <stdio.h>

int main(int argc, char const *argv[])
{
    char word[] = "TYLER";
    printf("Original Word: %s\n", word);
    for(int i = 0; i < 5; i++) {
        word[i] = word[i] + 32;
    }
    printf("Lowercase Word: %s", word);
    return 0;
}
