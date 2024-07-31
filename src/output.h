// output.h
#ifndef OUTPUT_H
#define OUTPUT_H

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

#define ABUF_INIT {NULL, 0}

struct abuf {
    char *b;
    int len;
};

void abAppend(struct abuf *ab, const char *s, int len);
void abFree(struct abuf *ab);
void editorDrawRows(struct abuf *ab);
void editorRefreshScreen();

#endif // OUTPUT_H
