#include<iostream>
#include<graphics.h>
using namespace std; 

int main(){
	
int gd= DETECT, gm; 
initgraph(&gd, &gm, ""); 
/*
int x1,y1, x2, y2; 
cout<< "Enter first point: "; 
cin>>x1>>y1; 
cout<< "Enter second point: "; 
cin>>x2>>y2; 

int dx=abs(x2-x1); 
int dy=abs(y2-y1);

float x=x1; 
float y=y1; 

int step=0; 
dx>dy?step=dx:step=dy;  

float xinc= dx/(float)step; 
float yinc= dy/(float)step; 

putpixel(x,y,'WHITE');

while(step--){
	x+= xinc; 
	y+=yinc; 
	putpixel(abs(x), abs(y), 'WHITE');
}*/

rectangle(150,40,450,180);
setfillstyle(1,GREEN);
floodfill(160,50,WHITE);
setcolor(WHITE);

getch(); 
closegraph(); 

	return 0; 
}
