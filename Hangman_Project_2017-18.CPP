#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<process.h>
#include<dos.h>
#include<stdlib.h>
#include<bios.h>
#include<time.h>

struct virtualkeyboard
{
int mx;
int my;
char let[3];
int bkey[2];
}A[26];

struct database
{
char word[10];
}directory[49];

 database regular[49]=
		  {
		  {"DESK"},{"PILE"},{"FATE"},{"LIFE"},{"DEAF"},{"LIMB"},{"WORD"},
		  {"WAND"},{"GAPE"},{"FEEL"},{"CAGE"},{"CAST"},{"FAST"},{"BOWL"},
		  {"FOUL"},{"SEAL"},{"RAGE"},{"TAME"},{"ZEAL"},{"ZEST"},{"VAIN"},
		  {"BAIT"},{"COOL"},{"MEAT"},{"QUIZ"},{"FEAT"},{"DARE"},{"SCAR"},
		  {"WAIT"},{"HATE"},{"MEND"},{"SEND"},{"TEND"},{"FIRE"},{"PEAK"},
		  {"EDIT"},{"MAST"},{"ATOM"},{"BOLT"},{"WORK"},{"TEAM"},{"FAME"},
		  {"MATH"},{"TROD"},{"WARD"},{"CAKE"},{"MEAN"},{"REST"},{"GOAL"}
		  };

 database hardened[49]=
		   {
		   {"SCOLD"},{"PAPER"},{"CHILL"},{"STYLE"},{"KNEEL"},{"BLIND"},{"WEIRD"},
		   {"VAULT"},{"GIANT"},{"FORCE"},{"FAINT"},{"BLAZE"},{"DODGE"},{"CEASE"},
		   {"FALSE"},{"TRUTH"},{"SNEAK"},{"TREAD"},{"VAGUE"},{"WEIRD"},{"LAUGH"},
		   {"BATHE"},{"SHIFT"},{"QUILL"},{"QUILT"},{"MIDST"},{"TEASE"},{"SCARY"},
		   {"CREAK"},{"MAYOR"},{"TREND"},{"SEIGE"},{"AROMA"},{"FEAST"},{"GROSS"},
		   {"RIFLE"},{"CHAMP"},{"MAPLE"},{"POUND"},{"FABLE"},{"YOUTH"},{"GREED"},
		   {"GLOVE"},{"DUSTY"},{"DINGY"},{"CREST"},{"ROUGH"},{"WASTE"},{"STEAL"}
		   };

 database veteran[49]=
		  {
		  {"WAITER"},{"STREAK"},{"DINGHY"},{"LIVELY"},{"ALPINE"},{"PRESTO"},{"PRIEST"},
		  {"MATRIX"},{"BORING"},{"JACKET"},{"BLAZER"},{"TOGGLE"},{"LENGTH"},{"ERASER"},
		  {"BRIDGE"},{"LIZARD"},{"FRIDGE"},{"PEDDLE"},{"PADDLE"},{"TROUGH"},{"FREEZE"},
		  {"BOWLER"},{"SNIPER"},{"SHEATH"},{"BRUISE"},{"GOLDEN"},{"FALCON"},{"CONMAN"},
		  {"JAGUAR"},{"FATHOM"},{"OFFEND"},{"SPIDER"},{"ATTACK"},{"HEALTH"},{"WEALTH"},
		  {"RUFFLE"},{"MATTER"},{"AVENGE"},{"LIQUID"},{"WANDER"},{"SYSTEM"},{"WONDER"},
		  {"MOBILE"},{"FLEECE"},{"WIZARD"},{"CREDIT"},{"SLEEVE"},{"WINNER"},{"HEIGHT"}
		  };

int maxx,maxy,midx,midy,i,j;

void set()
{
setfillstyle(1,15);
setcolor(15);
//pedestal

    for(i=0;i<=100;i++)
    {
    delay(5);
    bar(maxx-100,maxy-10,maxx-100+i,maxy);
    }
    for(i=0;i<=maxy-50;i++)
    {
    delay(5);
    bar(maxx-55,maxy-i,maxx-45,maxy);
    }

    for(i=0;i<=90;i++)
    {
    delay(5);
    bar(maxx-45-i,50,maxx-45,60);
    }

    //pedestal support

    for(i=0;i<=40;i++)
    {
    delay(10);
    line(maxx-45-i,90-i,maxx-45,90);
    for(j=1;j<=10;j++)
    line(maxx-45-i-j,90-i,maxx-45-j,90);
    }
}

void noose()
{
setfillstyle(1,15);
setcolor(15);

    for(i=0;i<=40;i++)
    {
    delay(10);
    line(maxx-134,60,maxx-134,60+i);
    }
}

