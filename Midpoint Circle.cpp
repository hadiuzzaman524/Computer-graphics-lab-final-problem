// MidPoint Circle Drawing Algorithm Implementation

#include <iostream>
#include <graphics.h>

using namespace std; 
void plotPoint(int xc,int yc,int x,int y){
	
	putpixel(xc+x, yc+y,'WHITE'); 
	putpixel(xc-x, yc+y, 'WHITE'); 
	putpixel(xc+x, yc-y, 'WHITE'); 
	putpixel(xc-x, yc-y, 'WHITE'); 
	
	putpixel(xc+y, yc+x,'WHITE'); 
	putpixel(xc-y, yc+x, 'WHITE'); 
	putpixel(xc+y, yc-x, 'WHITE'); 
	putpixel(xc-y, yc-x, 'WHITE'); 
}
void midPointCircleDrawing(int Xc,int Yc, int r){
	
	int x=0; 
	int y=r; 
	int p= 1-r; 
	plotPoint(Xc,Yc,x,y); 
	
	while(x<=y){
		x++; 
		if(p<0){
			p+=2*x+1; 
		}
		else{
			y--; 
			p+= 2*x+1-2*y; 
		}
		plotPoint(Xc,Yc,x,y);
	}
}
int main(){
	int gd= DETECT, gm; 
	initgraph(&gd, &gm, ""); 
	
	int Xc, Yc, r; 
	cout<< "Enter the center point of circle: "; 
	cin>>Xc>>Yc; 
	cout<< "Enter the radius of the circle: "; 
	cin>>r; 
	midPointCircleDrawing(Xc,Yc,r); 
	
	getch(); 
	closegraph(); 
	return 0; 
}

