#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Returns: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
    int i, file, status;

    if (filename == NULL)
        return (-1);
    file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (file < 0)
        return (-1);

    if (text_content != NULL)
    {
        for (i = 0; text_content[i] != '\0'; i++)
            ;
        status = write(file, text_content, i);
        if (status < 0)
            return (-1);
    }
    close(file);
    return (1);
}