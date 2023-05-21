    #include <stdio.h>
    int main()
    {
        char n[] = "hello\nworld!";
        char s[13];
        sscanf(n, "%s", s);
        printf("%s\n", s);
        return 0;
    }
