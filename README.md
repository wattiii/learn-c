# Learning C

This repo is my foray into C programming.

I'm following K.N. King's book: "C Programming: A Modern Approach"

## Topics Covered
- Preprocessing
- Compiling
- Linking
- Directives
- Functions
- Statements
- Comments
- Variables
- Types
- Assignment
- printf

## Programs

| Program | Description |
|---------|-------------|
| `box.c` | Calculates volume and dimensions of a box |
| `dweight.c` | Dimensional weight calculation |
| `dweight2` | Improved dimensional weight program |
| `add_fractions/` | Fraction addition program |
| `celsius_converter/` | Temperature conversion (Celsius to Fahrenheit) |
| `date.c` | Date handling program |
| `l_val/` | Demonstrates lvalues and rvalues |
| `square.c/` | Prints a table of squares |
| `upc/` | UPC (Universal Product Code) validation |
| `using_printf/` | printf formatting examples |
| `tprint` | Test print program |

## Building

Most programs can be compiled with:
```bash
gcc -o program_name program_name.c
```

Then run with:
```bash
./program_name
```

Some directories contain their own Makefiles or build instructions.