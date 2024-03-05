// Output:-
// hello
// 4 

#include <stdio.h>
int main() {
    int i;
    for(i=0; i<4; i++);
    {
        printf("hello\n");
        printf("%d\n", i);
    }
}


/* It is interpreted as follows:

Repeat 4 times for(i=0;i<4;i++)
... do nothing (semicolon)
after the condition gets false, i.e when i=4
Open a new scope for local variables {
... Print "hello"
... Print "i"
Close the scope }
As you can see, the operation that gets repeated is ";" and not the printf. */
