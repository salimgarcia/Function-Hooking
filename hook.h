//Salim Garcia

#ifndef HOOK
#define HOOK
#include <stdio.h>
#include <dlfcn.h>

FILE *fopen(const char *filename, const char *mode);
size_t fwrite(const void *ptr, size_t size, size_t count, FILE *file_pointer);
size_t fread(void *buffer, size_t size, size_t count, FILE *stream);
int fclose(FILE *stream);

#endif