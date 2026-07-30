#include <unistd.h>
// #include <stdio.h>

int main(int ac, char **av)
{
    if(ac != 2)
        write(1,"wrong number of arguments\n",26);
    else
    {
        int i = 0, j = 0, x = 0;
        char buffer[255];
        char res[255];
        //this copies first word to buffer
        while(av[1][i])
        {
            while(av[1][i] && ((av[1][i] >= 9 && av[1][i] <= 13) || av[1][i] == ' '))
                i++;
            while(av[1][i] && !((av[1][i] >= 9 && av[1][i] <= 13) || av[1][i] == ' '))
            {
                buffer[j] = av[1][i];
                i++;
                j++;
            }
            break;
        }
        buffer[j] = '\0';
        i = 0 , j = 0;
        while(av[1][i])
        {
            while(av[1][i] && ((av[1][i] >= 9 && av[1][i] <= 13) || av[1][i] == ' '))
            i++;
            while(av[1][i] && !((av[1][i] >= 9 && av[1][i] <= 13) || av[1][i] == ' '))
            i++;
            while(av[1][i])
            {
                res[j] = av[1][i];
                i++;
                j++;
            }
            res[j] = ' ';
            j++;
            while(buffer[x])
            {
                res[j] = buffer[x];
                x++;
                j++;
            }
        }
        res[j] = '\0';
        j = 0;
        while(res[j])
        {
            while(res[j] && ((res[j] >= 9 && res[j] <= 13) || res[j] == ' '))
                j++;
            while(res[j] && !((res[j] >= 9 && res[j] <= 13) || res[j] == ' '))
            {
                write(1,&res[j],1);
                j++;
            }
            if(res[j] && ((res[j] >= 9 && res[j] <= 13) || res[j] == ' '))
                write(1," ",1);
            while(res[j] && ((res[j] >= 9 && res[j] <= 13 )|| res[j] == ' '))
                j++;
        }

        write(1,"\n",1);
    }
    return (0);
}