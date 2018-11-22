
char* upper(char *s)
{
    
    int i = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' &&  s[i] <= 'z')
        s[i] -=  'a' - 'A';
    }

    return (s);
}