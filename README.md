# Brainfuck-Interpreter
Brainfuck Interpreter written in C. Weighs in on 189 Bytes (Source).

The brainfuck code is fed directly as a program argument. The following example prints `Hi!` 
```
./bf.exe "-[------->+<]>-.--[-->+++<]>.[--->+<]>--."
```

#### Note

Verbose: `main_verbose.c`,
Minimized: `main.c`

Both implementations are missing out on type specifications and explicit casts. While this is technically valid C Code, inspection tools like Clang will go nuts on them :)
