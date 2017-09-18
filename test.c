#include <stdio.h>
#include <string.h>
int ft_strncmp(const char *s1, const char *s2, size_t n);
int main()
{
    printf("strcmp:%d\nft_strcmp:%d\n", strncmp("abc", "abcde", 3),ft_strncmp("abc", "abcde", 3));
}
