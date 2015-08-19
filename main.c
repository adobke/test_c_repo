#include <stdio.h>

int main() 
{

    printf("hello world!\n");
#if MAKE_PASS
    printf("This should pass\n");
    return 0;
#endif
}
