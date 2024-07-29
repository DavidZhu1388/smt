// terminal.h
#ifndef TERMINAL_H
#define TERMINAL_H


void die(const char *s);
void enableRawMode();
void disableRawMode();
int getCursorPosition(int *rows, int *cols);
int getWindowSize(int *rows, int *cols);
int editorReadKey();

#endif // TERMINAL_H