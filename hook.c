//Salim Garcia

#include "hook.h"

FILE *fopen(const char *filename, const char *mode) {
    FILE *(*real_fopen)(const char *filename, const char *mode);
    
    //find real fopen function
    real_fopen = (FILE *(*)(const char *filename, const char *mode))dlsym(RTLD_NEXT, "fopen");
    
    printf("fopen hooked successfully");

    //pass input to real fopen function
    return real_fopen(filename, mode);
}

size_t fwrite(const void *ptr, size_t size, size_t count, FILE *file_pointer) {
    size_t (*real_fwrite)(const void *ptr, size_t size, size_t count, FILE *file_pointer);
    
    //find real fwrite function
    real_fwrite = (size_t (*)(const void *ptr, size_t size, size_t count, FILE *file_pointer))dlsym(RTLD_NEXT, "fwrite");
    
    printf("fwrite hooked successfully");

    //pass input to real fwrite function
    return real_fwrite(ptr, size, count, file_pointer);
}

size_t fread(void *buffer, size_t size, size_t count, FILE *stream) {
    size_t (*real_fread)(void *buffer, size_t size, size_t count, FILE *stream);
    
    //find real fread function
    real_fread = (size_t (*)(void *buffer, size_t size, size_t count, FILE *stream))dlsym(RTLD_NEXT, "fread");
    
    printf("fread hooked successfully");

    //pass input to real fwrite function
    return real_fread(buffer, size, count, stream);
}

int fclose(FILE *stream) {
    int (*real_fclose)(FILE *stream);
    
    //find real fclose function
    real_fclose = (int (*)(FILE *stream))dlsym(RTLD_NEXT, "fclose");
    
    printf("close hooked successfully");

    //pass input to real fwrite function
    return real_fclose(stream);
}