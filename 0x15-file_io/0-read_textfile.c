
#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX standard output.
 * @filename: pointer to the file to be read
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print or 0 if anything goes wrong
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    int file;
    char word;
    ssize_t word_count, word_read;

    if (filename == NULL)
        return (0);
    file = open(filename, O_RDWR);
    if (file < 0)
        return (0);
    word = malloc(sizeof(char) * letters);
    if (word == NULL)
    {
        free(word);
        return (0);
    }
    word_read = read(file, word, letters);
    if (word_read < 1)
    {
        free(word);
        return (0);
    }

    word_count = write(STDOUT_FILENO, word, word_read);

    if (word_count < 0 || word_count != word_read)
        return (0);

    close(file);
    return (word_count);
}