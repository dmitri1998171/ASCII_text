#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define LINES 6
#define COLS 10

char a[LINES][COLS] = {
"  ___  ",
" / _ \\ ",
"/ /_\\ \\",
"|  _  |",
"| | | |",
"\\_| |_/"
};

char b[LINES][COLS] = {
"______ ",
"| ___ \\",
"| |_/ /",
"| ___ \\",
"| |_/ /",
"\\____/ "
};

char c[LINES][COLS] = {
" _____",
"/  __ \\",
"| /  \\/",
"| |   ",
"| \\__/\\",
" \\____/"
};

char d[LINES][COLS] = {
" _____ ",
"|  _  \\",
"| | | |",
"| | | |",
"| |/ /",
"|___/ "
};

char e[LINES][COLS] = {
"|_____",
"|  ___|",
"| |__ ",
"|  __|",
"| |___",
"|____/"
};

char f[LINES][COLS] = {
"______ ",
"|  ___|",
"| |_   ",
"|  _|  ",
"| |    ",
"\\_|    "
};

char g[LINES][COLS] = {
" _____ ",
"|  __ \\",
"| |  \\/",
"| | __ ",
"| |_\\ \\",
" \\____/"
};

char h[LINES][COLS] = {
" _   _ ",
"| | | |",
"| |_| |",
"|  _  |",
"| | | |",
"\\_| |_/"
};

char i[LINES][COLS] = {
" _____ ",
"|_   _|",
"  | |  ",
"  | |  ",
" _| |_ ",
" \\___/ "
};

char j[LINES][COLS] = {
"   ___ ",
"  |_  |",
"    | |",
"    | |",
"/\\__/ /",
"\\____/ "
};

char k[LINES][COLS] = {
" _   __",
"| | / /",
"| |/ / ",
"|    \\ ",
"| |\\  \\",
"\\_| \\_/"
};

char l[LINES][COLS] = {
" _     ",
"| |    ",
"| |    ",
"| |    ",
"| |____",
"\\_____/"
};

char m[LINES][COLS] = {
"___  ___",
"|  \\/  |",
"| .  . |",
"| |\\/| |",
"| |  | |",
"\\_|  |_/"
};

char n[LINES][COLS] = {
" _   _ ",
"| \\ | |",
"|  \\| |",
"| . ` |",
"| |\\  |",
"\\_| \\_/"
};

char o[LINES][COLS] = {
" _____ ",
"|  _  |",
"| | | |",
"| | | |",
"\\ \\_/ /",
" \\___/ "
};

char p[LINES][COLS] = {
"______ ",
"| ___ \\",
"| |_/ /",
"|  __/ ",
"| |    ",
"\\_|    "
};

char q[LINES][COLS] = {
" _____ ",
"|  _  |",
"| | | |",
"| | | |",
"\\ \\/ /",
" \\_/\\_\\"
};

char r[LINES][COLS] = {
"______ ",
"| ___ \\",
"| |_/ /",
"|    / ",
"| |\\ \\ ",
"\\_| \\_|"
};

char s[LINES][COLS] = {
"  _____ ",
" /  ___|",
" \\ `--. ",
"  `--. \\",
" /\\__/ /",
" \\____/ "
};

char t[LINES][COLS] = {
" _____ ",
"|_   _|",
"  | |  ",
"  | |  ",
"  | |  ",
"  \\_/  "
};

char u[LINES][COLS] = {
" _   _ ",
"| | | |",
"| | | |",
"| | | |",
"| |_| |",
" \\___/ "
};

char v[LINES][COLS] = {
" _   _ ",
"| | | |",
"| | | |",
"| | | |",
"\\ \\_/ /",
" \\___/ "
};

char w[LINES][COLS] = {
" _    _ ",
"| |  | |",
"| |  | |",
"| |/\\| |",
"\\  /\\  /",
" \\/  \\/ "
};

char x[LINES][COLS] = {
"__   __",
"\\ \\ / /",
" \\ V / ",
" /   \\ ",
"/ /^\\ \\",
"\\/   \\/"
};

char y[LINES][COLS] = {
"__   __",
"\\ \\ / /",
" \\ V / ",
"  \\ /  ",
"  | |  ",
"  \\_/  "
};

char z[LINES][COLS] = {
" ______",
"|___  /",
"   / / ",
"  / /  ",
" / /___",
"\\_____/"
};

char** comparator(char letter) {
    if(letter == 'a') return a;
    if(letter == 'b') return b;
    if(letter == 'c') return c;
    if(letter == 'd') return d;
    if(letter == 'e') return e;
    if(letter == 'f') return f;
    if(letter == 'g') return g;
    if(letter == 'h') return h;
    if(letter == 'i') return i;
    if(letter == 'j') return j;
    if(letter == 'k') return k;
    if(letter == 'l') return l;
    if(letter == 'm') return m;
    if(letter == 'n') return n;
    if(letter == 'o') return o;
    if(letter == 'p') return p;
    if(letter == 'q') return q;
    if(letter == 'r') return r;
    if(letter == 's') return s;
    if(letter == 't') return t;
    if(letter == 'u') return u;
    if(letter == 'v') return v;
    if(letter == 'w') return w;
    if(letter == 'x') return x;
    if(letter == 'y') return y;
    if(letter == 'z') return z;
}

void printLetter(char letter[LINES][COLS]) {
    for (int i = 0; i < LINES; i++) {
        printf("%s\n", letter[i]);
    }
}

void printVertically(const char* str) {
    char** res;

    for (int i = 0; i < strlen(str); i++) {
        res = comparator(str[i]);
        printLetter(res);
    }
}

int main(int argc, char** argv) {
    if(argc != 2) {
        printf("Incorrect arguments!\n\nUse ASCII_text <string> (in quotes)"); 
        exit(1);
    }

    printVertically(argv[1]);
    return 0;
}

/*

        TODO

    \/ 1) Collect letters
    \/ 2) Parse the sentense
    \/ 3) Print vertically

*/ 