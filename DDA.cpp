#include <iostream>
#include <graphics.h>
using namespace std; 

int main(){
	
	int gd= DETECT,gm; 
	initgraph(&gd,&gm,""); 
	
	int x1,y1,x2,y2; 
	cout<< "Enter first point: "; 
	cin>>x1>>y1; 
	cout<< "Enter second point: "; 
	cin>>x2>>y2; 
	
	int dx= abs(x2-x1); 
	int dy=abs(y2-y1); 
	int step=0; 
	dx>dy?step=dx:step=dy; 
	
	float xinc= dx/(float)step; 
	float yinc= dy/(float)step; 
	
	float x=x1, y=y1; 
	putpixel(x,y,'RED');
	while(step--){
		x+=xinc; 
		y+=yinc; 
		putpixel(abs(x), abs(y), 'WHITE'); 
	}
	
	getch(); 
	closegraph();
	
	return 0; 
}
