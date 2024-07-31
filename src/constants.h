// constants.h
#ifndef CONSTANTS_H
#define CONSTANTS_H

#define KILO_VERSION "0.0.1"
#define CTRL_KEY(k) ((k) & 0x1f)

#define _DEFAULT_SOURCE
#define _BSD_SOURCE
#define _GNU_SOURCE

enum editorKey
{
    ARROW_LEFT = 1000,
    ARROW_RIGHT,
    ARROW_UP,
    ARROW_DOWN,
    DEL_KEY,
    HOME_KEY,
    END_KEY,
    PAGE_UP,
    PAGE_DOWN
};

#endif // CONSTANTS_H