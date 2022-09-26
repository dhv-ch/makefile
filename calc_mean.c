double mean(double a, double b)
{
	printf("\nThis is a mean fucntion!!!\n");

	fd = fopen("/home/dhvani/linux/memset.c", "rb");
	if(fd == -1)
	{
		printf("can't open a file");
	        return 1;
	}
	return (a+b)/2;
}
