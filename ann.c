//
//  ann.c
//  ann
//
//  Created by Emre Jılta

#include "ann.h"
#include <math.h>

//Distribution Functions
//Net : weighted sum

//Multiplication
float multiplication(float n, float net[], float threshold[]){
    int i = 0;
    float weight;
    while(i<n){
        weight *= (net[i]*threshold[i]);
        i++;
    }
    return weight;
}

//Maximum
float maximum(float net, float threshold){
    return fmaxf(net,threshold);
}

//Minimum
float minimum(float net, float threshold){
    return fminf(net,threshold);
}

//Sum
float sum(float n, float net[], float threshold[]){
    int i = 0;
    float weight;
    while(i<n){
        weight += (net[i]*threshold[i]);
        i++;
    }
    return weight;
}

//Cumulative Distribution
float cumulative(float n, float net[], float threshold[]){
    float weight = 0;
    int i;
    while(i<n){
        weight += weight*(net[i]*threshold[i]);
        i++;
    }
    return weight;
}


//Activation Functions

//Sigmoid
float sigmoid(float x){
    return 1/(1+pow(M_E,-x));
}

//Linear
float linear(float net){
    return net;
}

//ReLU
float relu(float net){
    if(net > 1)
        return 1;
    else if((net > -1) || (net < 1))
        return net;
    else
        return -1;
}

//Step
float step(float net, float threshold){
    if(net > threshold)
        return 1;
    else if(net <= threshold)
        return 0;
    else
        return -1;
}

//Sinusoid
float sinusoid(float net){
    return sin(net);
}

//Hyperbolic Tangent
float htan(float net){
    return tanh(net);
}

//Hyperbolic Tangent - second version
float htan2(float net){
    return (pow(M_E,net)+pow(M_E,-net))/(pow(M_E,net)-pow(M_E,-net));
}