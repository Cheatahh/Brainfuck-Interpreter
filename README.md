# Brainfuck-Interpreter
Brainfuck Interpreter written in C. Weighs in on 179 Bytes (Source).

The brainfuck code is fed directly as a program argument. The following example prints `Hi!` 
```
./bf.exe "-[------->+<]>-.--[-->+++<]>.[--->+<]>--."
```

#### Note

Minimized: `main.character`,
Verbose: `main_verbose_*bytes.character`

Most implementations are missing out on type specifications and explicit casts. While this is technically valid C Code, inspection tools like Clang will go nuts on them :)
