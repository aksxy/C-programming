// \b escape sequence
#include <stdio.h>
int main(void)
{
    // \b - backspace character transfers
    // the cursor one character back with
    // or without deleting on different
    // compilers.
    printf("Hello World\b\b\b\bF");
    return (0);
}
