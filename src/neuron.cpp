#include <stdio.h>
#include <vector>
#include <stdlib.h>
#include "neuron.h"

Neuron::Neuron(int numOfWeights){
	for(int i=0; i<numOfWeights; i++){
		weights.push_back(((float)rand()*2/(float)RAND_MAX)-1.0);
	}
}
std::vector<float> Neuron::getWeights(){
	return weights;
}
void Neuron::setWeights(std::vector<float> newWeights){
	weights = newWeights;
}
void Neuron::setValue(float newValue){
	value = newValue;
}
float Neuron::getValue(){
	return value;
}

void Neuron::print(){
	for(int i=0; i<weights.size(); i++){
		if(weights.at(i) < 0.0){
			printf("\e[48;5;255m");
		}
		else{
			printf(" ");
		}
		printf(colorTest(weights.at(i)));
		printf("%.8f", weights.at(i));
		printf("\e[0m\n");
	}
}

const char * Neuron::colorTest(float weight){ 
        if(weight > 0.9 && weight <= 1.0){ 
                return "\e[38;5;256m"; 
        } 
 
        else if(weight > 0.8 && weight <= 0.9){ 
                return "\e[38;5;255m"; 
        } 
 
        else if(weight > 0.7 && weight <= 0.8){ 
                return "\e[38;5;254m"; 
        } 
 
        else if(weight > 0.6 && weight <= 0.7){ 
                return "\e[38;5;253m"; 
        } 
 
        else if(weight > 0.5 && weight <= 0.6){ 
                return "\e[38;5;252m"; 
        } 
 
        else if(weight > 0.4 && weight <= 0.5){ 
                return "\e[38;5;251m"; 
        } 
 
        else if(weight > 0.3 && weight <= 0.4){ 
                return "\e[38;5;250m"; 
        } 
 
        else if(weight > 0.2 && weight <= 0.3){ 
                return "\e[38;5;249m"; 
        } 
 
        else if(weight > 0.1 && weight <= 0.2){ 
                return "\e[38;5;248m"; 
        } 
 
        else if(weight >= 0.0 && weight <= 0.1){ 
                return "\e[38;5;247m"; 
        } 
 
        else if(weight > -0.1 && weight <= 0.0){ 
                return "\e[38;5;241m"; 
        } 
 
        else if(weight > -0.2 && weight <= -0.1){ 
                return "\e[38;5;240m"; 
        } 
 
        else if(weight > -0.3 && weight <= -0.2){ 
                return "\e[38;5;239m"; 
        } 
 
        else if(weight > -0.4 && weight <= -0.3){ 
                return "\e[38;5;238m"; 
        } 
 
        else if(weight > -0.5 && weight <= -0.4){ 
                return "\e[38;5;237m"; 
        } 
 
        else if(weight > -0.6 && weight <= -0.5){ 
                return "\e[38;5;236m"; 
        }

        else if(weight > 0.2 && weight <= 0.3){
                return "\e[38;5;249m";
        }

        else if(weight > 0.1 && weight <= 0.2){
                return "\e[38;5;248m";
        }

        else if(weight >= 0.0 && weight <= 0.1){
                return "\e[38;5;247m";
        }

        else if(weight > -0.1 && weight <= 0.0){
                return "\e[38;5;241m";
        }

        else if(weight > -0.2 && weight <= -0.1){
                return "\e[38;5;240m";
        }

        else if(weight > -0.3 && weight <= -0.2){
                return "\e[38;5;239m";
        }

        else if(weight > -0.4 && weight <= -0.3){
                return "\e[38;5;238m";
        }

        else if(weight > -0.5 && weight <= -0.4){
                return "\e[38;5;237m";
        }

        else if(weight > -0.6 && weight <= -0.5){
                return "\e[38;5;236m";
        }

        else if(weight > -0.6 && weight <= -0.5){
                return "\e[38;5;236m";
        }

        else if(weight > -0.7 && weight <= -0.6){
                return "\e[38;5;235m";
        }

        else if(weight > -0.8 && weight <= -0.7){
                return "\e[38;5;234m";
        }

        else if(weight > -0.9 && weight <= -0.8){
                return "\e[38;5;233m";
        }

        else if(weight >= -1.0 && weight <= -0.9){
                return "\e[38;5;232m";
        }
}
		
