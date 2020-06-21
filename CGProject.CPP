#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
class scenery
{
public:
void clouds()
{
setcolor(WHITE);
ellipse(200,30,60,240,10,15);
ellipse(225,20,345,165,20,15);
ellipse(262,27,340,160,20,15);
ellipse(268,42,230,50,20,10);
ellipse(226,46,163,340,31,15);
ellipse(300,21,20,182,21,19);
ellipse(325,31,290,100,21,15);
ellipse(299,45,228,20,33,11);
//===================LEFT CLOUD
ellipse(40,30,60,240,10,15);
ellipse(65,20,345,165,20,15);
ellipse(105,27,340,160,20,15);
ellipse(109,42,230,50,20,10);
ellipse(66,46,163,340,31,17);
//==================RIGHT CLOUD
ellipse(450,30,60,240,10,15);
ellipse(475,20,345,165,20,15);
ellipse(512,27,340,160,20,15);
ellipse(518,42,230,50,20,10);
ellipse(476,46,163,340,31,15);
}
void sun(int x,int y)
{
setcolor(YELLOW);
circle(x,y,15);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(x,y,YELLOW);
}
void hills()
{
//====================MOUNTAIM
//1st triangle
setcolor(WHITE);
setfillstyle(SOLID_FILL,GREEN);
line(0,150,100,75);
line(100,75,200,150);
//2nd triangle
setcolor(WHITE);
setfillstyle(SOLID_FILL,GREEN);
line(175,131,275,75);
line(275,75,375,150);
//3rd triangle
setcolor(WHITE);
setfillstyle(SOLID_FILL,GREEN);
line(350,131,450,75);
line(450,75,550,150);
//4th triangle
setcolor(WHITE);
setfillstyle(SOLID_FILL,GREEN);
line(525,131,600,75);
line(600,75,750,180);
line(0,150,750,150);//bottom line of mountain
floodfill(100,136,WHITE);//ANY 2 COORDINATES OF 1ST TRIANGKE
floodfill(275,136,WHITE); //2ND TRIANGLE
floodfill(450,136,WHITE);  //3RD TRIANGLE
floodfill(600,136,WHITE);   //4TH TRIANGLE
}
void hut(int x , int y)
{
setcolor(6);
setfillstyle(INTERLEAVE_FILL,17);
int huttriangle[]={x,y,x+25,y-25,x+50,y,x,y};
fillpoly(4,huttriangle);
setfillstyle(INTERLEAVE_FILL,12);
int hutrectleft[]={x,y,x,y+75,x+50,y+75,x+50,y,x,y};
fillpoly(5,hutrectleft);
setfillstyle(LINE_FILL,BROWN);
int hutdoor[]={x+10,y+75,x+10,y+25,x+40,y+25,x+40,y+75,x+10,y+75};
fillpoly(5,hutdoor);
setfillstyle(INTERLEAVE_FILL,12);
int hutrectright[]={x+50,y,x+50,y+75,x+150,y+75,x+150,y,x+50,y};
fillpoly(5,hutrectright);
setfillstyle(LTBKSLASH_FILL,RED);
int huttrapz[]={x+25,y-25,x+50,y,x+150,y,x+130,y-25,x+25,y-25};
fillpoly(5,huttrapz);
}
void tree(int x , int y)
{
setcolor(BROWN);
setfillstyle(SOLID_FILL,BROWN);
int treebase[]={x,y-15,x,y,x+6,y,x+6,y-15,x,y-15};
fillpoly(5,treebase);
setcolor(GREEN);
setfillstyle(SOLID_FILL,GREEN);
int treebody[]={x-10,y-15,x-2,y-30,x-12,y-30,x-4,y-45,x-14,y-45,x+3,y-65,x+20,y-45,x+10,y-45,x+18,y-30,x+8,y-30,x+16,y-15,x-5,y-15};
fillpoly(12,treebody);
}
};
void entrytxt()
{
setbkcolor(YELLOW);
setcolor(MAGENTA);
for(int i = 10;i<=150;i+=10)
{
cleardevice();
settextstyle(TRIPLEX_SCR_FONT,HORIZ_DIR,7);
outtextxy(130,i,"COMPUTER");
delay(300);
}
for(int j = 410;j>=230;j-=10)
{
cleardevice();
settextstyle(TRIPLEX_SCR_FONT,HORIZ_DIR,7);
outtextxy(130,150,"COMPUTER");
outtextxy(130,j,"GRAPHICS");
delay(300);
}
}
void stickman(int x,int y,int r)
{
circle(x,y,r);
line(x,y+r,x,y+r+30);
line(x,y+r+30,x-5,y+r+40);
line(x,y+r+30,x+5,y+r+40);
line(x,y+r+10,x+r+10,y+r+15);
line(x,y+r+10,x+r+10,y+r+18);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
outtextxy(x+r+20,y+15,"WELCOME TO OUR DOCUMENTARY MOVIE");
delay(200);
cleardevice();
circle(x,y,r);
line(x,y+r,x,y+r+40);
line(x,y+r+10,x+r+10,y+r+15);
line(x,y+r+10,x+r+10,y+r+18);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
outtextxy(x+r+20,y+15,"WELCOME TO OUR DOCUMENTARY MOVIE");
}
void title (int y)
{
for(int i = 10;i<=250;i+=10)
{
cleardevice();
settextstyle(TRIPLEX_SCR_FONT,HORIZ_DIR,6);
outtextxy(i,y,"LUCK ?");
delay(200);
}
for(int j = 550;j>=100;j-=10)
{
cleardevice();
settextstyle(TRIPLEX_SCR_FONT,HORIZ_DIR,6);
outtextxy(250,y,"LUCK ?");
settextstyle(TRIPLEX_SCR_FONT,HORIZ_DIR,4);
outtextxy(j,y+80,"TALENT PLUS OPPORTUNITY");
delay(200);
}
}
void moral()
{
setcolor(13);
rectangle(1,1,639,479);
rectangle(15,15,624,464);
setfillstyle(6,11);
floodfill(2,2,13);
settextstyle(4,0,5);
setcolor(9);
outtextxy(200,40,"SUMMARY");
settextstyle(7,0,2);
setcolor(12);
outtextxy(60,140,"The boy, Sanju had no money yet was");
outtextxy(60,170,"filled with immense talent. Presented");
outtextxy(60,200,"with the right opportunity at the right");
outtextxy(60,230,"time, he made his family and his professors");
outtextxy(60,260,"proud. He used to believe he had no luck yet");
outtextxy(60,290,"the combination of talent and opportunity");
outtextxy(60,320,"made him able to turn himself to a very");
outtextxy(40,350,"lucky boy. Thus luck equals talent plus opportunity.");
}
void exittext(int y)
{
setbkcolor(6);
setcolor(WHITE);
for(int i = 0;i<=170;i+=10)
{
cleardevice();
settextstyle(TRIPLEX_SCR_FONT,HORIZ_DIR,6);
outtextxy(i,y,"THE");
delay(300);
}
for(int j = 640;j>=320;j-=10)
{
cleardevice();
settextstyle(TRIPLEX_SCR_FONT,HORIZ_DIR,6);
outtextxy(170,y,"THE");
outtextxy(j,y,"END");
delay(300);
}
}
void credits()
{
setbkcolor(6);
for(int i = 640;i>=-260;i-=20)
{
cleardevice();
settextstyle(TRIPLEX_SCR_FONT,HORIZ_DIR,5);
outtextxy(170,i,"Made By");
settextstyle(TRIPLEX_SCR_FONT,HORIZ_DIR,2);
outtextxy(170,i+100,"MANISHA (2017CSA1116)");
outtextxy(170,i+130,"MANISHA MAINI (2017CSA1117)");
outtextxy(170,i+160,"MANJIT SINGH (2017CSA1118)");
outtextxy(170,i+190,"MANJOT SINGH (2017CSA1120)");
outtextxy(170,i+220,"MANMEET KAUR (2017CSA1121)");
delay(300);
if(i==-260)
{
exit(0);
}
}
}
void teastall(int x,int y)
{
setcolor(WHITE);
int front[]={x,y,x,y-160,x+200,y-160,x+200,y,x,y};
drawpoly(5,front);
setfillstyle(SOLID_FILL,BROWN);
int counter[]={x+25,y,x+25,y-50,x+175,y-50,x+175,y,x+25,y};
fillpoly(5,counter);
setcolor(MAGENTA);
line(x+25,y-50,x+25,y-70); //containers
line(x+41,y-50,x+41,y-70);
line(x+57,y-50,x+57,y-70);
line(x+73,y-50,x+73,y-70);
line(x+89,y-50,x+89,y-70);
line(x+25,y-50,x+89,y-50);
setcolor(GREEN);
line(x+125,y-50,x+128,y-60);//stove
line(x+128,y-60,x+172,y-60);
line(x+175,y-50,x+172,y-60);
line(x+125,y-50,x+175,y-50);
setcolor(MAGENTA);
line(x+154,y-70,x+154,y-60);//teamaker
line(x+154,y-60,x+168,y-60);
line(x+168,y-60,x+168,y-70);
setcolor(WHITE);
setfillstyle(SOLID_FILL,BROWN);
int top[]={x,y-160,x+30,y-180,x+230,y-180,x+200,y-160,x,y-160};
fillpoly(5,top);
int side[]={x+200,y-160,x+230,y-180,x+230,y-20,x+200,y,x+200,y-160};
fillpoly(5,side);
setcolor(WHITE);
settextstyle(7,HORIZ_DIR,1);
outtextxy(x+23,y-181,"SANJU TEA STALL");
setcolor(MAGENTA);
setfillstyle(SOLID_FILL,MAGENTA);
ellipse(x+33,y-70,0,360,8,3);//containercovers
fillellipse(x+33,y-70,8,3);
ellipse(x+49,y-70,0,360,8,3);
fillellipse(x+49,y-70,8,3);
ellipse(x+65,y-70,0,360,8,3);
fillellipse(x+65,y-70,8,3);
ellipse(x+81,y-70,0,360,8,3);
fillellipse(x+81,y-70,8,3);
setcolor(MAGENTA);
setfillstyle(SOLID_FILL,WHITE);
ellipse(x+161,y-70,0,360,7,2);//teamakerface
fillellipse(x+161,y-70,7,2);
int handle[]={x+168,y-70,x+180,y-70,x+180,y-67,x+168,y-67,x+168,y-70};
drawpoly(5,handle);
}
void teaman(int x , int y)
{
setcolor(6);
line(x+74,y-70,x+74,y-110); //body
line(x+128,y-60,x+128,y-110);
arc(x+78,y-110,90,180,4);  //shoulder
arc(x+124,y-110,0,90,4);
line(x+78,y-114,x+95,y-114);  //neck
line(x+124,y-114,x+107,y-114);
line(x+95,y-114,x+95,y-122);
line(x+107,y-114,x+107,y-122);
ellipse(x+101,y-135,180,0,17,13);   //face
arc(x+84,y-138,90,270,3);   //ear
arc(x+118,y-138,270,90,3);
ellipse(x+101,y-138,15,160,17,15);  //head
setcolor(GREEN);
setfillstyle(LTBKSLASH_FILL,GREEN);
line(x+89,y-150,x+89,y-155);   //cap
line(x+113,y-150,x+113,y-155);
ellipse(x+101,y-150,180,0,12,3);
ellipse(x+101,y-155,0,180,12,3);
floodfill(x+101,y-150,GREEN);
setcolor(6);
setfillstyle(SOLID_FILL,6);
circle(x+94,y-141,2);   //eyes
circle(x+108,y-141,2);
floodfill(x+94,y-141,6);
floodfill(x+108,y-141,6);
line(x+101,y-139,x+101,y-136);  //nose
arc(x+101,y-135,210,330,8);   //mouth
setcolor(6);
line(x+101,y-50,x+101,y-107);
ellipse(x+101,y-114,180,0,6,7);
line(x+95,y-114,x+90,y-104);
line(x+90,y-104,x+101,y-107);
line(x+107,y-114,x+112,y-104);
line(x+112,y-104,x+101,y-107);
circle(x+97,y-98,2);
circle(x+97,y-89,2);
circle(x+97,y-80,2);
circle(x+97,y-71,2);
circle(x+97,y-62,2);
circle(x+97,y-53,2);
setfillstyle(SOLID_FILL,6);
floodfill(x+97,y-98,6);
floodfill(x+97,y-89,6);
floodfill(x+97,y-80,6);
floodfill(x+97,y-71,6);
floodfill(x+97,y-62,6);
floodfill(x+97,y-53,6);
floodfill(x+97,y-108,6);
floodfill(x+109,y-108,6);
}
void teamanstatic(int x,int y)
{
teaman(x,y);
setcolor(13);
int rightarm[]={x+128,y-100,x+170,y-80,x+170,y-72,x+128,y-90,x+128,y-100}; //arms
drawpoly(5,rightarm);
setcolor(WHITE);
arc(x+170,y-76,270,90,4);
setcolor(13);
int leftarm[]={x+74,y-100,x+116,y-80,x+116,y-72,x+74,y-90,x+74,y-100};
drawpoly(5,leftarm);
setcolor(WHITE);
arc(x+116,y-76,270,90,4);
line(x+116,y-80,x+116,y-72);
line(x+170,y-80,x+170,y-72);
setfillstyle(SOLID_FILL,WHITE);
floodfill(x+117,y-73,WHITE);
floodfill(x+171,y-73,WHITE);
}
void backscene()
{
setbkcolor(BLACK);
setcolor(9);
rectangle(0,0,640,150);
setfillstyle(SOLID_FILL,9);
floodfill(1,1,9);
int back[]={0,150,640,150,640,400,0,400,0,150};
fillpoly(5,back);
scenery s1,s2,s3;
s1.hut(10,180);
s2.hut(30,190);
s1.tree(30,370);
s2.tree(70,380);
s2.sun(370,50);
s3.tree(110,350);
s1.clouds();
s1.hills();
}
void carstatic(int x, int y)
{
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
int road[]={0,400,640,400,640,478,0,478,0,400};
fillpoly(5,road);
setcolor(3);
int carbody[]={x+20,y,x-10,y,x-10,y-15,x+20,y-15,x+34,y-40,x+111,y-40,x+125,y-15,x+145,y-15,x+145,y,x+125,y};
drawpoly(10,carbody);
circle(x+27,y+2,7);
circle(x+118,y+2,7);
line(x+34,y,x+111,y);
setfillstyle(SOLID_FILL,3);
floodfill(x+35,y-5,3);
setcolor(BLACK);
int win1[]={x+70,y-18,x+30,y-18,x+37,y-32,x+70,y-32,x+70,y-18};
int win2[]={x+115,y-18,x+75,y-18,x+75,y-32,x+108,y-32,x+115,y-18};
drawpoly(5,win1);
drawpoly(5,win2);
setfillstyle(SOLID_FILL,BLACK);
floodfill(x+68,y-20,BLACK);
floodfill(x+77,y-20,BLACK);
setcolor(BROWN);
circle(x+27,y+2,7);
circle(x+118,y+2,7);
setfillstyle(SOLID_FILL,BROWN);
floodfill(x+27,y+2,BROWN);
floodfill(x+118,y+2,BROWN);
setcolor(WHITE);
}
void man(int x,int y)
{
setcolor(BLACK);
line(x,y,x,y-60); //body
line(x+60,y,x+60,y-60);
line(x,y-75,x,y-80);//bodyabovearm
line(x+60,y-75,x+60,y-80);
line(x,y-60,x,y-75);
line(x+60,y-60,x+60,y-75);
ellipse(x+30,y,180,0,30,6);//bodybase
line(x+4,y-84,x+20,y-84); //shoulderbase
line(x+56,y-84,x+40,y-84);
arc(x+4,y-80,90,180,4); //shouldercurve
arc(x+56,y-80,0,90,4);
setcolor(BLACK);
arc(x+20,y-88,270,0,4); //neckcurve
arc(x+40,y-88,180,270,4);
line(x+24,y-88,x+24,y-95); //neck
line(x+36,y-88,x+36,y-95);
setcolor(10);
int collar[]={x+20,y-84,x+30,y-78,x+40,y-84};  //collar
drawpoly(3,collar);
int collar1[]={x+12,y-84,x+30,y-72,x+48,y-84};
drawpoly(3,collar1);
line(x+30,y-78,x+26,y-75);
line(x+30,y-78,x+34,y-75);
int tie[]={x+28,y-73,x+22,y-30,x+30,y-22,x+38,y-30,x+32,y-73}; //tie
drawpoly(5,tie);
setcolor(BLACK);
circle(x+30,y-17,2); //buttons
circle(x+30,y-9,2);
circle(x+30,y-1,2);
setcolor(CYAN);
int belt[]={x+8,y+5,x+5,y+15,x+55,y+15,x+52,y+5};//belt
drawpoly(4,belt);
line(x+22,y+6,x+22,y+15);
line(x+38,y+6,x+38,y+15);
circle(x+30,y+11,3);
setcolor(BLACK);
ellipse(x+30,y-120,180,0,20,25);//face
setcolor(RED);
line(x+10,y-120,x+50,y-135);
line(x+50,y-120,x+30,y-127);
ellipse(x+30,y-127,90,210,23,25);//turban
ellipse(x+30,y-127,330,90,23,25);
line(x+8,y-129,x+48,y-143);
line(x+8,y-136,x+41,y-149);
line(x+52,y-129,x+43,y-133);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
circle(x+23,y-115,3);   //eyes
circle(x+37,y-115,3);
floodfill(x+23,y-115,BLACK);
floodfill(x+37,y-115,BLACK);
ellipse(x+30,y-105,200,340,8,6);//mouth
line(x+30,y-110,x+30,y-105);//nose
ellipse(x+23,y-115,70,100,8,7);
ellipse(x+37,y-115,70,100,8,7);
}
void armsmoving(int x , int y)
{
setcolor(BLACK);
int leftarm2[]={x,y-75,x+55,y-20,x+55,y-10,x,y-60,x,y-75};
drawpoly(5,leftarm2);
setcolor(WHITE);
line(x+55,y-20,x+55,y-10);
arc(x+55,y-15,270,90,5);
setcolor(BLACK);
int rightarm2[]={x+60,y-75,x+85,y-20,x+85,y-10,x+60,y-60,x+60,y-75};
drawpoly(5,rightarm2);
setcolor(WHITE);
line(x+85,y-20,x+85,y-10);
arc(x+85,y-15,270,90,5);
setcolor(CYAN);
line(x+5,y+15,x,y+80);//leftleg
line(x+30,y+20,x+15,y+82);
setcolor(12);
ellipse(x,y+95,10,90,28,15);
line(x,y+80,x,y+92);
line(x,y+92,x+27,y+92);
setcolor(CYAN);
line(x+28,y+35,x+40,y+74);//rightleg
line(x+55,y+15,x+53,y+76);
setcolor(12);
ellipse(x+40,y+89,10,90,28,15);
line(x+40,y+87,x+67,y+87);
line(x+40,y+74,x+40,y+87);
delay(400);
cleardevice();
backscene();
carstatic(100,400);
teastall(400,375);
teamanstatic(400,375);
man(x,y);
setcolor(BLACK);
int leftarm1[]={x,y-75,x+35,y-20,x+35,y-10,x,y-60,x,y-75};
drawpoly(5,leftarm1);
setcolor(WHITE);
line(x+35,y-20,x+35,y-10);
arc(x+35,y-15,270,90,5);
setcolor(BLACK);
int rightarm1[]={x+60,y-75,x+95,y-35,x+95,y-25,x+60,y-60,x+60,y-75};
drawpoly(5,rightarm1);
setcolor(WHITE);
line(x+95,y-35,x+95,y-25);
arc(x+95,y-30,270,90,5);
setcolor(CYAN);
line(x+5,y+15,x-10,y+80);//leftleg
line(x+30,y+20,x+5,y+82);
setcolor(12);
ellipse(x-10,y+95,10,90,28,15);
line(x-10,y+80,x-10,y+92);
line(x-10,y+92,x+17,y+92);
setcolor(CYAN);
line(x+30,y+20,x+55,y+74);//rightleg
line(x+55,y+15,x+70,y+76);
setcolor(12);
ellipse(x+55,y+89,10,90,28,15);
line(x+55,y+74,x+55,y+86);
line(x+55,y+86,x+82,y+86);
delay(400);
cleardevice();
setcolor(WHITE);
}
void car(int x,int y)
{
backscene();
teastall(400,375);
teamanstatic(400,375);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
int road[]={0,400,640,400,640,478,0,478,0,400};
fillpoly(5,road);
setcolor(3);
int carbody[]={x+20,y,x-10,y,x-10,y-15,x+20,y-15,x+34,y-40,x+111,y-40,x+125,y-15,x+145,y-15,x+145,y,x+125,y};
drawpoly(10,carbody);
circle(x+27,y+2,7);
circle(x+118,y+2,7);
line(x+34,y,x+111,y);
setfillstyle(SOLID_FILL,3);
floodfill(x+35,y-5,3);
setcolor(BLACK);
int win1[]={x+70,y-18,x+30,y-18,x+37,y-32,x+70,y-32,x+70,y-18};
int win2[]={x+115,y-18,x+75,y-18,x+75,y-32,x+108,y-32,x+115,y-18};
drawpoly(5,win1);
drawpoly(5,win2);
setfillstyle(SOLID_FILL,BLACK);
floodfill(x+68,y-20,BLACK);
floodfill(x+77,y-20,BLACK);
setcolor(BROWN);
circle(x+27,y+2,7);
circle(x+118,y+2,7);
setfillstyle(SOLID_FILL,BROWN);
floodfill(x+27,y+2,BROWN);
floodfill(x+118,y+2,BROWN);
setcolor(6);
}
void teamanarms(int x, int y)
{
for(int i = 0 ; i<=5;i++)
{
backscene();
teastall(400,375);
int rightarm[]={x+128,y-100,x+170,y-80,x+170,y-72,x+128,y-90,x+128,y-100};
drawpoly(5,rightarm);
arc(x+170,y-76,270,90,4);
int leftarm[]={x+74,y-100,x+116,y-80,x+116,y-72,x+74,y-90,x+74,y-100};
drawpoly(5,leftarm);
arc(x+116,y-76,270,90,4);
delay(600);
cleardevice();
backscene();
teastall(400,375);
int rightarm2[]={x+128,y-100,x+170,y-70,x+170,y-62,x+128,y-90,x+128,y-100};
drawpoly(5,rightarm2);
arc(x+170,y-66,270,90,4);
int leftarm2[]={x+74,y-100,x+116,y-70,x+116,y-62,x+74,y-90,x+74,y-100};
drawpoly(5,leftarm2);
arc(x+116,y-66,270,90,4);
delay(600);
cleardevice();
setcolor(WHITE);
}
}
void manstatic(int x,int y)
{
man(x,y);
setcolor(BLACK);
int leftarm2[]={x,y-75,x+55,y-20,x+55,y-10,x,y-60,x,y-75};
drawpoly(5,leftarm2);
setcolor(WHITE);
line(x+55,y-20,x+55,y-10);
arc(x+55,y-15,270,90,5);
setcolor(BLACK);
int rightarm2[]={x+60,y-75,x+85,y-20,x+85,y-10,x+60,y-60,x+60,y-75};
drawpoly(5,rightarm2);
setcolor(WHITE);
line(x+85,y-20,x+85,y-10);
arc(x+85,y-15,270,90,5);
setcolor(CYAN);
line(x+5,y+15,x,y+80);//leftleg
line(x+30,y+20,x+15,y+82);
setcolor(12);
ellipse(x,y+95,10,90,28,15);
line(x,y+80,x,y+92);
line(x,y+92,x+27,y+92);
setcolor(CYAN);
line(x+28,y+35,x+40,y+74);//rightleg
line(x+55,y+15,x+53,y+76);
setcolor(12);
ellipse(x+40,y+89,10,90,28,15);
line(x+40,y+87,x+67,y+87);
line(x+40,y+74,x+40,y+87);
}
void teamanmoving(int x,int y)
{
backscene();
carstatic(100,400);
teastall(400,375);
teaman(400,375);
manstatic(260,380);
setcolor(13);
int rightarm[]={x+128,y-100,x+170,y-80,x+170,y-72,x+128,y-90,x+128,y-100};
drawpoly(5,rightarm);
setcolor(WHITE);
arc(x+170,y-76,270,90,4);
setcolor(13);
int leftarm[]={x+74,y-100,x+116,y-80,x+116,y-72,x+74,y-90,x+74,y-100};
drawpoly(5,leftarm);
setcolor(WHITE);
arc(x+116,y-76,270,90,4);
setcolor(WHITE);
line(x+116,y-80,x+116,y-72);
line(x+170,y-80,x+170,y-72);
setfillstyle(SOLID_FILL,WHITE);
floodfill(x+117,y-73,WHITE);
floodfill(x+171,y-73,WHITE);
delay(600);
cleardevice();
backscene();
carstatic(100,400);
teastall(400,375);
teaman(400,375);
manstatic(260,380);
setcolor(13);
int rightarm2[]={x+128,y-100,x+170,y-70,x+170,y-62,x+128,y-90,x+128,y-100};
drawpoly(5,rightarm2);
setcolor(WHITE);
arc(x+170,y-66,270,90,4);
setcolor(13);
int leftarm2[]={x+74,y-100,x+116,y-70,x+116,y-62,x+74,y-90,x+74,y-100};
drawpoly(5,leftarm2);
setcolor(WHITE);
arc(x+116,y-66,270,90,4);
setcolor(WHITE);
line(x+116,y-70,x+116,y-62);
line(x+170,y-70,x+170,y-62);
setfillstyle(SOLID_FILL,WHITE);
floodfill(x+117,y-63,WHITE);
floodfill(x+171,y-63,WHITE);
delay(600);
cleardevice();
setcolor(WHITE);
}
void dialog()
{
backscene();
carstatic(40,400);
teastall(400,375);
teamanstatic(400,375);
manstatic(260,380);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(400,180,"Hello sir,how may i help you?");
delay(3000);
cleardevice();
backscene();
carstatic(40,400);
teastall(400,375);
teamanstatic(400,375);
manstatic(260,380);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(260,170,"Hello dear,could");
outtextxy(260,180,"you please make me");
outtextxy(260,190,"a cup of tea ?");
delay(3000);
cleardevice();
backscene();
carstatic(40,400);
teastall(400,375);
teamanstatic(400,375);
manstatic(260,380);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(400,180,"Sure sir, give me 10 minutes");
delay(3000);
cleardevice();
backscene();
carstatic(40,400);
teastall(400,375);
teamanstatic(400,375);
manstatic(260,380);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(260,190,"Ok dear !");
delay(3000);
cleardevice();
teamanmoving(400,375);
teamanmoving(400,375);
teamanmoving(400,375);
backscene();
carstatic(40,400);
teastall(400,375);
teamanstatic(400,375);
manstatic(260,380);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(400,180,"Here is your tea sir !");
delay(3000);
cleardevice();
backscene();
carstatic(40,400);
teastall(400,375);
teamanstatic(400,375);
manstatic(260,380);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(260,180,"Thank you so much,");
outtextxy(260,190,"how much is it ?");
delay(3000);
cleardevice();
backscene();
carstatic(40,400);
teastall(400,375);
teamanstatic(400,375);
manstatic(260,380);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(400,180,"It's rupees fifteen sir.");
delay(3000);
cleardevice();
backscene();
carstatic(40,400);
teastall(400,375);
teamanstatic(400,375);
manstatic(260,380);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(260,170,"Oh my dear ! I happen");
outtextxy(260,180,"to have notes of 500");
outtextxy(260,190,"rupees only.");
delay(3000);
cleardevice();
backscene();
carstatic(40,400);
teastall(400,375);
teamanstatic(400,375);
manstatic(260,380);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(400,170,"It's alright sir, I have");
outtextxy(400,180,"the change");
delay(3000);
cleardevice();
backscene();
carstatic(40,400);
teastall(400,375);
teamanstatic(400,375);
manstatic(260,380);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(240,160,"Ok let me just calculate");
outtextxy(240,170,"the return amount as you");
outtextxy(240,180,"do not seem very");
outtextxy(240,190,"educated.");
delay(3000);
cleardevice();
backscene();
carstatic(40,400);
teastall(400,375);
teamanstatic(400,375);
manstatic(260,380);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(400,170,"No need sir, it will be");
outtextxy(400,180,"485 rupees");
delay(3000);
cleardevice();
backscene();
carstatic(40,400);
teastall(400,375);
teamanstatic(400,375);
manstatic(260,380);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(240,160,"Oh you are quite fast ");
outtextxy(240,170,"in calculations ,yet ");
outtextxy(240,180,"you are running a");
outtextxy(240,190,"tea stall.");
delay(3000);
cleardevice();
backscene();
carstatic(40,400);
teastall(400,375);
teamanstatic(400,375);
manstatic(260,380);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(400,170,"Sir I had to drop out of");
outtextxy(400,180,"school due to lack of money !");
delay(3000);
cleardevice();
backscene();
carstatic(40,400);
teastall(400,375);
teamanstatic(400,375);
manstatic(260,380);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(240,160,"That's quite unfortunate");
outtextxy(240,170,"young man! Everyone your ");
outtextxy(240,180,"age has the right to");
outtextxy(240,190,"education.");
delay(3000);
cleardevice();
backscene();
carstatic(40,400);
teastall(400,375);
teamanstatic(400,375);
manstatic(260,380);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(400,170,"Yes sir,but education");
outtextxy(400,180,"requires money.");
delay(3000);
cleardevice();
backscene();
carstatic(40,400);
teastall(400,375);
teamanstatic(400,375);
manstatic(260,380);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(240,160,"Oh don't worry young lad !");
outtextxy(240,170,"You know i am quite");
outtextxy(240,180,"impressed by your");
outtextxy(240,190,"intelligence.");
delay(3000);
cleardevice();
backscene();
carstatic(40,400);
teastall(400,375);
teamanstatic(400,375);
manstatic(260,380);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(400,180,"That's very kind of you sir.");
delay(3000);
cleardevice();
backscene();
carstatic(40,400);
teastall(400,375);
teamanstatic(400,375);
manstatic(260,380);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(240,160,"Yes i have the perfect solution ");
outtextxy(240,170,"Why don't you join my school");
outtextxy(240,180,"and i will pay for all your");
outtextxy(240,190,"expenses and fees.");
delay(3000);
cleardevice();
backscene();
carstatic(40,400);
teastall(400,375);
teamanstatic(400,375);
manstatic(260,380);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(400,170,"Oh sir,how can I ever thank ");
outtextxy(400,180,"you for your generosity.");
delay(3000);
cleardevice();
backscene();
carstatic(40,400);
teastall(400,375);
teamanstatic(400,375);
manstatic(260,380);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(260,170,"No need son. Now come tomorrow");
outtextxy(260,180,"with your parents to");
outtextxy(260,190,"Shantiniketan School.");
delay(3000);
cleardevice();
backscene();
carstatic(40,400);
teastall(400,375);
teamanstatic(400,375);
manstatic(260,380);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(400,170,"Yes sir , I will be there ");
outtextxy(400,180,"first thing tomorrow.");
delay(3000);
cleardevice();
backscene();
carstatic(40,400);
teastall(400,375);
teamanstatic(400,375);
manstatic(260,380);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(240,180,"Yes please ,so goodbye for now.");
outtextxy(240,190,"See you tomorrow.");
delay(3000);
cleardevice();
}
void main()
{
clrscr();
int gd = DETECT,gm;
initgraph(&gd,&gm,"C:\\turboC3\\bgi");
entrytxt();
delay(800);
for(int i = 50 ;i<=670;i+=10)
{
cleardevice();
stickman(i,200,10);
delay(100);
}
title(150);
delay(800);
cleardevice();
for(int a=478;a>=100;a-=20)
{
car(a,400);
delay(300);
cleardevice();
}
for(int m=150;m<=260;m+=7)
{
backscene();
carstatic(100,400);
teastall(400,375);
teamanstatic(400,375);
man(m,380);
armsmoving(m,380);
if(m==260)
{
backscene();
carstatic(100,400);
teastall(400,375);
teamanstatic(400,375);
man(260,380);
armsmoving(260,380);
}
}
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
dialog();
for(a=100;a<=730;a+=20)
{
car(a,400);
delay(300);
cleardevice();
}
moral();
delay(15000);
cleardevice();
exittext(200);
delay(500);
cleardevice();
credits();
getch();
closegraph();
}