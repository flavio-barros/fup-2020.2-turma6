#pragma once

#include <stdio.h>

void setup_key();
char getkey();

#ifdef __unix__  
#include <unistd.h> //setup_key
#include <termios.h>//setup_key
    void setup_key(){
        struct termios old_tio, new_tio;


        /* get the terminal settings for stdin */
        tcgetattr(STDIN_FILENO,&old_tio);

        /* we want to keep the old setting to restore them a the end */
        new_tio=old_tio;

        /* disable canonical mode (buffered i/o) and local echo */
        new_tio.c_lflag &=(~ICANON & ~ECHO);

        /* set the new settings immediately */
        tcsetattr(STDIN_FILENO,TCSANOW,&new_tio);
    }

    char getkey(){
        return getchar();
    }

#else
#include <windows.h>

void setup_key(){}
int _getch(void)
{
  HANDLE hConsole;
  DWORD cm, n;
  char buffer[4];   // Para ter certeza que um caracter
                    // UNICODE cabe aqui, alocamos 4 bytes.
 
  hConsole = GetStdHandle(STD_INPUT_HANDLE);
  GetConsoleMode(hConsole, &cm);
  SetConsoleMode(hConsole, cm &
             ~(ENABLE_LINE_INPUT | ENABLE_ECHO_INPUT));
  ReadConsole(hConsole, buffer, 1, &n, NULL);
  SetConsoleMode(hConsole, cm);
 
  // Só preciso de 1 char...
  return buffer[0];
}

    char getkey(){
        return _getch();
    }
#endif