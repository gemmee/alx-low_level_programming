#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
    FILE *file;
    unsigned int chars_written = 0;

    if (filename == NULL)
        return (-1);

    file = fopen(filename, "a"); /* Open file in append mode */
    if (file == NULL)
        return (-1);

    if (text_content != NULL)
    {
        while (text_content[chars_written] != '\0') /* Calculate length of text_content */
            chars_written++;

        if (fwrite(text_content, 1, chars_written, file) != chars_written) /* Write to file */
        {
            fclose(file);
            return (-1);
        }
    }

    fclose(file);
    return (1);
}

