#include<bits/stdc++.h>
using namespace std;

typedef struct point{
	int x,y;
}point;

typedef struct triangle{
	point p1,p2,p3;
}triangle;

double slopeXY(point p1,point p2){
	return (p2.y-p1.y)/(p2.x-p1.x);
}

bool isColinearXY(point p1,point p2, point p3){
	if(slopeXY(p1,p2)==slopeXY(p2,p3))
		return true;
	else{
		return false;
	}
}

bool isRightAngled(triangle t){
	if((t.p1.x-t.p2.x==0 && t.p2.y-t.p3.y==0) || (t.p1.x-t.p3.x==0 && t.p2.y-t.p3.y==0)){
		return true;
	}
	if(slopeXY(t.p1,t.p2)*slopeXY(t.p1,t.p3)==-1 || slopeXY(t.p1,t.p2)*slopeXY(t.p2,t.p3)==-1)
		return true;
	else {
		return false;
	}
}
int main(){
	point a,b,c;
	triangle t;
	a.x=1;
	a.y=4;
	b.x=1;
	b.y=2;
	c.x=5;
	c.y=2;
	t.p1=a;
	t.p2=b;
	t.p3=c;
	//cout<<isColinearXY(a,b,c);
	cout<<isRightAngled(t);

}
