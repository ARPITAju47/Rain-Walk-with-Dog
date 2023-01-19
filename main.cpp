#include<windows.h>
#include<GL/glut.h>

#include<conio.h>
#include<stdio.h>
#include<graphics.h>
    int c=60;
    int d= 30;
    int e= 40;
void displayMan(int x, int y, int cnt)
{

  //umbrella at different moments
    if(cnt<26){
    line(x+30,y+30,x+30,y-90);
    pieslice(x+30,y-30,0,180,55);
    }
    else if(cnt==26){
      line(x+30,y+30,x+30,y-50);
      pieslice(x+30,y-50,240,300,60);
    }
    else if(cnt==27){
      line(x+30,y+30,x+30,y-50);
      pieslice(x+30,y-50,250,290,60);
    }
    else{
      line(x+30,y+30,x+30,y-50);
      pieslice(x+30,y-50,260,280,60);
    }

    //husband
    circle(x,y,10);         //face
    line(x,y+10,x,y+30);        //neck
    line(x,y+30,x-20,y+40);    //left hand
    line(x,y+30,x+20,y+40);    //right hand
    line(x+20,y+40,x+30,y+30);
    line(x,y+30,x,y+70);        //body


    //wife
    circle(x+c,y-11+6,5);
    circle(x+c,y+2+5,10);         //face
    line(x+c,y+10+5,x+c,y+30+5);        //neck
    line(x+c,y+30,x-20+c,y+40);    //left hand
    line(x+c,y+30,x+20+c,y+40);    //right hand
    line(x+20+20,y+40,x+30,y+30);
    line(x+c,y+30,x+c,y+70);        //body


    //kid
    circle(x+d,y+e-1,3);
    circle(x+d,y+e+6,6);         //face
    line(x+d,y+13+e,x+d,y+30+e);        //neck
    line(x+d,y+30+d,x-20+d+7,y+40+d);    //left hand
    line(x+d,y+30+d,x+20+d-7,y+40+d);    //right hand
    line(x+20,y+40,x+30,y+30);
    line(x+d,y+30+e,x+d,y+70+10);        //body



    //cat
    circle(x+d+199-93,y+e+6+20,6); //head
    line(x+d+192-93,y+e+24,x+d+192-93,y+e+37);//body
    line(x+d+170-93,y+e+25,x+d+172-93,y+e+37);
    line(x+d+170-93,y+e+25,x+d+192-93,y+e+27);
    line(x+d+172-93,y+e+37,x+d+192-93,y+e+37);//body


    //circle(x+d+196,y+e+6+14,3); //ear

}
void drawCloud(int z,int y, int cnt)
{
		int r=50, f=210, f1=420;
		arc(z,y,45,135,r);
		arc(z+50,y,45,135,r);
		arc(z+100,y,45,135,r);
		arc(z,y,135,225,r);
		arc(z+50,y,135+90,225+90,r);
		arc(z,y,135+90,225+90,r);
		arc(z+100,y,135+90,225+90,r);
		arc(z+100,y,315,45,r);

        //Sec, Third Cloud
        if(cnt<17){
                if(cnt<=7){
        r+=10;

		arc(z+f,y,45,135,r);
		arc(z+50+f,y,45,135,r);
		arc(z+100+f,y,45,135,r);
		arc(z+f,y,135,225,r);
		arc(z+50+f,y,135+90,225+90,r);
		arc(z+f,y,135+90,225+90,r);
		arc(z+100+f,y,135+90,225+90,r);
		arc(z+100+f,y,315,45,r);}

        r=50;
		arc(z+f1,y,45,135,r);
		arc(z+50+f1,y,45,135,r);
		arc(z+100+f1,y,45,135,r);
		arc(z+f1,y,135,225,r);
		arc(z+50+f1,y,135+90,225+90,r);
		arc(z+f1,y,135+90,225+90,r);
		arc(z+100+f1,y,135+90,225+90,r);
		arc(z+100+f1,y,315,45,r);
        }
        //sun
        else if(cnt>27){
             int x=550, y=60;

              line(x,y+35,x,y+47);
              line(x-47,y,x-35,y);
              line(x+35,y,x+47,y);
              line(x,y-35,x,y-47);
              line(425+150, 83, 432+150, 90);
              line(367+150, 25, 375+150, 33);
              line(425+150, 33, 432+150, 25);
              line(367+150, 90, 375+150, 83);
             circle(550,60,30);

        }
}


