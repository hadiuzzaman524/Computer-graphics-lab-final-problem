#include <iostream>
#include <graphics.h>
#include <math.h>
using namespace std; 

int main() {
	
	

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

	int x1, y1, x2, y2; 
	cout<< "Enter first point: "; 
	cin>>x1>> y1; 
	cout<< "Enter second point: "; 
	cin>>x2>>y2; 
//	x1=10,y1=10,x2=30,y2=40;
	
	int del_x= x2-x1; 
	int del_y=y2-y1; 
	
	float x_inc, y_inc, x=x1, y=y1; 
	
	int step=0; 
	
	if(del_x> del_y){
		step=del_x;
	}else{
		step=del_y; 
	}
	

	x_inc=del_x/(float)step;
	y_inc=del_y/(float)step;
	
	putpixel(x, y, WHITE);

	while(step--){
		x+= x_inc; 
		y+=y_inc; 

		int tempx= x; 
		if(x-tempx>0.5){
			tempx+=1;
		}
		int tempy=y; 
		if(tempy-y>0.5){
			tempy+=1;
		}
		
		putpixel(tempx, tempy, WHITE);
	}

  
    getch();
    closegraph();
	return 0;
}
