# bf
A very small Brainfuck interpreter

To build, simply run `make`.

Running the interpreter is simple:

    $ ./bf hello.bf

The interpreter purposely does no error checking. If you don't specify an
input file, it will crash. If there is an error reading the input file, it
will crash.

Program size is fixed at the same size as data space, which is controlled by
`#define S`.
