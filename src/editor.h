// editor.h
#ifndef EDITOR_H
#define EDITOR_H

#define _DEFAULT_SOURCE
#define _BSD_SOURCE
#define _GNU_SOURCE

#include <termios.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct editorConfig E;

typedef struct erow
{
    int size;
    char *chars;
} erow;

struct editorConfig
{
    int cx, cy;
    int screenrows;
    int screencols;
    int numrows;
    erow row;
    struct termios orig_termios;
};

void initEditor();
void editorOpen();

#endif // EDITOR_H
