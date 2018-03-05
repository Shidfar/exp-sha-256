#include <stdio.h>
#include <memory.h>
#include <string.h>
#include "sha_256.h"

int main() {
    char c_text[] = { "shidfar" };
    BYTE* text = (BYTE *) c_text;
    BYTE buf[SHA256_BLOCK_SIZE];
    SHA256_CTX ctx;
    int idx;
    int pass = 1;
    sha256_init(&ctx);
    sha256_update(&ctx, text, strlen((const char *) text));
    sha256_final(&ctx, buf);
    for (int i=0; i<SHA256_BLOCK_SIZE; i++)
    {
        printf("[ %i ] %i -> %x\n", i, buf[i], buf[i]);
    }
    for(int i=0; i<SHA256_BLOCK_SIZE; i++)
    {
        printf("%X", buf[i]);
    }
    printf("\n");
    return 0;
}
//shidfar
//F5F6A2352BE5FA153121FE2A178DCA238C842BDC32D157D9D3AA81EB2AF04BC8
