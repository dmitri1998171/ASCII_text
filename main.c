#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define LINES 6
#define COLS 10

char _a[LINES][COLS] = {
"  ___  ",
" / _ \\ ",
"/ /_\\ \\",
"|  _  |",
"| | | |",
"\\_| |_/"
};

char _b[LINES][COLS] = {
"______ ",
"| ___ \\",
"| |_/ /",
"| ___ \\",
"| |_/ /",
"\\____/ "
};

char _c[LINES][COLS] = {
" _____",
"/  __ \\",
"| /  \\/",
"| |   ",
"| \\__/\\",
" \\____/"
};

char _d[LINES][COLS] = {
" _____ ",
"|  _  \\",
"| | | |",
"| | | |",
"| |/ /",
"|___/ "
};

char _e[LINES][COLS] = {
" _____",
"|  ___|",
"| |__ ",
"|  __|",
"| |___",
"|____/"
};

char _f[LINES][COLS] = {
"______ ",
"|  ___|",
"| |_   ",
"|  _|  ",
"| |    ",
"\\_|    "
};

char _g[LINES][COLS] = {
" _____ ",
"|  __ \\",
"| |  \\/",
"| | __ ",
"| |_\\ \\",
" \\____/"
};

char _h[LINES][COLS] = {
" _   _ ",
"| | | |",
"| |_| |",
"|  _  |",
"| | | |",
"\\_| |_/"
};

char _i[LINES][COLS] = {
" _____ ",
"|_   _|",
"  | |  ",
"  | |  ",
" _| |_ ",
" \\___/ "
};

char _j[LINES][COLS] = {
"   ___ ",
"  |_  |",
"    | |",
"    | |",
"/\\__/ /",
"\\____/ "
};

char _k[LINES][COLS] = {
" _   __",
"| | / /",
"| |/ / ",
"|    \\ ",
"| |\\  \\",
"\\_| \\_/"
};

char _l[LINES][COLS] = {
" _     ",
"| |    ",
"| |    ",
"| |    ",
"| |____",
"\\_____/"
};

char _m[LINES][COLS] = {
"___  ___",
"|  \\/  |",
"| .  . |",
"| |\\/| |",
"| |  | |",
"\\_|  |_/"
};

char _n[LINES][COLS] = {
" _   _ ",
"| \\ | |",
"|  \\| |",
"| . ` |",
"| |\\  |",
"\\_| \\_/"
};

char _o[LINES][COLS] = {
" _____ ",
"|  _  |",
"| | | |",
"| | | |",
"\\ \\_/ /",
" \\___/ "
};

char _p[LINES][COLS] = {
"______ ",
"| ___ \\",
"| |_/ /",
"|  __/ ",
"| |    ",
"\\_|    "
};

char _q[LINES][COLS] = {
" _____ ",
"|  _  |",
"| | | |",
"| | | |",
"\\ \\/ /",
" \\_/\\_\\"
};

char _r[LINES][COLS] = {
"______ ",
"| ___ \\",
"| |_/ /",
"|    / ",
"| |\\ \\ ",
"\\_| \\_|"
};

char _s[LINES][COLS] = {
"  _____ ",
" /  ___|",
" \\ `--. ",
"  `--. \\",
" /\\__/ /",
" \\____/ "
};

char _t[LINES][COLS] = {
" _____ ",
"|_   _|",
"  | |  ",
"  | |  ",
"  | |  ",
"  \\_/  "
};

char _u[LINES][COLS] = {
" _   _ ",
"| | | |",
"| | | |",
"| | | |",
"| |_| |",
" \\___/ "
};

char _v[LINES][COLS] = {
" _   _ ",
"| | | |",
"| | | |",
"| | | |",
"\\ \\_/ /",
" \\___/ "
};

char _w[LINES][COLS] = {
" _    _ ",
"| |  | |",
"| |  | |",
"| |/\\| |",
"\\  /\\  /",
" \\/  \\/ "
};

char _x[LINES][COLS] = {
"__   __",
"\\ \\ / /",
" \\ V / ",
" /   \\ ",
"/ /^\\ \\",
"\\/   \\/"
};

char _y[LINES][COLS] = {
"__   __",
"\\ \\ / /",
" \\ V / ",
"  \\ /  ",
"  | |  ",
"  \\_/  "
};

char _z[LINES][COLS] = {
" ______",
"|___  /",
"   / / ",
"  / /  ",
" / /___",
"\\_____/"
};

