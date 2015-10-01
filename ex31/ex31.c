#include <unistd.h>

int main(int argc, char *argv[])
{
	int i = 0;

	while(i < 100) {
		usleep(30);
		i++;
	}

	return 0;
}
