
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

struct data {
  char name[20];
  int age;
};


int main(int ac, char ** av)
{
	struct data mydata;
	strcpy(mydata.name, "Bill Westlake");
        mydata.age = 59;

	int fd  = open("test.dat", O_WRONLY | O_CREAT | O_TRUNC, 0755 );

	if (fd == -1)
	{
		perror("Unable to open file");
		return EXIT_FAILURE;
	}

	write(fd, &mydata, sizeof(struct data));


	close(fd);


	struct data read_data;

	fd = open("test.dat", O_RDONLY);
	read(fd, &read_data, sizeof(struct data));

	printf("%s is %d years old\n", read_data.name, read_data.age);

	close(fd);

}
