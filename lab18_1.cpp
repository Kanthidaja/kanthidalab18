#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
    float area;
    float x_overlap,y_overlap,x2_overlap,y2_overlap  ;
    //เก็บค่าล่างซ้ายของR1
    float LB1x = R1.x;
    float LB1y = R1.y-R1.h;
    //เก็บค่าบนขวาของR1
    float RU1x = R1.x+R1.w;
    float RU1y = R1.y;
    //เก็บค่าล่างซ้ายของR2
    float LB2x = R2.x;
    float LB2y = R2.y-R2.h;
    //เก็บค่าบนขวาของR2
    float RU2x = R2.x+R2.w;
    float RU2y = R2.y;
    if(LB1x<=LB2x){
        x_overlap = LB2x;
    }else{
        x_overlap = LB1x;
    }
    if(LB1y<=LB2y){
        y_overlap = LB2y;
    }else{
        y_overlap = LB1y;
    }
    //
    if(RU1x<=RU2x){
        x2_overlap = RU1x;
    }else{
        x2_overlap = RU2x;
    }
    if(RU1y<=RU2y){
        y2_overlap = RU1y;
    }else{
        y2_overlap = RU2y;
    }
    //
    if(x_overlap < x2_overlap && y_overlap < y2_overlap){
        area = abs((x_overlap-x2_overlap)*(y2_overlap-y_overlap));
        return area;
    }else{
        return 0;
    }
}