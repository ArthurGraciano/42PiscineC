#include <unistd.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{   
    unsigned int i;

    i = 0;
     while(n > 0 && (s1[i] || s2[i]) != '\0')
    {
        if(s1[i] == s2[i])
        {   
            n--;
            i++;
        }else if(s1[i] > s2[i])
        {
            return(1);
        }else
        {
            return (-1);
        }
    }
    return (0);
}

#include <stdio.h>

int main()
{
    char *c[9] = {"abcdefgh"};
    char *d[8] = {"abcde123"};
    char *e[50] = {"ZHNjnskx"};


    printf("%i\n", ft_strncmp(*c, *d, 4));
    printf("%i\n", ft_strncmp(*c, *d, 10));
    printf("%i\n", ft_strncmp(*d, *e, 8));
    printf("%i\n", ft_strncmp(*e, *d, 8));
}