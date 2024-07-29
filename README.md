# Kilo Text Editor

Kilo is a simple text editor written in C, inspired by [kilo](https://github.com/antirez/kilo). This project demonstrates basic terminal manipulation and text editing capabilities.

## Features

- Basic text editing in the terminal
- Cursor movement using arrow keys
- Screen refresh and drawing
- Raw mode for terminal input

## Requirements

- GCC (GNU Compiler Collection)
- Make

## Build and Run

### Build

To compile the project, use the following command:

```sh
make
```

### Run

After building the project, you can run the text editor using:

```sh
make run
```

Alternatively, you can run the executable directly:

```sh
./kilo
```

### Clean

To remove the compiled files, use:

```sh
make clean
```

## Files

- `main.c`: Entry point of the application, initializes the editor and handles the main loop.
- `terminal.c`: Functions related to terminal manipulation, including enabling/disabling raw mode.
- `editor.c`: Core editor functions, including screen drawing and cursor movement.
- `input.c`: Functions for handling user input.
- `output.c`: Functions for rendering the editor screen.
- `constants.h`: Header file containing constants and macros used throughout the project.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgements

This project is heavily inspired by [kilo](https://github.com/antirez/kilo) by Salvatore Sanfilippo (antirez).

