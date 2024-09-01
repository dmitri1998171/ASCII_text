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
"|_____",
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

void takeLetters(char *text, int length, char result[][LINES][COLS]) {
    for (int j = 0; j < LINES; j++) {
        for (int i = 0; i < length; i++) {
            for (int k = 0; k < COLS; k++) {
                if(text[i] == 'a') result[i][j][k] = _a[j][k];
                if(text[i] == 'b') result[i][j][k] = _b[j][k];
                if(text[i] == 'c') result[i][j][k] = _c[j][k];
                if(text[i] == 'd') result[i][j][k] = _d[j][k];
                if(text[i] == 'e') result[i][j][k] = _e[j][k];
                if(text[i] == 'f') result[i][j][k] = _f[j][k];
                if(text[i] == 'g') result[i][j][k] = _g[j][k];
                if(text[i] == 'h') result[i][j][k] = _h[j][k];
                if(text[i] == 'i') result[i][j][k] = _i[j][k];
                if(text[i] == 'j') result[i][j][k] = _j[j][k];
                if(text[i] == 'k') result[i][j][k] = _k[j][k];
                if(text[i] == 'l') result[i][j][k] = _l[j][k];
                if(text[i] == 'm') result[i][j][k] = _m[j][k];
                if(text[i] == 'n') result[i][j][k] = _n[j][k];
                if(text[i] == 'o') result[i][j][k] = _o[j][k];
                if(text[i] == 'p') result[i][j][k] = _p[j][k];
                if(text[i] == 'q') result[i][j][k] = _q[j][k];
                if(text[i] == 'r') result[i][j][k] = _r[j][k];
                if(text[i] == 's') result[i][j][k] = _s[j][k];
                if(text[i] == 't') result[i][j][k] = _t[j][k];
                if(text[i] == 'u') result[i][j][k] = _u[j][k];
                if(text[i] == 'v') result[i][j][k] = _v[j][k];
                if(text[i] == 'w') result[i][j][k] = _w[j][k];
                if(text[i] == 'x') result[i][j][k] = _x[j][k];
                if(text[i] == 'y') result[i][j][k] = _y[j][k];
                if(text[i] == 'z') result[i][j][k] = _z[j][k];
            }
        }
    }
}

void printLetter(char letter[LINES][COLS]) {
    for (int i = 0; i < LINES; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%c", letter[i][j]);
        }
        printf("\n");
    }
}

void printVertically(int length, char result[][LINES][COLS]) {
    for (int i = 0; i < length; i++) {
        printLetter(result[i]);
    }
}

void printHorizontally(int length, char result[][LINES][COLS]) {
    for (int j = 0; j < LINES; j++) {
        for (int i = 0; i < length; i++) {
            for (int k = 0; k < COLS; k++) 
                printf("%c", result[i][j][k]);
        }
        printf("\n");
    }
}

int main(int argc, char** argv) {
    if(argc != 2) {
        printf("Incorrect arguments!\n\nUse ASCII_text <string> (in quotes)"); 
        exit(1);
    }
    
    int length = strlen(argv[1]);
    char result[length][LINES][COLS];

    takeLetters(argv[1], length, result);
    printHorizontally(length, result);
    // printVertically(length, result);

    return 0;
}

/*

        TODO

    \/ 1) Collect letters
    \/ 2) Parse the sentense
    \/ 3) Print vertically
     4) Print horizontally
     5) Connect styles

*/ 