# Brainfuck-Interpreter
A [Brainfuck](https://esolangs.org/wiki/Brainfuck) Interpreter written in C. Weighs in on 175 Bytes (Source).

The brainfuck code is fed directly as a program argument. The following example prints `Hi!` 
```
./bf.exe "-[------->+<]>-.--[-->+++<]>.[--->+<]>--."
```

#### Note

Minimized: `main.c`,
Verbose: `main_verbose_*bytes.c`

Most implementations are missing out on type specifications and explicit casts. While this is technically valid C Code, inspection tools like Clang will go nuts on them :)
