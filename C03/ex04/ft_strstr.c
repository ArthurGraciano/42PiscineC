#include <unistd.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(str[i] != '\0')
    {
        if(str[i] != to_find[j])
        {
            i++;
            j = 0;
        }
        else
        {   
            i++;
            j++;
            if(to_find[j] == '\0')
            {
                return(to_find);
            }
        }
        
    }
    return(0);
}

int main()
{
    char str[50] = {"Hello World"};
    char to_find[50] = {"World"};
    char to_find2[50] = {"Hello "};
    char to_find3[50] = {"Mundo"};


    printf("%s\n", ft_strstr(str, to_find) );
    printf("%s\n", ft_strstr(str, to_find2) );
    printf("%s\n", ft_strstr(str, to_find3) );
}