void head()
{
setfillstyle(1,15);
setcolor(15);
int endangle,radius=25;

   for(endangle=90;endangle<=450;endangle++)
   {
   delay(3);
   arc(maxx-134,125,90, endangle, radius);
      for(i=0;i<=5;i++)
      arc(maxx-134,125,90, endangle, radius-i);
   }
}

void body()
{
setfillstyle(1,15);
setcolor(15);

   for(i=0;i<=100;i++)
   {
   delay(10);
   bar(maxx-136,150,maxx-132,150+i);
   }
}

void legl()
{
setfillstyle(1,15);
setcolor(15);

   for(i=0;i<=30;i++)
   {
   delay(10);
   line(maxx-136,250,maxx-136+i,250+i);
      for(j=1;j<=5;j++)
      line(maxx-136+j,250,maxx-136+i+j,250+i);
   }
}

void legr()
{
setfillstyle(1,15);
setcolor(15);

   for(i=0;i<=30;i++)
   {
   delay(10);
   line(maxx-132,250,maxx-132-i,250+i);
      for(j=1;j<=5;j++)
      line(maxx-132-j,250,maxx-132-i-j,250+i);
   }
}

void handl()
{
setfillstyle(1,15);
setcolor(15);

   for(i=0;i<=30;i++)
   {
   delay(10);
   line(maxx-132,160,maxx-132-i,160+i);
      for(j=1;j<=5;j++)
      line(maxx-132-j,160,maxx-132-i-j,160+i);
   }
}

void handr()
{
setfillstyle(1,15);
setcolor(15);

   for(i=0;i<=30;i++)
   {
   delay(10);
   line(maxx-136,160,maxx-136+i,160+i);
      for(j=1;j<=5;j++)
      line(maxx-136+j,160,maxx-136+i+j,160+i);
   }
}

void sethangman()
{
setfillstyle(1,15);
setcolor(15);

//pedestal
    for(i=0;i<=100;i++)
    bar(maxx-100,maxy-10,maxx-100+i,maxy);

    for(i=0;i<=maxy-50;i++)
    bar(maxx-55,maxy-i,maxx-45,maxy);

    for(i=0;i<=90;i++)
    bar(maxx-45-i,50,maxx-45,60);

//pedestal support

    for(i=0;i<=40;i++)
    {
    line(maxx-45-i,90-i,maxx-45,90);
      for(j=1;j<=10;j++)
      line(maxx-45-i-j,90-i,maxx-45-j,90);
    }

//noose

    for(i=0;i<=40;i++)
    line(maxx-134,60,maxx-134,60+i);

//head

int endangle,radius=25;

   for(endangle=90;endangle<=450;endangle++)
   {
   arc(maxx-134,125,90, endangle, radius);
      for(i=0;i<=5;i++)
      arc(maxx-134,125,90, endangle, radius-i);
   }

//body

   for(i=0;i<=100;i++)
   bar(maxx-136,150,maxx-132,150+i);

//hands and legs

   for(i=0;i<=30;i++)
   {
   line(maxx-136,250,maxx-136+i,250+i);
      for(j=1;j<=5;j++)
      line(maxx-136+j,250,maxx-136+i+j,250+i);
   }

   for(i=0;i<=30;i++)
   {
   line(maxx-132,250,maxx-132-i,250+i);
      for(j=1;j<=5;j++)
      line(maxx-132-j,250,maxx-132-i-j,250+i);
   }

   for(i=0;i<=30;i++)
   {
   line(maxx-132,160,maxx-132-i,160+i);
      for(j=1;j<=5;j++)
      line(maxx-132-j,160,maxx-132-i-j,160+i);
   }

   for(i=0;i<=30;i++)
   {
   line(maxx-136,160,maxx-136+i,160+i);
      for(j=1;j<=5;j++)
      line(maxx-136+j,160,maxx-136+i+j,160+i);
   }
}

void hangman()
{
set();
noose();
head();
body();
handl();
handr();
legr();
legl();
}

void printkeyboard()
{
cleardevice();
int left,top,right,bottom;
setcolor(15);

left = midx-290;
top = midy+90;
right = midx -250;
bottom =midy+130;

   for(i=0;i<10;i++)
   rectangle(left+(i*40),top,right+(i*40),bottom); //first row

   for(i=0;i<9;i++)
   rectangle(left+20+(i*40),top+40,right+20+(i*40),bottom+40);//2nd row

   for(i=0;i<7;i++)
   rectangle(left+40+(i*40),top+80,right+40+(i*40),bottom+80); //3rd row
}

