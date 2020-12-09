#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{
	int pid, priority;
	pid = atoi (argv[1]);
	priority = atoi (argv[2]);
	chpr(pid,priority);
	exit();
}
