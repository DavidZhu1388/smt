// terminal.h
#ifndef TERMINAL_H
#define TERMINAL_H

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <errno.h>
#include <string.h>
#include <sys/ioctl.h>

void die(const char *s);
void enableRawMode();
void disableRawMode();
int getCursorPosition(int *rows, int *cols);
int getWindowSize(int *rows, int *cols);
int editorReadKey();

#endif // TERMINAL_H