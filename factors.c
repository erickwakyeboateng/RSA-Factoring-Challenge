#include "factorial.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

/**
 * read_textfile- read and sends to stdout a number of charss.
 *
 *@filename: name of file
 *@letters: number of alphabets
 * Return: Number of printed characters.
 */
int main(int ac, char **av)
{
	int a, b, _flag, fd, c;
	int leido = 0;
	long int num, num_2, k;
	char *_buffer, *_buffer2;
	int alphabets = 100;

	leido = leido;
	ac = ac;
	num = 0;
	fd = open(av[1], O_RDONLY);
	_buffer = malloc(1000 * sizeof(char));
	_buffer2 = malloc(120 * sizeof(char));
	leido = read(fd, _buffer, alphabets);
 	a = 0;
	while (_buffer[a] != 0)
	{
		b = 0;
		for (c = 0; c <= 100; c++)
			_buffer2[c] = 0;
		while (_buffer[a] != 10)
			 {
				 _buffer2[b] = _buffer[a];
				 a++;
				 b++;
			 }
		num = atol(_buffer2);
		_flag = 0;
		for (k = 2; k < num /2 && _flag == 0; k++)
		{
			if (num % k == 0)
				_flag = 1;
		}
		num_2 = num / (k - 1);
		printf("%li=%li*%li\n", num, num_2, k - 1);
		a++;
	}
	free(_buffer);
	free(_buffer2);
	close(fd);
	return(0);
}