void storekey()
{
int k=0;

A[k].bkey[0]=4209;A[k].bkey[1]=4177;k++;
A[k].bkey[0]=4471;A[k].bkey[1]=4439;k++;
A[k].bkey[0]=4709;A[k].bkey[1]=4677;k++;
A[k].bkey[0]=4978;A[k].bkey[1]=4946;k++;
A[k].bkey[0]=5236;A[k].bkey[1]=5204;k++;
A[k].bkey[0]=5497;A[k].bkey[1]=5465;k++;
A[k].bkey[0]=5749;A[k].bkey[1]=5717;k++;
A[k].bkey[0]=5993;A[k].bkey[1]=5961;k++;
A[k].bkey[0]=6255;A[k].bkey[1]=6223;k++;
A[k].bkey[0]=6512;A[k].bkey[1]=6480;k++;
A[k].bkey[0]=7777;A[k].bkey[1]=7745;k++;
A[k].bkey[0]=8051;A[k].bkey[1]=8019;k++;
A[k].bkey[0]=8292;A[k].bkey[1]=8260;k++;
A[k].bkey[0]=8550;A[k].bkey[1]=8518;k++;
A[k].bkey[0]=8807;A[k].bkey[1]=8775;k++;
A[k].bkey[0]=9064;A[k].bkey[1]=9032;k++;
A[k].bkey[0]=9322;A[k].bkey[1]=9290;k++;
A[k].bkey[0]=9579;A[k].bkey[1]=9547;k++;
A[k].bkey[0]=9836;A[k].bkey[1]=9804;k++;
A[k].bkey[0]=11386;A[k].bkey[1]=11354;k++;
A[k].bkey[0]=11640;A[k].bkey[1]=11608;k++;
A[k].bkey[0]=11875;A[k].bkey[1]=11843;k++;
A[k].bkey[0]=12150;A[k].bkey[1]=12118;k++;
A[k].bkey[0]=12386;A[k].bkey[1]=12354;k++;
A[k].bkey[0]=12654;A[k].bkey[1]=12622;k++;
A[k].bkey[0]=12909;A[k].bkey[1]=12877;
}

void storestruct()
{
settextstyle(2,HORIZ_DIR,14);
settextjustify(CENTER_TEXT,CENTER_TEXT);
int a,b,k=0;

a=midx-267;
b=midy+105;

//1st row

outtextxy(a,b,"Q");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"Q");
a+=40;k++;
outtextxy(a,b,"W");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"W");
a+=40;k++;
outtextxy(a,b,"E");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"E");
a+=40;k++;
outtextxy(a,b,"R");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"R");
a+=40;k++;
outtextxy(a,b,"T");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"T");
a+=40;k++;
outtextxy(a,b,"Y");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"Y");
a+=40;k++;
outtextxy(a,b,"U");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"U");
a+=40;k++;
outtextxy(a,b,"I");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"I");
a+=40;k++;
outtextxy(a,b,"O");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"O");
a+=40;k++;
outtextxy(a,b,"P");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"P");
k++;

a=midx-247;
b=midy+145;

//2nd row

outtextxy(a,b,"A");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"A");
a+=40;k++;
outtextxy(a,b,"S");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"S");
a+=40;k++;
outtextxy(a,b,"D");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"D");
a+=40;k++;
outtextxy(a,b,"F");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"F");
a+=40;k++;
outtextxy(a,b,"G");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"G");
a+=40;k++;
outtextxy(a,b,"H");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"H");
a+=40;k++;
outtextxy(a,b,"J");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"J");
a+=40;k++;
outtextxy(a,b,"K");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"K");
a+=40;k++;
outtextxy(a,b,"L");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"L");
k++;

a=midx-227;
b=midy+185;

//3rd row

outtextxy(a,b,"Z");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"Z");
a+=40;k++;
outtextxy(a,b,"X");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"X");
a+=40;k++;
outtextxy(a,b,"C");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"C");
a+=40;k++;
outtextxy(a,b,"V");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"V");
a+=40;k++;
outtextxy(a,b,"B");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"B");
a+=40;k++;
outtextxy(a,b,"N");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"N");
a+=40;k++;
outtextxy(a,b,"M");
A[k].mx=a;A[k].my=b;strcpy(A[k].let,"M");
}