void printLetter(char letter[LINES][COLS]) {
    for (int i = 0; i < LINES; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%c", letter[i][j]);
        }
        printf("\n");
    }
}

void printVertically(char *text) {
    for (int i = 0; i < strlen(text); i++) {
        if(text[i] == 'a') printLetter(_a);
        if(text[i] == 'b') printLetter(_b);
        if(text[i] == 'c') printLetter(_c);
        if(text[i] == 'd') printLetter(_d);
        if(text[i] == 'e') printLetter(_e);
        if(text[i] == 'f') printLetter(_f);
        if(text[i] == 'g') printLetter(_g);
        if(text[i] == 'h') printLetter(_h);
        if(text[i] == 'i') printLetter(_i);
        if(text[i] == 'j') printLetter(_j);
        if(text[i] == 'k') printLetter(_k);
        if(text[i] == 'l') printLetter(_l);
        if(text[i] == 'm') printLetter(_m);
        if(text[i] == 'n') printLetter(_n);
        if(text[i] == 'o') printLetter(_o);
        if(text[i] == 'p') printLetter(_p);
        if(text[i] == 'q') printLetter(_q);
        if(text[i] == 'r') printLetter(_r);
        if(text[i] == 's') printLetter(_s);
        if(text[i] == 't') printLetter(_t);
        if(text[i] == 'u') printLetter(_u);
        if(text[i] == 'v') printLetter(_v);
        if(text[i] == 'w') printLetter(_w);
        if(text[i] == 'x') printLetter(_x);
        if(text[i] == 'y') printLetter(_y);
        if(text[i] == 'z') printLetter(_z);
        if(text[i] == ' ') printf(" ");
    }
}

void printHorizontally(char *text) {
    for (int j = 0; j < LINES; j++) {
        for (int i = 0; i < strlen(text); i++) {
            for (int k = 0; k < COLS; k++) {
                if(text[i] == 'a') printf("%c", _a[j][k]);
                if(text[i] == 'b') printf("%c", _b[j][k]);
                if(text[i] == 'c') printf("%c", _c[j][k]);
                if(text[i] == 'd') printf("%c", _d[j][k]);
                if(text[i] == 'e') printf("%c", _e[j][k]);
                if(text[i] == 'f') printf("%c", _f[j][k]);
                if(text[i] == 'g') printf("%c", _g[j][k]);
                if(text[i] == 'h') printf("%c", _h[j][k]);
                if(text[i] == 'i') printf("%c", _i[j][k]);
                if(text[i] == 'j') printf("%c", _j[j][k]);
                if(text[i] == 'k') printf("%c", _k[j][k]);
                if(text[i] == 'l') printf("%c", _l[j][k]);
                if(text[i] == 'm') printf("%c", _m[j][k]);
                if(text[i] == 'n') printf("%c", _n[j][k]);
                if(text[i] == 'o') printf("%c", _o[j][k]);
                if(text[i] == 'p') printf("%c", _p[j][k]);
                if(text[i] == 'q') printf("%c", _q[j][k]);
                if(text[i] == 'r') printf("%c", _r[j][k]);
                if(text[i] == 's') printf("%c", _s[j][k]);
                if(text[i] == 't') printf("%c", _t[j][k]);
                if(text[i] == 'u') printf("%c", _u[j][k]);
                if(text[i] == 'v') printf("%c", _v[j][k]);
                if(text[i] == 'w') printf("%c", _w[j][k]);
                if(text[i] == 'x') printf("%c", _x[j][k]);
                if(text[i] == 'y') printf("%c", _y[j][k]);
                if(text[i] == 'z') printf("%c", _z[j][k]);
                if(text[i] == ' ') printf(" ");
            }
        }
        printf("\n");
    }
}

int main(int argc, char** argv) {
    if(argc != 2) {
        printf("Incorrect arguments!\n\nUse ASCII_text <string> (in quotes)"); 
        exit(1);
    }
    
    // printHorizontally(argv[1]);
    printVertically(argv[1]);

    return 0;
}

/*

Use "The quick brown fox jumps over the lazy dog" text for testing all letters in the alphabet

*/ 

/*

        TODO

    \/ 1) Collect letters
    \/ 2) Parse the sentense
    \/ 3) Print vertically
    \/ 4) Print horizontally
     5) Connect styles

*/ 