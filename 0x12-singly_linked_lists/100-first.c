#include <stdio.h>

void first(void)__attribute__((constructor));
/**
 * first - prints a sentence before the main
 * function is excuted
 */
void before(void)
{
	printf("you're beat! and yet, you must allow,\n");
	printf("I born my house upon my back!\n");
}
