#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define LT

void main(void) {
int col=40, lin=12, ras=0, bor=0, cor=7;
menu();
while( 1 ) {
gotoxy(col,lin);
if( bor ) exibe(32,0);
else if( ras ) exibe(219,cor);
switch( tecla() ) {
case LT: if( col > 1 ) col--; break;
case RT: if( col < 80 ) col++; break;
case UP: if( lin > 1 ) lin--; break;
case DN: if( lin < 24 ) lin++; break;
case F2: ...
case F3: ...
case F4: ...
case F5: exit(1);
}
}