void credits()
{
cleardevice();
int radius;

settextstyle(9,HORIZ_DIR,5);
settextjustify(CENTER_TEXT,CENTER_TEXT);
setcolor(15);

   for(i=0;i<=4;i++)
   outtextxy(midx-2+i,50,"Credits") ;

settextstyle(6,HORIZ_DIR,3);
outtextxy(midx,120,"A very sincere and heartfelt thank you to");
settextstyle(2,HORIZ_DIR,18);
outtextxy(midx,150,"SMRITI MAAM");
settextstyle(6,HORIZ_DIR,3);
outtextxy(midx,210,"EFFORTS BY:");

settextstyle(9,HORIZ_DIR,3);
setcolor(15);

   for(i=0;i<=4;i++)
   outtextxy(midx,250,"Pratham Shah") ;
   for(i=0;i<=4;i++)
   outtextxy(midx,290,"Hardik Shah") ;

settextstyle(0,HORIZ_DIR,6);
outtextxy(midx+2,400,"HP");
settextstyle(6,HORIZ_DIR,1);
outtextxy(midx,424,"PRODUCTIONS");

   for(radius=65;radius<=70;radius++)
   circle(midx,407,radius);

settextstyle(6,HORIZ_DIR,1);
settextjustify(LEFT_TEXT,CENTER_TEXT);
outtextxy(2,maxy-20,"(Press any key to exit)");
getch();
exit(0);
}

void restart()
{
cleardevice();

void difficulty();
void mainmenu();

int n=0,position=-1,key=0;
char opt[][20]={"PLAY AGAIN","MAIN MENU","EXIT"};

setfillstyle(1,0);
settextjustify(CENTER_TEXT,CENTER_TEXT);

settextstyle(0,0,5);
setcolor(0);
setfillstyle(1,15);
bar(midx-200,midy+(50*position)-30,midx+200,midy+20+(50*position));
outtextxy(midx,midy+(50*position),opt[position+1]);

settextstyle(0,0,3);
setcolor(15);
outtextxy(midx,midy,"MAIN MENU");
outtextxy(midx,midy+50,"EXIT");

settextstyle(6,HORIZ_DIR,1);
settextjustify(LEFT_TEXT,CENTER_TEXT);
outtextxy(2,maxy-20,"(Use arrow keys to choose.Press ENTER key to continue)");

settextjustify(CENTER_TEXT,CENTER_TEXT);
   while(n==0)
   {
     while (bioskey(1) == 0);
     key = bioskey(0);

     if(key==18432 && position>=-1)
     {
     settextstyle(0,0,3);
     setcolor(15);
     setfillstyle(1,0);
     bar(midx-200,midy+(50*position)-30,midx+200,midy+20+(50*position));
      outtextxy(midx,midy+(50*position),opt[position+1]);
	if(position==-1)
	position=1;
	else
	position--;
     settextstyle(0,0,5);
     setcolor(0);
     setfillstyle(1,15);
     bar(midx-200,midy+(50*position)-30,midx+200,midy+20+(50*position));
     outtextxy(midx,midy+(50*position),opt[position+1]);
     }

     else if(key==20480 && position<=1)
     {
     settextstyle(0,0,3);
     setcolor(15);
     setfillstyle(1,0);
     bar(midx-200,midy+(50*position)-30,midx+200,midy+20+(50*position));
     outtextxy(midx,midy+(50*position),opt[position+1]);
	if(position==1)
	position=-1;
	else
	position++;
     settextstyle(0,0,5);
     setcolor(0);
     setfillstyle(1,15);
     bar(midx-200,midy+(50*position)-30,midx+200,midy+20+(50*position));
     outtextxy(midx,midy+(50*position),opt[position+1]);
     }

     else if(key==7181)
     break;
   }

   if(position==-1)
   difficulty();
   else if(position==0)
   mainmenu();
   else if(position==1)
   credits();

}

void winner()
{
cleardevice();
settextstyle(9,HORIZ_DIR,5);
settextjustify(CENTER_TEXT,CENTER_TEXT);
setcolor(15);

   for(i=0;i<=4;i++)
   outtextxy(midx-2+i,midy-50,"CONGRATULATIONS") ;

settextstyle(6,HORIZ_DIR,10);

   for(i=0;i<=6;i++)
   outtextxy(midx-3+i,midy+20,"YOU WON");

settextstyle(6,HORIZ_DIR,1);
settextjustify(LEFT_TEXT,CENTER_TEXT);
outtextxy(2,maxy-20,"(Press any key to continue)");
getch();
restart();
}

void loser(int rnd)
{
cleardevice();
settextstyle(9,HORIZ_DIR,7);
settextjustify(CENTER_TEXT,CENTER_TEXT);
setcolor(15);

   for(i=0;i<=6;i++)
   outtextxy(midx-3+i,midy-50,"SORRY" );

settextstyle(6,HORIZ_DIR,5);

   for(i=0;i<=4;i++)
   outtextxy(midx-2+i,midy+25,"YOU LOST");

settextstyle(6,HORIZ_DIR,2);
outtextxy(midx-25,midy+60,"The correct word was ");
settextjustify(LEFT_TEXT,CENTER_TEXT);
outtextxy(midx+70,midy+60,directory[rnd].word);

settextstyle(6,HORIZ_DIR,1);
settextjustify(LEFT_TEXT,CENTER_TEXT);
outtextxy(2,maxy-20,"(Press any key to continue)");
getch();
restart();
}

