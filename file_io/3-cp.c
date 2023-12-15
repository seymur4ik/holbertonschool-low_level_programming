#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 *       97 if argc is not 3
 *       98 if file_from does not exist or cannot be read
 *       99 if file_to cannot be created or written to
 *       100 if file descriptor cannot be closed
 */

int main(int argc, char *argv[])
{
  int fd, v_write, v_read, fd_write, v_close, v_close_write;
  char *buf = malloc(1024);

  if (argc != 3)
    {
      dprintf(2, "Usage: cp file_from file_to\n");
      exit(97);
    }

  fd = open(argv[1], O_RDONLY);
  v_read = read(fd, buf, 1024);

  if (fd == -1 || v_read == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
      exit(98);
    }

  fd_write = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
  v_write = write(fd_write, buf, 1024);

  if (fd_write == -1 || v_write == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
      exit(99);
    }

  v_close = close(fd);
  v_close_write = close(fd_write);
  free(buf);
  if (v_close == -1 || v_close_write == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't close fd %d", v_close == -1
	      ? v_close : v_close_write);
      exit(100);
    }
  return (0);
}
