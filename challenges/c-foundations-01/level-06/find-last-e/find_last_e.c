#include <unistd.h>

int	main(int argc, char **argv)
{
	if(argc != 2)
		write(1,"e\n",2);
	else
	{
		int i = 0;
		while(argv[1][i])
		{
			if(argv[1][i] == 'e')
				{
					write(1,"e",1);
					break;
				}
			i++;
		}
		write(1,"\n",1);
	}
	return (0);
}