void game()
{
int flag,win=0,lose=0,lim, dx1,dx2,rnd;
int entkey,vowel=0,def,x,bac,count,valid;
char attempt[40];

randomize();
rnd=random(50);
lim=strlen(directory[rnd].word);
dx1=midx-290;
dx2=midx-237;

     for(i=1;i<=lim;i++)
     {
	for(j=0;j<=5;j++)
	line(dx1,midy+j,dx2,midy+j);

     dx1=dx1+73;
     dx2=dx2+73;
     }

dx1=midx-290;
dx2=midx-237;

attempt[0]='A';
attempt[1]='E';
attempt[2]='I';
attempt[3]='O';
attempt[4]='U';
count=5;

  for(i=0;i<lim;i++)
  {
     for(j=0;j<26;j++)
     {
	if(A[j].let[0]=='A'|| A[j].let[0]=='E'|| A[j].let[0]=='I'|| A[j].let[0]=='O'|| A[j].let[0]=='U')
	{
	setfillstyle(1,WHITE);
	floodfill(A[j].mx,A[j].my,WHITE);
	floodfill(A[j].mx+15,A[j].my,WHITE);
	floodfill(A[j].mx,A[j].my+15,WHITE);
	setcolor(0);
	settextstyle(2,HORIZ_DIR,14);
	settextjustify(CENTER_TEXT,CENTER_TEXT);
	outtextxy(A[j].mx,A[j].my,A[j].let);

	  if(directory[rnd].word[i]==A[j].let[0])
	  {
	  vowel++;
	  setcolor(WHITE);
	  settextstyle(1,HORIZ_DIR,6);
	  settextjustify(CENTER_TEXT,LEFT_TEXT);

	    for(bac=0;bac<=3;bac++)
	    outtextxy(dx1+25+bac+(73*i),midy-10,A[j].let);
	  }
	}
     }
  }

win=vowel;

while(lose!=7 && win!=lim)
{

  while (bioskey(1) == 0);
  entkey = bioskey(0);

  flag=0;
  def=0;
  valid=0;

  for(j=0;j<26;j++)
  {
    if(A[j].bkey[0]==entkey || A[j].bkey[1]==entkey)
    {
    valid++;
      for( x=0;x<count;x++)
      {
	if(attempt[x]==A[j].let[0])
	def++;
      }

      if(def==0)
      {
	for(i=0;i<lim;i++)
	{
	  if(A[j].let[0]==directory[rnd].word[i])
	  {
	  win++;
	  flag++;

	  setcolor(WHITE);
	  settextstyle(1,HORIZ_DIR,6);
	  settextjustify(CENTER_TEXT,LEFT_TEXT);

	    for(bac=0;bac<=3;bac++)
	    outtextxy(dx1+25+bac+(73*i),midy-10,A[j].let);

	  setfillstyle(1,WHITE);
	  floodfill(A[j].mx,A[j].my,WHITE);
	  floodfill(A[j].mx+15,A[j].my,WHITE);
	  floodfill(A[j].mx,A[j].my+15,WHITE);
	  setcolor(0);
	  settextstyle(2,HORIZ_DIR,14);
	  settextjustify(CENTER_TEXT,CENTER_TEXT);
	  outtextxy(A[j].mx,A[j].my,A[j].let);

	  }
	}
	attempt[count]=A[j].let[0];
	count++;
      }

      else
      {
      settextstyle(6,HORIZ_DIR,2);
      settextjustify(LEFT_TEXT,CENTER_TEXT);
      outtextxy(10,30," You have already entered this letter or it is a vowel. Please try again.");
      delay(3200);
      setfillstyle(1,BLACK);
      bar(0,0,maxx,50);
      }
    }
  }
  if(valid==0)
  {
  settextstyle(6,HORIZ_DIR,3);
  settextjustify(LEFT_TEXT,CENTER_TEXT);
  outtextxy(10,30,"INVALID KEY.Please try again.");
  delay(3200);
  setfillstyle(1,BLACK);
  bar(0,0,maxx,50);
  }

  else if(flag==0 && def==0)
  {
    for(j=0;j<26;j++)
    {
      if(entkey==A[j].bkey[0] || A[j].bkey[1]==entkey)
      {
      attempt[count]=A[j].let[0]; count++;
      setfillstyle(1,WHITE);
      floodfill(A[j].mx,A[j].my,WHITE);
      floodfill(A[j].mx+15,A[j].my,WHITE);
      floodfill(A[j].mx,A[j].my+15,WHITE);
      setcolor(0);
      settextstyle(2,HORIZ_DIR,14);
      settextjustify(CENTER_TEXT,CENTER_TEXT);
      outtextxy(A[j].mx,A[j].my,A[j].let);
      }
    }

    lose++;
    if(lose==1)
    noose();
    else if(lose==2)
    head();
    else if(lose==3)
    body();
    else if(lose==4)
    handl();
    else if(lose==5)
    handr();
    else if(lose==6)
    legr();
    else if(lose==7)
    {
    legl();
    delay(1900);
    loser(rnd);
    }
  }

  else if(win==lim)
  {
  delay(1900);
  winner();
  }
}
}

