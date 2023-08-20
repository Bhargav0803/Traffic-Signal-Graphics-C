#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
void engine()
{
int p;
for(p=1;p<50;p++){
              sound(p);
              delay(50);
}
nosound();
}
  int main() {
	/* request auto detection */
	int gdriver = DETECT, gmode;
	int i,a,s,d,maxx,midy;

	/* initialize graphic mode */
	initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");
	printf("Pick Traffic Signal Color  1.Red 2.Green 3.Yellow :");
	scanf("%d",&a);
        switch(a)
        {
        case 1:{
        i=0;
        s=0;
        midy = getmaxy() / 2;
        cleardevice();
               line(600,midy + 35,600,midy - 30);
               line(615,midy + 35,615,midy - 30);
               line(595,midy -30,621,midy - 30);
               line(595,midy - 110,621,midy - 110);
               line(595,midy - 30,595,midy - 110);
               line(622,midy - 30,622,midy - 110);
               setcolor(WHITE);
               circle(608,midy-96,12);
               setfillstyle(SOLID_FILL,RED);
               floodfill(608,midy-96,WHITE);
               circle(608,midy-70,12);
               circle(608,midy-44,12);
       goto A;
       }
       case 2:
       {
       // Speed of the car 
	printf("What speed do you want for the car? (1 to 100):");
	scanf("%d",&s);
        d=100-s;
        cleardevice();
        break;
        }
       
       case 3:{
       i=0;
        s=-1;
        
        midy = getmaxy() / 2;
        cleardevice();
              
               line(600,midy + 35,600,midy - 30);
               line(615,midy + 35,615,midy - 30);
               line(595,midy -30,621,midy - 30);
               line(595,midy - 110,621,midy - 110);
               line(595,midy - 30,595,midy - 110);
               line(622,midy - 30,622,midy - 110);
               circle(608,midy-96,12);
               setcolor(WHITE);
               circle(608,midy-70,12);
               setfillstyle(SOLID_FILL,YELLOW);
               floodfill(608,midy-70,WHITE);
               circle(608,midy-44,12);
               goto A;
               C:
               engine();
               goto B;                    
}
default:
       {
       printf("Invalid Option");
       goto B;
}
}
       
       
	// max position in x-axis 
	maxx = getmaxx();
	// mid position in y-axis 
	midy = getmaxy() / 2;
               


    for (i = 0; i < maxx ; i = i + 10) {
               cleardevice();
               // green signal
               line(600,midy + 35,600,midy - 30);
               line(615,midy + 35,615,midy - 30);
               line(595,midy -30,621,midy - 30);
               line(595,midy - 110,621,midy - 110);
               line(595,midy - 30,595,midy - 110);
               line(622,midy - 30,622,midy - 110);
               setcolor(WHITE);
               circle(608,midy-96,12);
               circle(608,midy-70,12);
               setcolor(WHITE);
               circle(608,midy-44,12);
               setfillstyle(SOLID_FILL,GREEN);
               floodfill(608,midy-44,WHITE);
		
       A:
                
		// mountains 
		setcolor(BROWN);
		line(0,100,maxx,100);

		setcolor(BROWN);
		setfillstyle(SOLID_FILL,BROWN);
		line(0,100,110,0);
		line(110,0,210,100);

		setcolor(BROWN);
		setfillstyle(SOLID_FILL, BROWN);
		line(210,100,315,0);
		line(315,0,410,100);

		setcolor(BROWN);
		setfillstyle(SOLID_FILL,BROWN);
		line(410,100,515,0);
		line(515,0,640,100);

		floodfill(100,80,BROWN);
		floodfill(300,80,BROWN);
		floodfill(500,80,BROWN);

		//moon and stars
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,WHITE);
		circle(210,50,15);
		circle(200,20,1);
		circle(240,60,1);
		circle(140,10,1);
		circle(270,15,1);
		circle(10,70,1);
		circle(50,15,1);
		circle(400,30,1);
		circle(330,5,1);
		circle(450,40,1);
		circle(410,75,1);
		circle(480,10,1);
		circle(580,20,1);
		circle(630,70,1);


		floodfill(210,50,WHITE);
		floodfill(200,20,WHITE);
		floodfill(240,60,WHITE);
		floodfill(140,10,WHITE);
		floodfill(270,15,WHITE);
		floodfill(10,70,WHITE);
		floodfill(50,15,WHITE);
		floodfill(400,30,WHITE);
		floodfill(330,5,WHITE);
		floodfill(450,40,WHITE);
		floodfill(410,75,WHITE);
		floodfill(480,10,WHITE);
		floodfill(580,20,WHITE);
		floodfill(630,70,WHITE);

                // road
		setcolor(WHITE);
		line(0, midy + 35, maxx, midy + 35);

		// body of the car 
		setcolor(RED);
		setfillstyle(SOLID_FILL, RED);

		line(0 + i, midy + 25, 0 + i, midy);
		line(0 + i, midy, 20 + i, midy);
		line(20 + i, midy, 40 + i, midy - 20);
		line(40 + i, midy - 20, 80 + i, midy - 20);
		line(80 + i, midy - 20, 100 + i, midy);
		line(100 + i, midy, 120 + i, midy);
		line(120 + i, midy, 120 + i, midy + 25);
		line(0 + i, midy + 25, 18 + i, midy + 25);
		arc(30 + i, midy + 25, 0, 180, 12);
		line(42 + i, midy + 25, 78 + i, midy + 25);
		arc(90 + i, midy + 25, 0, 180, 12);
		line(102 + i, midy + 25, 120 + i, midy + 25);

		line(28 + i, midy, 43 + i, midy - 15);
		line(43 + i, midy - 15, 57 + i, midy - 15);
		line(57 + i, midy - 15, 57 + i, midy);
		line(57 + i, midy, 28 + i, midy);

		line(62 + i, midy - 15, 77 + i, midy - 15);
		line(77 + i, midy - 15, 92 + i, midy);
		line(92 + i, midy, 62 + i, midy);
		line(62 + i, midy, 62 + i, midy - 15);
		floodfill(5 + i, midy + 22, RED);
		setcolor(DARKGRAY);
	        setfillstyle(SLASH_FILL, DARKGRAY);
		circle(30 + i, midy + 25, 9);
		circle(90 + i, midy + 25, 9);
		floodfill(30 + i, midy + 25, DARKGRAY);
		floodfill(90 + i, midy + 25, DARKGRAY);
		    if(s==0)
                       {
                       goto B;
                        }
                     else if(s==-1){
                         
                        goto C;
                         }
                     else  
                       {
	               delay(d);
                       }
                     
	          }

      B:
	getch();

	// deallocate memory allocated for graphic screen 
	closegraph();
	return 0;
  }