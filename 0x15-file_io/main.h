#ifndef MAIN_H
#define MAIN_H

/**
 * Desciption - Header file containing protypes for all the functions
 * for the folder 0x15-file_io directory
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>


ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);


#endif /* MAIN_H */