void play()
{
printkeyboard();
storestruct();
storekey();
set();
game();
}

void difficulty()
{
cleardevice();
settextstyle(9,HORIZ_DIR,5);
settextjustify(CENTER_TEXT,CENTER_TEXT);
setcolor(15);

   for(i=0;i<=4;i++)
   outtextxy(midx-2+i,50,"Choose Difficulty") ;

int n=0,position=-1,key=0;
char opt[][20]={"REGULAR","HARDENED","VETERAN"};

setfillstyle(1,0);
settextjustify(CENTER_TEXT,CENTER_TEXT);

settextstyle(0,0,5);
setfillstyle(1,15);
setcolor(0);
bar(midx-200,midy+(50*position)-30,midx+200,midy+20+(50*position));
outtextxy(midx,midy+(50*position),opt[position+1]);

settextstyle(0,0,3);
setcolor(15);
outtextxy(midx,midy,"HARDENED");
outtextxy(midx,midy+50,"VETERAN");

settextstyle(6,HORIZ_DIR,1);
settextjustify(LEFT_TEXT,CENTER_TEXT);
outtextxy(2,maxy-20,"(Use arrow keys to choose.Press ENTER key to continue)");

settextjustify(CENTER_TEXT,CENTER_TEXT);
   while(n==0)
   {
     while (bioskey(1) == 0);
     key = bioskey(0);

     if(key==18432 && position>=-1)
     {
     settextstyle(0,0,3);
     setfillstyle(1,0);
     setcolor(15);
     bar(midx-200,midy+(50*position)-30,midx+200,midy+20+(50*position));
      outtextxy(midx,midy+(50*position),opt[position+1]);
	if(position==-1)
	position=1;
	else
	position--;
     settextstyle(0,0,5);
     setfillstyle(1,15);
     setcolor(0);
     bar(midx-200,midy+(50*position)-30,midx+200,midy+20+(50*position));
     outtextxy(midx,midy+(50*position),opt[position+1]);
     }

     else if(key==20480 && position<=1)
     {
     settextstyle(0,0,3);
     setfillstyle(1,0);
     setcolor(15);
     bar(midx-200,midy+(50*position)-30,midx+200,midy+20+(50*position));
     outtextxy(midx,midy+(50*position),opt[position+1]);
	if(position==1)
	position=-1;
	else
	position++;
     settextstyle(0,0,5);
     setfillstyle(1,15);
     setcolor(0);
     bar(midx-200,midy+(50*position)-30,midx+200,midy+20+(50*position));
     outtextxy(midx,midy+(50*position),opt[position+1]);
     }

     else if(key==7181)
     break;
   }

   if(position==-1)
   {
      for(i=0;i<49;i++)
      directory[i]=regular[i];
   }
   else if(position==0)
   {
      for(i=0;i<49;i++)
      directory[i]=hardened[i];
   }
   else if(position==1)
   {
      for(i=0;i<49;i++)
      directory[i]=veteran[i];
   }
delay(100);
play();
}

void instructions()
{
cleardevice();
void mainmenu();
int h;

settextstyle(9,HORIZ_DIR,5);
settextjustify(CENTER_TEXT,CENTER_TEXT);
setcolor(15);

   for(i=0;i<=4;i++)
   outtextxy(midx-2+i,50,"Instructions") ;

settextjustify(LEFT_TEXT,CENTER_TEXT);
settextstyle(6,HORIZ_DIR,2);

h=135;
outtextxy(2,h,"The aim of the game is simple.");h+=20;
outtextxy(2,h,"You have to guess the word the computer has thought of.");h+=20;
outtextxy(2,h,"Increasing the difficulty will increase the length of the word.");h+=40;
outtextxy(2,h,"REGULAR: 4 letter word (for amateurs)");h+=20;
outtextxy(2,h,"HARDENED: 5 letter word (Your skills will be put to test)");h+=20;
outtextxy(2,h,"VETERAN: 6 letter word (The Hangman will DIE.)");h+=40;
outtextxy(2,h,"For your covenience, a virtual keyboard would be provided.");h+=20;
outtextxy(2,h,"Vowels of the word will already be provided.");h+=20;
outtextxy(2,h,"For every wrong guess the hangman will get ready");h+=20;
outtextxy(2,h,"piece by piece to hang himself to death.");h+=20;
outtextxy(2,h,"Make 7 wrong guesses and the hangman will hang himself to death.");h+=40;
outtextxy(2,h,"Will you be able to save him?");h+=20;

settextstyle(6,HORIZ_DIR,1);
settextjustify(LEFT_TEXT,CENTER_TEXT);
outtextxy(2,maxy-20,"(Press any key to continue)");
getch();
mainmenu();

}

