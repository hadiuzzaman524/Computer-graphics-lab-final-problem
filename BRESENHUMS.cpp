//Bresenhums algorithm implementation

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
	
	int delX= abs(x2-x1); 
	int delY= abs(y2-y1); 
	
	int twoDelX= 2*delX;
	int twoDelY= 2*delY; 
	
	int p= twoDelY-delX; 
	int step= delX; 
	int x= x1, y=y1; 
	putpixel(x,y,'WHITE'); 
	while(step--){
		x++; 
		if(p<0){
			p+= twoDelY; 
		}
		else{
			y++; 
			p+= twoDelY-twoDelX; 
		}
		putpixel(x,y,'WHITE'); 
	}
	
	getch(); 
	closegraph(); 
	return 0; 
}
