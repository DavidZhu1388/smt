// editor.c
#include "editor.h"
#include "terminal.h"

struct editorConfig E;

void initEditor() {
    E.cx = 0;
    E.cy = 0;
    if (getWindowSize(&E.screenrows, &E.screencols) == -1)
        die("getWindowSize");
}