void loadscreen()
{
cleardevice();
int endangle,radius=110,t=0,x;
setcolor(15);
settextjustify(CENTER_TEXT,CENTER_TEXT);
char h[][40]={"defining variables","loading header files...",
	    "#include<iostream.h>","#include<conio.h>","#include<string.h>",
	    "#include<stdio.h>","#include<math.h>","#include<graphics.h>",
	    "#include<process.h>","#include<dos.h>","#include<stdlib.h>",
	    "creating functions","loading hangman","defining database","extracting directory",
	    "printing virtual keyboard","loading homescreen"};

settextstyle(6,HORIZ_DIR,6);
for(i=0;i<=4;i++)
outtextxy(midx-2+i,midy+170,"...LOADING...");

settextstyle(0,HORIZ_DIR,4);
outtextxy(midx,50,"A VENTURE BY");

settextstyle(0,HORIZ_DIR,8);
outtextxy(midx,midy-30,"HP");
settextstyle(6,HORIZ_DIR,3);
outtextxy(midx,midy+10,"PRODUCTIONS");

   for(endangle=90;endangle<=450;endangle++)
   {
   delay(10);
   setcolor(15);
   arc(midx, midy-30,90, endangle, radius);

	for(i=0;i<=10;i++)
	arc(midx, midy-30,90, endangle, radius-i);

   x=endangle%20;

	if(x==0)
	{
	setfillstyle(1,0);
	bar(midx-150,midy+100,midx+150,midy+140);
	setcolor(15);
	settextstyle(6,HORIZ_DIR,3);
	outtextxy(midx,midy+120,h[t]);
	t++;x++;
	}
   }

settextstyle(6,HORIZ_DIR,5);
for(i=0;i<=4;i++)
outtextxy(midx-2+i,midy+120,"READY!");
delay(800);
}

void homescreen()
{
cleardevice();

hangman();
int key,xco;

setcolor(WHITE);
settextstyle(0,HORIZ_DIR,8);
settextjustify(1,1);

   line(10,0,10,50);
   outtextxy(40,70,"H");
   delay(500);

   line(80,0,80,100);
   outtextxy(88,120,"A");
   delay(500);

   line(140,0,140,45);
   outtextxy(140,60,"N");
   delay(500);

   line(210,0,210,60);
   outtextxy(210,85,"G");
   delay(500);

   line(280,0,280,70);
   outtextxy(278,90,"M");
   delay(500);

   line(346,0,346,20);
   outtextxy(336,43,"A");
   delay(500);

   line(400,0,400,80);
   outtextxy(400,90,"N");
   delay(500);

int n=0,position=0;
char opt[][20]={"PLAY GAME","INSTRUCTIONS","EXIT"};

setfillstyle(1,0);
settextjustify(CENTER_TEXT,CENTER_TEXT);

xco=midx-100;
   settextstyle(0,0,3);
   setcolor(0);
   setfillstyle(1,15);
   bar(xco-150,midy+(35*position)-18,xco+150,midy+15+(35*position));
   outtextxy(xco,midy+(35*position),opt[position]);

   settextstyle(0,HORIZ_DIR,2);
   setcolor(15);
   outtextxy(xco,midy+35,"INSTRUCTIONS");
   outtextxy(xco,midy+70,"EXIT");

settextstyle(6,HORIZ_DIR,1);
settextjustify(LEFT_TEXT,CENTER_TEXT);
outtextxy(2,maxy-20,"(Use arrow keys to choose.Press ENTER key to continue)");

settextjustify(CENTER_TEXT,CENTER_TEXT);
   while(n==0)
   {
     while (bioskey(1) == 0);
     key = bioskey(0);

     if(key==18432 && position>=0)
     {
     settextstyle(0,0,2);
     setcolor(15);
     setfillstyle(1,0);
     bar(xco-150,midy+(35*position)-18,xco+150,midy+15+(35*position));
      outtextxy(xco,midy+(35*position),opt[position]);
	if(position==0)
	position=2;
	else
	position--;
     settextstyle(0,0,3);
     setcolor(0);
     setfillstyle(1,15);
     bar(xco-150,midy+(35*position)-18,xco+150,midy+15+(35*position));
     outtextxy(xco,midy+(35*position),opt[position]);
     }

     else if(key==20480 && position<=2)
     {
     settextstyle(0,0,2);
     setcolor(15);
     setfillstyle(1,0);
     bar(xco-150,midy+(35*position)-18,xco+150,midy+15+(35*position));
     outtextxy(xco,midy+(35*position),opt[position]);
	if(position==2)
	position=0;
	else
	position++;
     settextstyle(0,0,3);
     setcolor(0);
     setfillstyle(1,15);
     bar(xco-150,midy+(35*position)-18,xco+150,midy+15+(35*position));
     outtextxy(xco,midy+(35*position),opt[position]);
     }

     else if(key==7181)
     break;
   }

  if(position==0)
  difficulty();
  else if(position==1)
  instructions();
  else if(position==2)
  credits();

}

