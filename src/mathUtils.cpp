#include <mathUtils.h>
#include <math.h>

mathUtils::mathUtils(void){

}

float mathUtils::DCM(float* ang){ // passed by memory pointer

    float C[3][3] = {0.0F};

    // First  row 
    C[0][0] =  cos(ang[0])*cos(ang[1]); 
    C[0][1] = -sin(ang[0])*cos(ang[1]) + cos(ang[0])*sin(ang[1])*sin(ang[2]);
    C[0][2] =  sin(ang[0])*sin(ang[2]) + cos(ang[0])*sin(ang[1])*sin(ang[2]);
    // Second row
    C[1][0] =  sin(ang[0])*cos(ang[1]);
    C[1][1] =  cos(ang[0])*cos(ang[1]) + sin(ang[0])*sin(ang[1])*sin(ang[2]);
    C[1][2] = -sin(ang[2])*cos(ang[0]) + sin(ang[0])*sin(ang[1])*cos(ang[2]);
    // Third  row 
    C[2][0] = -sin(ang[1]);
    C[2][1] =  cos(ang[1])*sin(ang[2]);
    C[2][2] =  cos(ang[1])*cos(ang[2]);

    return C;
}