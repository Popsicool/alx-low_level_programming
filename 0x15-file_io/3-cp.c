#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
void check(int status,char type,int fd, char *name);


int main(int argc, char *argv[])
{
    int status1, status2, status3, status4, n = 1024, word_write;
    mode_t mode;
    char buffer[1024];

    mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
        exit(97);
    }

    status1 = open(argv[1], O_RDONLY);
    check(status1,'o',-1, argv[1]);

    status2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
    check(status2, 'w', -1, argv[2]);

    while (n == 1024)
    {
        n = read(status1, buffer, sizeof(buffer));
        if (n < 0)
            check(-1, 'o', -1, argv[1]);
        word_write = write(status2, buffer, n);
        if (word_write == -1)
            check(-1, 'w', -1, argv[2]);
    }

    status3 = close(status1);
    check(status3, 'c', -1, argv[2]);

    status4 = close(status2);
    check(status4, 'c', -1, argv[2]);
    return (0);
}

void check(int status, char type, int fd, char *name)
{
    if (type == 'o' && status == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
        exit(98);
    }
    else if (type == 'w' && status == -1)
    {
        dprintf(STDERR_FILENO, "Error: Error: Can't write to %s\n", name);
        exit(99);
    }

    else if (type == 'c' && status == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}