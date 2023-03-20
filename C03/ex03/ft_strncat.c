#include <stdio.h>
#include <unistd.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    unsigned int j;

    i = 0;
    j = 0;
    while(dest[i] != '\0')
    {
        i++;
    }

    while((src[j] != '\0') && (j < nb))
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return(dest);
}


int main()
{
    char dest[50] = {"Hello World"};
    char src[50] = {"Ola Mundo"};

    printf("%s\n", ft_strncat(dest, src, 3));
    printf("%s\n", ft_strncat(dest, src, 5));
    printf("%s\n", ft_strncat(src, dest, 9));

}