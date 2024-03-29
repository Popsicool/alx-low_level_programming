#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, file, status;

	if (filename == NULL)
		return (-1);
	file =  open(filename, O_WRONLY | O_APPEND);
	if (file < 0)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		status = write(file, text_content, i);
		if (status == -1)
			return (-1);
	}
	close(file);
	return (1);
}
