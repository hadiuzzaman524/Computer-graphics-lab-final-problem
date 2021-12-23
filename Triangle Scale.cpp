// Traingle scale

#include <iostream>
#include <graphics.h>
using namespace std; 

int main(){
	int gd= DETECT, gm; 
	initgraph(&gd,&gm,""); 
	int x1,x2,x3, y1, y2, y3; 
	cout<< "Enter first  point: "; 
	cin>>x1>>y1; 
	cout<< "Enter second point: "; 
	cin>> x2>>y2; 
	cout<< "Enter third point: "; 
	cin>> x3>>y3; 
	line(x1, y1, x2, y2); 
	line(x2, y2, x3, y3); 
	line(x3, y3, x1, y1); 
	
	int x, y; 
	cout<< "Translation factor: x, y: "; 
	cin>> x>>y; 
	x1+=x; 
	x2+=x; 
	x3+=x; 
	y1+=y; 
	y2+=y; 
	y3+=y; 
	
	line(x1, y1, x2, y2); 
	line(x2, y2, x3, y3); 
	line(x3, y3, x1, y1); 
	
	
	getch(); 
	closegraph(); 
	
	return 0; 
}
