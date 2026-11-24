#include "libft.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>

char    get_strmapi(unsigned int i, char c)
{
    if (c >= 'a' && c <= 'z' && i % 2 == 0)
        return (c -= 32);
    else if (c >= 'A' && c <= 'Z' && i % 2 == 0)
        return (c += 32);
    return (c);
}

void    get_striteri(unsigned int i, char *c)
{
    if (*c >= 'a' && *c <= 'z' && i % 2 == 0)
        *c -= 32;
    else if (*(c) >= 'A' && *c <= 'Z' && i % 2 == 0)
        *c += 32;
}

void	del(void *content)
{
	free(content);
}

void    f1(void *content)
{       
    size_t  i;
    char *ncontent = content;
    
    i = 0;
    while (ncontent[i])
    {
        get_striteri(i, &ncontent[i]);
        i++;
    }
}   
    
void    *f2(void    *content)
{   
    size_t  i;
    char *  ncontent = content;
    
    i = 0;  
    while (ncontent[i])
    {
        ncontent[i] = get_strmapi(i, ncontent[i]);
        i++;
    }
    return (ncontent);
}   

int main(void)
{

    // TEST FONCTIONS IS...


    int num = 48;
    int alpha = 98;
    int outbounds = 300;
    int extend = 256;


    printf("|[ IS ALPHA TESTS ]|\n\n");


    printf("[ NUMBER ]\n[1] : Expected : %d \t-->\tResults : %d \n\n", isalpha(num),ft_isalpha(num));

    printf("[ ALPHABET ]\n[2] : Expected : %d \t-->\tResults : %d \n\n", isalpha(alpha), ft_isalpha(alpha));

    printf("[ OUTBOUNDS ]\n[3] : Expected : %d \t-->\tResults : %d \n\n", isalpha(outbounds), ft_isalpha(outbounds));

    printf("[ EXTENDED ]\n[4] : Expected : %d \t-->\tResults : %d \n\n", isalpha(extend), ft_isalpha(extend));

//---------------------------------------------------------------------------------------------------------------
    printf("-------------------------------------------------------------------------|\n\n");


    printf("|[ IS DIGIT TESTS ]|\n\n");


    printf("[ NUMBER ]\n[1] : Expected : %d \t-->\tResults : %d \n\n", isdigit(num), ft_isdigit(num));

    printf("[ ALPHABET ]\n[2] : Expected : %d \t-->\tResults : %d \n\n",isdigit(alpha), ft_isdigit(alpha));

    printf("[ OUTBOUNDS ]\n[3] : Expected : %d \t-->\tResults : %d \n\n", isdigit(outbounds), ft_isdigit(outbounds));

    printf("[ EXTENDED ]\n[4] : Expected : %d \t-->\tResults : %d \n\n", isdigit(extend), ft_isdigit(extend));

//--------------------------------------------------------------------------------------------------------------
    printf("-------------------------------------------------------------------------|\n\n");


    printf("|[ IS ALPHA NUMERIQUE TESTS ]|\n\n");

    printf("[ NUMBER ]\n[1] : Expected : %d \t-->\tResults : %d \n\n", isalnum(num), ft_isalnum(num));

    printf("[ ALPHABET ]\n[2] : Expected : %d \t-->\tResults : %d \n\n", isalnum(alpha), ft_isalnum(alpha));

    printf("[ OUTBOUNDS ]\n[3] : Expected : %d \t-->\tResults : %d \n\n",isalnum(outbounds), ft_isalnum(outbounds));

    printf("[ EXTENDED ]\n[4] : Expected : %d \t-->\tResults : %d \n\n", isalnum(extend), ft_isalnum(extend));

//---------------------------------------------------------------------------------------------------------------
    printf("-------------------------------------------------------------------------|\n\n");


    printf("|[ IS ASCII TESTS ]|\n\n");

    printf("[ NUMBER ]\n[1] : Expected : %d \t-->\tResults : %d \n\n", isascii(num), ft_isascii(num));

    printf("[ ALPHABET ]\n[2] : Expected : %d \t-->\tResults : %d \n\n", isascii(alpha), ft_isascii(alpha));

    printf("[ OUTBOUNDS ]\n[3] : Expected : %d \t-->\tResults : %d \n\n",isascii(outbounds), ft_isascii(outbounds));

    printf("[ EXTENDED ]\n[4] : Expected : %d \t-->\tResults : %d \n\n", isascii(extend), ft_isascii(extend));

//---------------------------------------------------------------------------------------------------------------
    printf("-------------------------------------------------------------------------|\n\n");

    printf("|[ IS PRINTABLE TESTS ]|\n\n");

    printf("[ NUMBER ]\n[1] : Expected : %d \t-->\tResults : %d \n\n", isprint(num), ft_isprint(num));

    printf("[ ALPHABET ]\n[2] : Expected : %d \t-->\tResults : %d \n\n", isprint(alpha), ft_isprint(alpha));

    printf("[ OUTBOUNDS ]\n[3] : Expected : %d \t-->\tResults : %d \n\n",isprint(outbounds), ft_isprint(outbounds));

    printf("[ EXTENDED ]\n[4] : Expected : %d \t-->\tResults : %d \n\n", isprint(extend), ft_isprint(extend));


    printf("-------------------------------------------------------------------------|\n\n");

//---------------------------------------------------------------------------------------------------------------

    // TEST FONCTIONS TO...

    char    strto1[] = "hElLoyOu";
    char    strto2[] = "helloyou";
    char    strto3[] = "HELLOYOU";
    char    strto4[] = "";
    char    strto5[] = "012345aBc0394";
    char    strto6[] = "01104937";
    int i;


    printf("\n\n|[ TO UPPER ]|");


    printf("\n\n[ UPCASES & LOWCASES ]\n[1] : Expected : ");
 for (i = 0; strto1[i]; i++)
        printf("%c", toupper(strto1[i]));

    printf("\t-->\tResults : ");
    for (i = 0; strto1[i]; i++)
        printf("%c", ft_toupper(strto1[i]));

    printf("\n\n[ LOWCASES ONLY ]\n[2] : Expected : ");
    for (i = 0; strto2[i]; i++)
        printf("%c", toupper(strto2[i]));

    printf("\t-->\tResults : ");
    for (i = 0; strto2[i]; i++)
        printf("%c", ft_toupper(strto2[i]));

    printf("\n\n[ UPCASES ONLY ]\n[3] : Expected : ");
    for (i = 0; strto3[i]; i++)
        printf("%c", toupper(strto3[i]));

    printf("\t-->\tResults : ");
    for (i = 0; strto3[i]; i++)
        printf("%c", ft_toupper(strto3[i]));

    printf("\n\n[ EMPTY STRING ]\n[4] : Expected : ");
    for (i = 0; strto4[i]; i++)
        printf("%c", toupper(strto4[i]));

    printf("\t\t-->\tResults : ");
    for (i = 0; strto4[i]; i++)
        printf("%c", ft_toupper(strto4[i]));

    printf("\n\n[ NUMBERS & ALPHABETS ]\n[5] : Expected : ");
    for (i = 0; strto5[i]; i++)
        printf("%c", toupper(strto5[i]));

    printf("\t-->\tResults : ");
    for (i = 0; strto5[i]; i++)
        printf("%c", ft_toupper(strto5[i]));

    printf("\n\n[ NUMBERS ONLY ]\n[6] : Expected : ");
    for (i = 0; strto6[i]; i++)
        printf("%c", toupper(strto6[i]));

    printf("\t-->\tResults : ");
    for (i = 0; strto6[i]; i++)
        printf("%c", ft_toupper(strto6[i]));

// -------------------------------------------------------------------------------------
    printf("\n\n-------------------------------------------------------------------------|\n\n");


    printf("\n\n|[ TO LOWER ]|\n\n");

    printf("[ UPCASES & LOWCASES ]\n[1] : Expected : ");
    for (i = 0; strto1[i]; i++)
        printf("%c", tolower(strto1[i]));

    printf("\t-->\tResults : ");
    for (i = 0; strto1[i]; i++)
        printf("%c", ft_tolower(strto1[i]));

    printf("\n\n[ LOWCASES ]\n[2] : Expected : ");
    for (i = 0; strto2[i]; i++)
        printf("%c", tolower(strto2[i]));

    printf("\t-->\tResults : ");
    for (i = 0; strto2[i]; i++)
        printf("%c", ft_tolower(strto2[i]));

    printf("\n\n[ UPCASES ]\n[3] : Expected : ");
    for (i = 0; strto3[i]; i++)
        printf("%c", tolower(strto3[i]));

    printf("\t-->\tResults : ");
    for (i = 0; strto3[i]; i++)
        printf("%c", ft_tolower(strto3[i]));

    printf("\n\n[ EMPTY STRING ]\n[4] : Expected : ");
    for (i = 0; strto4[i]; i++)
        printf("%c", tolower(strto4[i]));

    printf("\t\t-->\tResults : ");
    for (i = 0; strto4[i]; i++)
        printf("%c", ft_tolower(strto4[i]));

    printf("\n\n[ NUMBERS & ALPHABETS ]\n[5] : Expected : ");
    for (i = 0; strto5[i]; i++)
  printf("%c", ft_tolower(strto6[i]));

    printf("\n\n-------------------------------------------------------------------------|\n\n");

//--------------------------------------------------------------------------------------------------------

    // TEST FONCTIONS STR...

    const char *normal = "norcmalc012345";
    const char *null = "";
    const char *delimit = "\0\0\0\0";
    const char *car0 = "H\0elc";
    char    dchar1[20] = "Heyo";
    char    dchar2[20] = "Heyo";
    size_t  csize = sizeof(char) * 10;

    printf("|[ STRLEN TEST ]|\n\n");
    printf("[TEST SIMPLE]\n[1] : Expected : %ld \t-->\tResults : %ld \n\n", strlen(normal), ft_strlen(normal));
    printf("[TEST EMPTY]\n[2] : Expected : %ld \t-->\tResults : %ld \n\n", strlen(null), ft_strlen(null));
    printf("[TEST \\0]\n[4] : Expected : %ld \t-->\tResults : %ld \n\n", strlen(car0), ft_strlen(car0));

    printf("-------------------------------------------------------------------------|\n\n");

    printf("--- STRLCPY TEST ---\n\n");
    printf("[TEST SIMPLE]\n[1] : Expected : %ld \t-->\tResults : %ld \n\n", strlcpy(dchar1, normal, csize), ft_strlcpy(dchar2, normal, csize));
    printf("[TEST EMPTY]\n[2] : Expected : %ld \t-->\tResults : %ld \n\n", strlcpy(dchar1, null, csize), ft_strlcpy(dchar2, null, csize));
    printf("[TEST \\0]\n[4] : Expected : %ld \t-->\tResults : %ld \n\n", strlcpy(dchar1, car0, 0), ft_strlcpy(dchar2, car0, 0));

    printf("-------------------------------------------------------------------------|\n\n");

    printf("--- STRLCAT TEST ---\n\n");

    char dst[16];
    strcpy(dst, "abc");


	printf("[TEST SIMPLE]\n[1] : Expected : %ld \t-->\tResult    s : %ld \n\n", strlcat(dst, "def", 5), ft_strlcat(dst, "def",     5));

    printf("[TEST SIMPLE]\n[1] : Expected : %ld \t-->\tResults : %ld \n\n", strlcat(dchar1, normal, csize), ft_strlcat(dchar2, normal, csize));
    printf("[TEST EMPTY]\n[2] : Expected : %ld \t-->\tResults : %ld \n\n", strlcat(dchar1, null, csize), ft_strlcat(dchar2, null, csize));
    printf("[TEST \\0]\n[4] : Expected : %ld \t-->\tResults : %ld \n\n", strlcat(dchar1, car0, 0), ft_strlcat(dchar2, car0, 0));

    printf("-------------------------------------------------------------------------|\n\n");

    printf("-- STRCHR TEST --\n\n");
    printf("[TEST SIMPLE]\n[1] : Expected : %ld \t-->\tResults : %ld \n\n", strchr(normal, 'c'), ft_strchr(normal, 'c'));
    printf("[TEST EMPTY]\n[2] : Expected : %ld \t-->\tResults : %ld \n\n", strchr(null, 'c'), ft_strchr(null, 'c'));
    printf("[TEST \\0]\n[4] : Expected : %ld \t-->\tResults : %ld \n\n", strchr(car0, '\0'), ft_strchr(car0, '\0'));

    printf("-------------------------------------------------------------------------|\n\n");

    printf("-- STRRCHR TEST --\n\n");
    printf("[TEST SIMPLE]\n[1] : Expected : %ld \t-->\tResults : %ld \n\n", strrchr(normal, 'c'), ft_strrchr(normal, 'c'));
    printf("[TEST EMPTY]\n[2] : Expected : %ld \t-->\tResults : %ld \n\n", strrchr(null, 'c'), ft_strrchr(null, 'c'));
    printf("[TEST \\0]\n[4] : Expected : %ld \t-->\tResults : %ld \n\n", strrchr(car0, '\0'), ft_strrchr(car0, '\0'));

    printf("-------------------------------------------------------------------------|\n\n");

    printf("-- STRNCMP TEST --\n\n");
    printf("[TEST IDENTICAL]\n[1] : Expected : %ld \t-->\tResults : %ld \n\n", strncmp("STRNODIFFERENCE", "STRNODIFFERENCE", 15), ft_strncmp("STRNODIFFERENCE", "STRNODIFFERENCE", 15));
    printf("[TEST ONE EMPTY]\n[2] : Expected : %ld \t-->\tResults : %ld \n\n", strncmp("", "STR", 15), ft_strncmp("", "STR", 15));
    printf("[TEST BOTH EMPTY]\n[3] : Expected : %ld \t-->\tResults : %ld \n\n", strncmp("", "", 15), ft_strncmp("", "", 15));
    printf("[TEST DIFFERENT]\n[4] : Expected : %ld \t-->\tResults : %ld \n\n", strncmp("STRNOdIFFERENCE", "STRNODIFFERENCE", 15), ft_strncmp("STRNOdIFFERENCE", "STRNODIFFERENCE", 15));
    printf("[TEST SIZE ZERO]\n[5] : Expected : %ld \t-->\tResults : %ld \n\n", strncmp("STRNODIFFERENCE", "STRNODIFFERENCE", 0), ft_strncmp("STRNODIFFERENCE", "STRNODIFFERENCE", 0));

    printf("-------------------------------------------------------------------------|\n\n");

    // TEST DE FONCTION ORIGINAL PAS TROUVE.
    printf("--STRNSTR TEST--\n\n");
    printf("-(Little is empty)-\nResults : %s\n\n", ft_strnstr("Bonjour", "", 10));
    printf("-(Found little)-\nResults : %s\n\n", ft_strnstr("Bonjour", "our", 15));
    printf("-(size too small)-\nResults : %s\n\n", ft_strnstr("Bonjour", "our", 6));

    printf("-------------------------------------------------------------------------|\n\n");

    // TEST FONCTION MEM & BZERO...

 int array[] = {54, 85, 20, 63, 21};
    int arraycpy[] = {54, 85, 20, 63, 21};
    int dest[] = {0, 0, 0, 0, 0};
    int length;
    size_t  size = sizeof(int) * 5;


    printf("|[ MEM... & BZERO TESTS ]|\n\n");

    printf("[ DEST BEFORE ]\t\t: ");
    for (length = 0; length < 5; length++)
        printf("[%d] ", dest[length]);
    printf("\n\n[ ARRAY BEFORE ]\t: ");
    for (length = 0; length < 5; length++)
        printf("[%d] ", array[length]);

    printf("\n\n-------------------------------------------------------------------------|\n\n");

    memset(array, '0', size);
    printf("[ ARRAY AFTER MEMSET ]\n\n");
    printf("Expected : ");
    for (length = 0; length < 5; length++)
        printf("[%d] ", array[length]);
    memset(array, 5, size);
    ft_memset(array, '0', size);
    printf("\n\n");
    printf("Results\t : ");
    for (length = 0; length < 5; length++)
        printf("[%d] ", array[length]);

     printf("\n\n-------------------------------------------------------------------------|\n\n");

    memset(array, 5, size);
    bzero(array, size);
    printf("[ ARRAY AFTER BZERO ]\n\n");
    printf("Expected : ");
    for (length = 0; length < 5; length++)
        printf("[%d] ", array[length]);
    memset(array, 5, size);
    ft_bzero(array, size);
    printf("\n\n");
    printf("Results\t : ");
    for (length = 0; length < 5; length++)
        printf("[%d] ", array[length]);

     printf("\n\n-------------------------------------------------------------------------|\n\n");

    memcpy(dest, arraycpy, size);
    printf("[ ARRAY AFTER MEMCPY ]\n\n");
    printf("Expected : ");
    for (length = 0; length < 5; length++)
        printf("[%d] ", dest[length]);
    bzero(dest, size);
    ft_memcpy(dest, arraycpy, size);
    printf("\n\n");
    printf("Results\t : ");
    for (length = 0; length < 5; length++)
        printf("[%d] ", dest[length]);

    printf("\n-------------------------------------------------------------------------|\n\n");

    bzero(dest, size);
    memmove(dest, arraycpy, size);
    printf("[ ARRAY AFTER MEMMOVE ]\n\n");
    printf("Expected : ");
    for (length = 0; length < 5; length++)
        printf("[%d] ", dest[length]);
    bzero(dest, size);
    ft_memmove(dest, arraycpy, size);
    printf("\n\n");
    printf("Results\t : ");
    for (length = 0; length < 5; length++)
        printf("[%d] ", dest[length]);

    printf("\n-------------------------------------------------------------------------|\n\n");

 printf("\n\n--MEMCHR TEST--\n\n");
    printf("[ NOT FOUND ]\n[1] : Expected : %s\t\t-->\tResults : %s\n\n", memchr("Helloyouare", 'c', 10 ), ft_memchr("Helloyouare", 'c', 10));
    printf("[ MANY TO FIND ]\n[2] : Expected : %s\t-->\tResults : %s\n\n", memchr("Helcloyoucare", 'c', 10 ), ft_memchr("Helcloyoucare", 'c', 10));
    printf("[ SIZE TOO SMALL TO FIND ]\n[3] : Expected : %s\t\t-->\tResults : %s\n\n", memchr("Helloyouarce", 'c', 5 ), ft_memchr("Helloyouarce", 'c', 5));
    printf("[ SIZE ZERO ]\n[4] : Expected : %s\t\t-->\tResults : %s\n\n", memchr("Helloyouare", 'c', 10 ), ft_memchr("Helloyouare", 'c', 0));

    printf("\n-------------------------------------------------------------------------|\n\n");


    printf("\n\n--MEMCMP TEST--\n\n");
    printf("[ DIFFERENT ]\n[1] : Expected : %d\t\t-->\tResults : %d\n\n", memcmp("Hello", "Hella", 6 ), ft_memcmp("Hello", "Hella", 6));
    printf("[ SAME ]\n[2] : Expected : %d\t\t-->\tResults : %d\n\n", memcmp("Hello", "Hello", 6 ), ft_memcmp("Hello", "Hello", 6));
    printf("[ SIZE ZERO ]\n[3] : Expected : %d\t\t-->\tResults : %d\n\n", memcmp("Hella", "Hello", 0 ), ft_memcmp("Hella", "Hello", 0));


    // TEST ATOI & ITOA

    printf("\n-------------------------------------------------------------------------|\n\n");

    printf("--TEST ATOI--\n\n");

    printf("[ NUMBERS ]\n[1] : Expected : %d\t\t-->\tResults : %d\n\n", atoi("32425"), ft_atoi("32425"));
    printf("[ NEGATIVES ]\n[2] : Expected : %d\t\t-->\tResults : %d\n\n", atoi("-32425"), ft_atoi("-32425"));
    printf("[ POSITIVES ]\n[3] : Expected : %d\t\t-->\tResults : %d\n\n", atoi("+32425"), ft_atoi("+32425"));
    printf("[ ALPHABETS ]\n[4] : Expected : %d\t\t-->\tResults : %d\n\n", atoi("Hello"), ft_atoi("Hello"));
    printf("[ EMPTY ]\n[5] : Expected : %d\t\t-->\tResults : %d\n\n", atoi(""), ft_atoi(""));
    printf("[ SPACES ]\n[6] : Expected : %d\t\t-->\tResults : %d\n\n", atoi("  \t\n\r32425"), ft_atoi(" \t\n\r 32425"));

    printf("\n-------------------------------------------------------------------------|\n\n");

    printf("--TEST ITOA--\n\n");

    printf("[ NUMBERS ]\n[1] : Expected : 32425\t\t-->\tResults : %s\n\n", ft_itoa(32425));
    printf("[ NEGATIVES ]\n[2] : Expected : -32425\t\t-->\tResults : %s\n\n", ft_itoa(-32425));
    printf("[ ZERO ]\n[3] : Expected : 0\t\t-->\tResults : %s\n\n", ft_itoa(0));


    printf("\n-------------------------------------------------------------------------|\n\n");


    // TEST CALLOC

    size_t  cal_size = 10;
    char    *str1a = calloc(cal_size, sizeof(char));
    char    *str1b = ft_calloc(cal_size, sizeof(char));
    printf("--CALLOC TEST--\n\n");
    printf("Expected : ");
    for (length = 0; length < cal_size; length++)
        printf("[%d]", str1a[length]);
    printf("\n\nResults\t : ");
    for (length = 0; length < cal_size; length++)
        printf("[%d]", str1b[length]);
    printf("\n");

    printf("\n-------------------------------------------------------------------------|\n\n");

    // TEST SUBSTR

    printf("--TEST SUBSTR--\n\n");

    printf("[ SIMPLE ]\n[1] : Expected : lo\t\t-->\tResults : %s\n\n", ft_substr("Hello", 3, ft_strlen("Hello")));
    printf("[ STRING EMPTY ]\n[2] : Expected : \t\t-->\tResults : %s\n\n", ft_substr("", 3, 10));
    printf("[ SIZE ZERO) ]\n[3] : Expected : \t\t-->\tResults : %s\n\n", ft_substr("Hello", 3, 0));

    printf("\n-------------------------------------------------------------------------|\n\n");


    // TEST STRJOIN

    printf("--TEST STRJOIN--\n\n");
    printf("[ SIMPLE ]\n[1] : Expected : Helloyou!\t-->\tResults : %s\n\n", ft_strjoin("Hello", "you!"));
    printf("[ SECOND EMPTY ]\n[2] : Expected : Hello\t\t-->\tResults : %s\n\n", ft_strjoin("Hello", ""));
    printf("[ FIRST EMPTY ]\n[3] : Expected : you!\t\t-->\tResults : %s\n\n", ft_strjoin("", "you!"));
    printf("[ BOTH EMPTY ]\n[4] : Expected : \t\t-->\tResults : %s\n\n", ft_strjoin("", ""));
printf("\n-------------------------------------------------------------------------|\n\n");


    // TEST STRTRIM

    printf("--TEST STRTRIM--\n\n");
    printf("[ SIMPLE ]\n[1] : Expected : lHoeololol\t-->\tResults : %s\n\n", ft_strtrim("ooolHoeolololoooo", "o"));
    printf("[ SET EMPTY ]\n[2] : Expected : Hello\t\t-->\tResults : %s\n\n", ft_strtrim("Hello", ""));
    printf("[ STRING EMPTY ]\n[3] : Expected : \t\t-->\tResults : %s\n\n", ft_strtrim("", "you!"));
    printf("[ BOTH EMPTY ]\n[4] : Expected : \t\t-->\tResults : %s\n\n", ft_strtrim("", ""));


    printf("\n-------------------------------------------------------------------------|\n\n");


    // TEST SPLIT

    char    **strsplit = ft_calloc(10, sizeof(char *));

    *strsplit = ft_calloc(20, sizeof(char));
    printf("--TEST SPLIT--\n\n");
    printf("[ SIMPLE ]\n\nExpected : [Hello][you][!  ]\n\nResults\t : ");
    strsplit = ft_split("cccHellocccyouccc!  ", 'c');
    for (length = 0; strsplit[length]; length++)
        printf("[%s]", strsplit[length]);
    printf("\n\n");
    printf("[ STRING EMPTY ]\n\nExpected : \n\nResults\t : ");
    strsplit = ft_split("", 'c');
    for (length = 0; strsplit[length]; length++)
        printf("[%s]", strsplit[length]);
    printf("\n\n");
    printf("[ SET EMPTY ]\n\nExpected : [cccHellocccyouccc!  ]\n\nResults\t : ");
    strsplit = ft_split("cccHellocccyouccc!  ", '0');
    for (length = 0; strsplit[length]; length++)
        printf("[%s]", strsplit[length]);
    printf("\n\n");
    printf("[ BOTH EMPTY ]\n\nExpected : \n\nResults\t : ");
    strsplit = ft_split("", '0');
    for (length = 0; strsplit[length]; length++)
        printf("[%s]", strsplit[length]);
    printf("\n\n");

    printf("\n-------------------------------------------------------------------------|\n\n");

    // TEST STRMAPI

    printf("--TEST STRMAPI--\n\n");
    printf("[ SIMPLE ]\n[1] : Expected : heLlO\t\t-->\tResults : %s\n\n", ft_strmapi("Hello", &get_strmapi));
    printf("[ STRING EMPTY ]\n[2] : Expected : \t\t-->\tResults : %s\n\n", ft_strmapi("", &get_strmapi));
    printf("[ BOTH EMPTY ]\n[3] : Expected : (null)\t\t-->\tResults : %s\n\n", ft_strmapi("", NULL));
    printf("[ FUNCTION NULL ]\n[4] : Expected : (null)\t\t-->\tResults : %s\n\n", ft_strmapi("Hello", NULL));

    printf("\n-------------------------------------------------------------------------|\n\n");

    // TEST STRITERI

    char    *stri1 = ft_calloc(10, sizeof(char));
    char    *stri2 = ft_calloc(10, sizeof(char));
    char    *stri3 = ft_calloc(10, sizeof(char));
    char    *stri4 = ft_calloc(10, sizeof(char));


    stri2 = NULL;
    stri3 = "";
    for (length = 0; length < 10; length++)
        stri1[length] = ('A' + length);
    for (length = 0; length < 10; length++)
        stri4[length] = ('A' + length);

    ft_striteri(stri1, &get_striteri);
    ft_striteri(stri2, &get_striteri);
    ft_striteri(stri3, NULL);
    ft_striteri(stri4, NULL);

    printf("--TEST STRITERI--\n\n");
    printf("[ SIMPLE ]\n[4] : Expected : aBcDeFgHiJ\t-->\tResults : %s\n\n", stri1);
    printf("[ STRING NULL ]\n[2] : Expected : (null)\t\t-->\tResults : %s\n\n", stri2);
    printf("[ BOTH NULL ]\n[3] : Expected : \t\t-->\tResults : %s\n\n", stri3);
    printf("[ FUNCTION NULL ]\n[4] : Expected : ABCDEFGHIJ\t-->\tResults : %s\n\n", stri4);

    printf("\n-------------------------------------------------------------------------|\n\n");
 // TEST FD

    ssize_t fd =  0;
    int nbrfd = 42;
    char    cfd = 0;
    char    *sfd1 = ft_calloc(11, sizeof(char));
    char    *sfd2 = ft_calloc(11, sizeof(char));
    char    *sfd3 = ft_calloc(3, sizeof(char));
    char    *strfd = ft_calloc(10, sizeof(char));

    strfd = "Helloyou!";
    fd = open("Testfd1", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    printf("--TEST PUTCHAR FD--\n\n");
    ft_putchar_fd('X', fd);
    close(fd);

    fd = open("Testfd1", O_RDONLY);
    read(fd, &cfd, 1);
    close(fd);

    printf("Results\t : %c\n\nExpected : X\n\n", cfd);

    printf("\n-------------------------------------------------------------------------|\n\n");

    fd = open("Testfd2", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    printf("--TEST PUTSTR FD--\n\n");
    ft_putstr_fd(strfd, fd);
    close(fd);

    fd = open("Testfd2", O_RDONLY);
    read(fd, sfd1, 10);
    close(fd);

    printf("Results\t : %s\n\nExpected : Helloyou!\n\n", sfd1);

    printf("\n-------------------------------------------------------------------------|\n\n");

    fd = open("Testfd3", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    printf("--TEST PUTENDL FD--\n\n");
    ft_putendl_fd(strfd, fd);
    close(fd);

    fd = open("Testfd3", O_RDONLY);
    read(fd, sfd2, 30);
    close(fd);

    printf("Results\t : %s\nExpected : Helloyou!\n\n", sfd2);

    printf("\n-------------------------------------------------------------------------|\n\n");

    fd = open("Testfd4", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    printf("--TEST PUTNBR FD--\n\n");
    ft_putnbr_fd(nbrfd, fd);
    close(fd);

    fd = open("Testfd4", O_RDONLY);
    read(fd, sfd3, 3);
    close(fd);

    printf("Results\t : %s\n\nExpected : 42\n\n", sfd3);

    printf("\n-------------------------------------------------------------------------|\n\n");

     printf("[ TEST LSTNEW ]\n\n");

    t_list  *newnode    = ft_lstnew("A new node ?!");


    printf("Results Content\t: %s\n\n", newnode->content);
    printf("Adress\t\t: %s\n\n", newnode->next);

    printf("\n-------------------------------------------------------------------------|\n\n");

    printf("[ TEST LSTADD FRONT ]\n\n");
    size_t  lstlength;

    ft_lstadd_front(&newnode, ft_lstnew("Add front is here!"));
    ft_lstadd_back(&newnode, ft_lstnew("Add back is here!"));
    lstlength = 0;
    while (newnode)
    {
        lstlength++;
        printf("[%d]\tResults Content : %s\n\tAdress\t\t: %p\n\n", lstlength, newnode->content, newnode->next);
        newnode = newnode->next;
    }

    printf("\n-------------------------------------------------------------------------|\n\n");

    printf("[ TEST LSTSIZE ]\n\n");

    t_list  *newnode2 = ft_lstnew("3rd Node");

    ft_lstadd_front(&newnode2, ft_lstnew("2nd Node"));
    ft_lstadd_front(&newnode2, ft_lstnew("1st Node"));

    unsigned int    lstlen = ft_lstsize(newnode2);
    printf("Results : %d\n\n", lstlen);

    printf("\n-------------------------------------------------------------------------|\n\n");

    printf("[ TEST LSTLAST ]\n\n");

    newnode2 = ft_lstlast(newnode2);

    printf("Results Content : %s\nAdress\t\t: %p\n\n", newnode2->content, newnode2->next);

    printf("\n-------------------------------------------------------------------------|\n\n");

    printf("[ TEST LSTADD BACK ]\n\n");

    lstlength = 0;
    t_list  *newnode3 = ft_lstnew(ft_strdup("A new node ?!"));

    ft_lstadd_front(&newnode3, ft_lstnew("Add front is here!"));
    ft_lstadd_back(&newnode3, ft_lstnew("Add back is here!"));
    while (newnode3)
    {
        lstlength++;
        printf("[%d]\tResults Content : %s\n\tAdress\t\t: %p\n\n", lstlength, newnode3->content, newnode3->next);
        newnode3 = newnode3->next;
    }

    printf("\n-------------------------------------------------------------------------|\n\n");

    printf("[ TEST LSTDELONE ]\n\n");

    char    *content4   = ft_strdup("To delete1");
    t_list  *newnode4   = ft_lstnew(content4);

    printf("Before freeing node : %s\n\n", newnode4->content);
    ft_lstdelone(newnode4, del);
    newnode4 = NULL;
    printf("After freeing node : %p\n\n", newnode4);

    printf("\n-------------------------------------------------------------------------|\n\n");

    printf("[ TEST LSTCLEAR ]\n\n");

    char    *content5   = ft_strdup("To delete2");
    char    *content6   = ft_strdup("To delete3");
    char    *content7   = ft_strdup("To delete4");
    char    *content8   = ft_strdup("To delete5");
    char    *content9   = ft_strdup("To delete6");

    t_list  *newnode5   = ft_lstnew(content5);
    ft_lstadd_back(&newnode5, ft_lstnew(content6));
    ft_lstadd_back(&newnode5, ft_lstnew(content7));
    ft_lstadd_back(&newnode5, ft_lstnew(content8));
    ft_lstadd_back(&newnode5, ft_lstnew(content9));

    t_list  *temp = newnode5;
    lstlength = 0;
    while (newnode5)
    {
        lstlength++;
        printf("[%d]\tResults Content : %s\n\tAdress\t\t: %p\n\n", lstlength, newnode5->content, newnode5->next);
        newnode5 = newnode5->next;
    }

    newnode5 = temp;
    ft_lstclear(&newnode5, del);
    newnode5 = NULL;
    printf("Avant freeing node : %p\n\n", newnode5);


    printf("\n-------------------------------------------------------------------------|\n\n");

    printf("[ TEST LSTITER ]");

    char    *content10  = ft_strdup("To delete2");
    char    *content11  = ft_strdup("To delete3");
    char    *content12  = ft_strdup("To delete4");
    char    *content13  = ft_strdup("To delete5");
    char    *content14  = ft_strdup("To delete6");

    t_list  *newnode6   = ft_lstnew(content10);
    ft_lstadd_back(&newnode6, ft_lstnew(content11));
    ft_lstadd_back(&newnode6, ft_lstnew(content12));
    ft_lstadd_back(&newnode6, ft_lstnew(content13));
    ft_lstadd_back(&newnode6, ft_lstnew(content14));

    t_list  *temp2 = newnode6;
    lstlength = 0;
    printf("Before fonction\n\n");
    while (newnode6)
    {
        lstlength++;
        printf("[%d]\tResults Content : %s\n\tAdress\t\t: %p\n\n", lstlength, newnode6->content, newnode6->next);
        newnode6 = newnode6->next;
    }

    newnode6 = temp2;
    ft_lstiter(newnode6, f1);

    lstlength = 0;
    printf("After fonction\n\n");
    while (newnode6)
    {
        lstlength++;
        printf("[%d]\tResults Content : %s\n\tAdress\t\t: %p\n\n", lstlength, newnode6->content, newnode6->next);
        newnode6 = newnode6->next;
    }
    printf("\n-------------------------------------------------------------------------|\n\n");

    printf("[ TEST LSTMAP ]");

    char    *content15  = ft_strdup("To delete2");
    char    *content16  = ft_strdup("To delete3");
    char    *content17  = ft_strdup("To delete4");
    char    *content18  = ft_strdup("To delete5");
    char    *content19  = ft_strdup("To delete6");

    t_list  *newnode7   = ft_lstnew(content15);
    ft_lstadd_back(&newnode7, ft_lstnew(content16));
    ft_lstadd_back(&newnode7, ft_lstnew(content17));
    ft_lstadd_back(&newnode7, ft_lstnew(content18));
    ft_lstadd_back(&newnode7, ft_lstnew(content19));

    t_list  *temp3 = newnode7;
    lstlength = 0;
    printf("\n\nBefore fonction\n\n");
    while (newnode7)
    {
        lstlength++;
        printf("[%d]\tResults Content : %s\n\tAdress\t\t: %p\n\n", lstlength, newnode7->content, newnode7->next);
        newnode7 = newnode7->next;
    }

    newnode7 = temp3;
    ft_lstmap(newnode7, f2, del);

    lstlength = 0;
    printf("After fonction\n\n");
    while (newnode7)
    {
        lstlength++;
        printf("[%d]\tResults Content : %s\n\tAdress\t\t: %p\n\n", lstlength, newnode7->content, newnode7->next);
        newnode7 = newnode7->next;
    }

    return (0);
}
