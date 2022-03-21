 #include<stdio.h>
 
/**
 * main function taking  input
 * @argc 
 */
 int main (int argc, char *argv[])
{	if(argc !=2)
	{ printf("Usage: %s password", argv[0] );
	}
	else
	{	sum = checksum(argv[1]);
		printf("%lu",sum);
		if(sum!=3566)
		{	puts("Wrong password")
			return 1;
		}
		else
			puts(argv[1]);

	}
	return 0;
}
