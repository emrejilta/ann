//
//  ann.h
//  ann
//
//  Created by Emre Jılta

#ifndef ann_h
#define ann_h

#include <stdio.h>


//Distribution Functions
//Net : weighted means

//Multiplication
float multiplication(float n, float net[], float threshold[]);

//Maximum
float maximum(float net, float threshold);

//Minimum
float minimum(float net, float threshold);

//Sum
float sum(float n, float net[], float threshold[]);

//Cumulative Distribution
float cumulative(float n, float net[], float threshold[]);


//Activation Functions

//Sigmoid
float sigmoid(float x);

//Linear
float linear(float net);

//ReLU
float relu(float net);

//Step
float step(float net, float threshold);

//Sinusoid
float sinusoid(float net);

//Hyperbolic Tangent
float htan(float net);

//Hyperbolic Tangent - second version
float htan2(float net);

#endif /* ann_h */