int main()
{
    int gd=DETECT, gm;
    int i,d=0,x=50,y=340,z=50,  shouldMove=1;
    double d1=0;
    int rx,ry;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    int cnt=0;
    while(1)
    {
        cnt++;
	cleardevice();
	displayMan(x,340, cnt);

	drawCloud(z,60,cnt);
	line(0,430,639,430);


	//............Rain................
	if(cnt<=5){
for(i=0;i<500;i++)
        {
            rx=rand()%639;
            ry=rand()%439;
            if(rx>=(x-40)&&rx<=(x+110))
                if(ry>=(y-50)&&ry<=479)
                    continue;
           if(ry>120) line(rx-10,ry+10,rx,ry);
        }
	}
	else if(cnt>=6 and cnt<10){
for(i=0;i<300;i++)
        {
            rx=rand()%639;
            ry=rand()%439;
            if(rx>=(x-40)&&rx<=(x+110))
                if(ry>=(y-50)&&ry<=479)
                    continue;
           if(ry>120) line(rx-10,ry+10,rx,ry);
        }
	}
	else if(cnt>=10 && cnt<=13){
for(i=0;i<100;i++)
        {
            rx=rand()%639;
            ry=rand()%439;
            if(rx>=(x-40)&&rx<=(x+110))
                if(ry>=(y-50)&&ry<=479)
                    continue;
           if(ry>120) line(rx-10,ry+10,rx,ry);
        }
	}


        //legs
        if(shouldMove)
        {
            if(d<20){
                d+=4;
                d1+=0.5;}
            else
                shouldMove=0;
            line(x,y+70,x-d,y+90);//husbands legs
            line(x,y+70,x+d,y+90);

            line(x+c,y+70,x-d+c,y+90);//wife's legs
            line(x+c,y+70,x+d+c,y+90);

            line(x+30,y+70+10,x-d+40,y+90);//kid's legs
            line(x+30,y+70+10,x+d+20,y+90);

            line(x+30+172-93,y+70+10,x-d+40+172-93,y+90);//left legs
            line(x+30+172-93,y+70+10,x+d+20+172-93,y+90);

            line(x+30+190-93,y+70+10,x-d+40+190-93,y+90);//right legs
            line(x+30+190-93,y+70+10,x+d+20+190-93,y+90);

            line(x+30+173-93,y+e+25,x+30+158-93,y+e+20);//Tail
            circle(x+30+196-93,y+e+6+14,3); //ear


        }
        else
        {
            if(d>0)
                d-=4;
            else
                shouldMove=1;
            line(x,y+70,x-d,y+90);//husbands legs
            line(x,y+70,x+d,y+90);

            line(x+c,y+70,x-d+c,y+90);//wife's legs
            line(x+c,y+70,x+d+c,y+90);

            line(x+30,y+70+10,x-d+40,y+90);//kid's legs
            line(x+30,y+70+10,x+d+20,y+90);

            line(x+30+172-93,y+70+10,x-d+40+172-93,y+90);//left legs
            line(x+30+172-93,y+70+10,x+d+20+172-93,y+90);

            line(x+30+190-93,y+70+10,x-d+40+190-93,y+90);//right legs
            line(x+30+190-93,y+70+10,x+d+20+190-93,y+90);

            line(x+30+173-93,y+e+25,x+30+158-93,y+e+20);//Tail
            circle(x+30+196-93,y+e+6+14,3); //ear
        }


        delay(350);
        //delay(20);
        x=(x+10)%639;
    }

    getch();
}
