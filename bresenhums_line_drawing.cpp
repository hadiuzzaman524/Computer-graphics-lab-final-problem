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
	
	int dx=abs(x2-x1); 
	int dy=abs(y2-y1); 
	
	int twoDelX= 2*dx; 
	int twoDelY= 2*dy; 
	
	int p= twoDelY-dx; 
	
	int step= dx; 
	int x=x1, y=y1; 
	
	putpixel(x,y,'WHITE');
	while(step--){
		
		if(p<0){
				x=x+1;
			p+= twoDelY;
		 
		}
		else{
			y=y+1; 
			x=x+1; 
			p+= twoDelY-twoDelX;
		}
		
		putpixel(x,y,'WHITE');
	}
	getch(); 
	closegraph();
	
	return 0; 
	
}
