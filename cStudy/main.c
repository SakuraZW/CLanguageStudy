#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>

#define PRAISE "What a super marvelous name!"   //宏定义后面没有分号

//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}

int main()
{
/**< Code 3.2 */
//    float weight;
//    float value;
//    printf("Please enter your weight in pounds:");
//    scanf("%f",&weight);
//
//    value = 770 * weight * 14.5833;
//    printf("Your weight in rhodium is worth $%.2f.\n",value);
//    return 0;
/**< Code 3.3 */
//    int x = 100;
//    printf("dec = %d\noctal = %o\nhex = %x\n", x, x, x);
//    printf("dec = %d\noctal = %#o\nhex = %#x\n", x, x, x);

/**< Code 3.4 */
//    unsigned int un = 3000000000;
//    short end = 200;
//    long big = 65537; long long verybig = 12345678908642;
//    printf("un = %u and not %d\n", un, un);
//    printf("end = %hd and %d\n", end, end);
//    printf("big = %ld and not %hd\n", big, big);
//    printf("verybig = %lld and not %ld\n", verybig, verybig);
//    return 0;

/**< Code 3.6 */
//    int16_t me16 = sizeof(char);
//    printf("First,assume int16_t is short:");
//    printf("me16 = %hd\n", me16);
//    printf("Next, let's not make any assumptions.\n");
//    printf("me16 = %"PRId16"\n", me16);
//    return 0;

//    int16_t me16 = sizeof(3.56);
//    _Bool i = 0;
//    printf("me16 = %hd\n", i);

//    char name[40];
//    printf("What's your name?\n");
//    scanf("%s", name);
//    printf("Your name of %d letters occupies %d memoory cells.\n",
//           strlen(name), sizeof name);
//    printf("The phrase of praise has %d letters", strlen(PRAISE));
//    printf("and occupies %d memory cells.\n", sizeof PRAISE);
    int i,n;
    _Bool a;
    int p = 8;
    int q = 3;

    scanf(" %d ,%d", &i, &n);
    printf("\n%d %d", i, n);
    return 0;

}
