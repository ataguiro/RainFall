#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#define _GNU_SOURCE

//TODO
int	main(int argc, char **argv)
{
	char	*sh;
	char	*tmp;
	uid_t	uid;
	gid_t	id;
	char	*arg[2];
	/* esp, 0x20 */

	if (atoi(argv[1]) == 423) {
		sh = strdup("/bin/sh");
		tmp = NULL;

		id = getegid();
		uid = geteuid();

		setresgid(id, id, id);
		setresuid(uid, uid, uid);
		
		arg[0] = sh;
		arg[1] = NULL;
		execv("/bin/sh", arg);
	} else {
		write(2, "No !\n", 5);
	}
	return (0);
}
