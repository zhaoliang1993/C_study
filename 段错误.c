#include <stdio.h>
#include <assert.h>

void reverse_char(char *string)
{
        assert(string != NULL);
        char *last = string;
        while(*last++ != '\0');
        last--;
        last--;

        printf("%c\n",*last);
        printf("%c\n",*string);
        int flag=0;

        while(flag<3)
        {
                char tmp;
                //string++;
                //last--;
                //printf("%c",*last--);
                //tmp = *string;
                //*string++ = *last;
                //*last-- = tmp;
                tmp = *string;
                *string = *last;
                *last = tmp;
                string++;
                last--;
                flag++;
        }
}

int main()
{
        char *buf="abcdef";
        reverse_char(buf);
        return 0;
}
