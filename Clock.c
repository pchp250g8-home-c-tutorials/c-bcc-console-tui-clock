#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <conio.h>
#include <time.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
    clrscr();
    _setcursortype(0);
    do
    {
        time_t now = time(NULL);
    	char szline[10];
        char* sztime = asctime(localtime(&now));
    	strncpy(szline,sztime+10,9);
        gotoxy(1,1);
    	cprintf("Time:%s",szline);
        sleep(1);
    }while(!kbhit());
}
