// Adapted from GLIBC source - https://sourceware.org/git/?p=glibc.git;a=blob;f=stdlib/random_r.c;hb=glibc-2.28#l353
#ifndef _RAND_H_
#define _RAND_H_

static unsigned long next = 1;

/**
 * @brief Generates a random number no larger than 32767
 * 
 * @return int Generated value
 */
int rand(void)
{
    next = next * 1103515245U + 12345U;
    return (uint)(next/65536) % 32768;
}

#endif // _RAND_H_