void mainmenu()
{
cleardevice();

int key,xco;

setcolor(WHITE);
settextstyle(0,HORIZ_DIR,8);
settextjustify(1,1);

   line(10,0,10,50);
   outtextxy(40,70,"H");

   line(80,0,80,100);
   outtextxy(88,120,"A");

   line(140,0,140,45);
   outtextxy(140,60,"N");

   line(210,0,210,60);
   outtextxy(210,85,"G");

   line(280,0,280,70);
   outtextxy(278,90,"M");

   line(346,0,346,20);
   outtextxy(336,43,"A");

   line(400,0,400,80);
   outtextxy(400,90,"N");

int n=0,position=0;
char opt[][20]={"PLAY GAME","INSTRUCTIONS","EXIT"};

setfillstyle(1,0);
settextjustify(CENTER_TEXT,CENTER_TEXT);

xco=midx-100;
   settextstyle(0,0,3);
   setcolor(0);
   setfillstyle(1,15);
   bar(xco-150,midy+(35*position)-18,xco+150,midy+15+(35*position));
   outtextxy(xco,midy+(35*position),opt[position]);

   settextstyle(0,HORIZ_DIR,2);
   setcolor(15);
   outtextxy(xco,midy+35,"INSTRUCTIONS");
   outtextxy(xco,midy+70,"EXIT");

settextstyle(6,HORIZ_DIR,1);
settextjustify(LEFT_TEXT,CENTER_TEXT);
outtextxy(2,maxy-20,"(Use arrow keys to choose.Press ENTER key to continue)");
sethangman();

settextjustify(CENTER_TEXT,CENTER_TEXT);
   while(n==0)
   {
     while (bioskey(1) == 0);
     key = bioskey(0);

     if(key==18432 && position>=0)
     {
     settextstyle(0,0,2);
     setcolor(15);
     setfillstyle(1,0);
     bar(xco-150,midy+(35*position)-18,xco+150,midy+15+(35*position));
      outtextxy(xco,midy+(35*position),opt[position]);
	if(position==0)
	position=2;
	else
	position--;
     settextstyle(0,0,3);
     setcolor(0);
     setfillstyle(1,15);
     bar(xco-150,midy+(35*position)-18,xco+150,midy+15+(35*position));
     outtextxy(xco,midy+(35*position),opt[position]);
     }

     else if(key==20480 && position<=2)
     {
     settextstyle(0,0,2);
     setcolor(15);
     setfillstyle(1,0);
     bar(xco-150,midy+(35*position)-18,xco+150,midy+15+(35*position));
     outtextxy(xco,midy+(35*position),opt[position]);
	if(position==2)
	position=0;
	else
	position++;
     settextstyle(0,0,3);
     setcolor(0);
     setfillstyle(1,15);
     bar(xco-150,midy+(35*position)-18,xco+150,midy+15+(35*position));
     outtextxy(xco,midy+(35*position),opt[position]);
     }

     else if(key==7181)
     break;
   }

  if(position==0)
  difficulty();
  else if(position==1)
  instructions();
  else if(position==2)
  credits();

}

void main()
{
/* request auto detection */
int gdriver = DETECT, gmode, errorcode;

/* initialize graphics and local variables */
initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");

/* read result of initialization */
errorcode = graphresult();
if (errorcode != grOk)  /* an error occurred */
{
   printf("Graphics error: %s\n", grapherrormsg(errorcode));
   printf("Press any key to halt:");
   getch();
   exit(1); /* terminate with an error code */
}

maxx=getmaxx();
maxy=getmaxy();
midx=maxx/2;
midy=maxy/2;

loadscreen();
homescreen();

closegraph();
}

