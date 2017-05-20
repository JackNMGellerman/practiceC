//
//  main.c
//  playground
//
//  Created by Jack Gellerman on 5/17/17.
//  Copyright © 2017 Jack Gellerman. All rights reserved.
//

#include <stdio.h>

int power(int m, int n)
{
    int i,  p;
    p = 1;
    for (i = 0; i < n; ++i)
    {
        p = p * m;
    }
    return p;
}

#define IN   1  /* inside a word */
#define OUT  0  /* outside a word */
/* count lines, words, and characters in input */
int main()
{
//    int c, nl, nw, nc, state;
//    state = OUT;
//    nl = nw = nc = 0;
//    while ((c = getchar()) != EOF) {
//        ++nc;
//        if (c == '\n')
//        {
//            ++nl;
//        }
//        if (c == ' ' || c == '\n' ||( c == '\t'))
//        {
//            state = OUT;
//        }
//        else
//        {
//            if (state == OUT) {
//            state = IN;
//            ++nw;
//            }
//        }
//    }
//    printf("%d %d %d\n", nl, nw, nc);
//    
    /* fizzbuzz */
    int i;
    for (i=1;i<101;i++){
        if (i % 3 == 0)
        {
            printf("Fizz");
        }
        if (i % 5 == 0)
        {
            printf("Buzz");
        }
        if ((i % 3 != 0) && (i % 5 != 0))
        {
            printf("Number=%d", i);
        }
        printf("\n");
    }
    
    
    int k;
    int nwhite;
    nwhite = 0;
    while ((k = getchar()) != EOF){
        if (k == ' ' || k == '\n' || k == '\t')
        {
            printf("\n");
        }
        else
        {
            printf("|");
        }
    }
    return 0;
}

/*
 * Replaces each
 * tab by \t, each backspace by \b, and each backslash by \\. 
 */
//#include <stdio.h>
//int main()
//{
//    int c;
//    
//    while ((c = getchar()) != EOF){
//        if(c == '\t') printf("\\t");
//        if(c == '\b') printf("\\b");
//        if(c == '\\') printf("\\");
//        putchar(c);
//    }
//    return 0;
//}

//int main() {
//    // insert code here...
//    printf("Hello, World!\n");
//    printf("Enter: ");
//    int c;
//    int nl;
//    
//    nl = 0;
//    int nt, nb;
//    nt = 0;
//    nb = 0;
//    while ((c = getchar()) != EOF){
//        if (c == '\n'){
//            ++nl;
//        }
//        if (c == '\t'){
//            ++nt;
//        }
//        if (c == ' '){
//            ++nb;
//        }
//    }
//    printf("new lines: ");
//    printf("%d\n", nl); //%d is int formatting
//    printf("new tabs: ");
//    printf("%d\n", nt); //%d is int formatting
//    printf("spaces: ");
//    printf("%d\n", nb); //%d is int formatting
//    
//    
//    return 0;
//    
//}
