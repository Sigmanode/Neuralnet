#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <time.h>
#include <string>
#include "neuronlayer.h"
#include "neuron.h"
#include "neuralnet.h"

int main(int argc, char *argv[]){
	srand(time(NULL));
	//NeuronLayer nl1(4, 3);
	std::vector<int> netsize;
	netsize.push_back(2);
	netsize.push_back(3);
	netsize.push_back(4);
	netsize.push_back(2);
	NeuralNet net(netsize);
	
	for(int i=1; i<net.getNetwork().size(); i++){
		for(int j=0; j<net.getNetwork().at(i).getNeurons().size(); j++){
			net.getNetwork().at(i).getNeurons().at(j).print();
			if(j != net.getNetwork().at(i).getNeurons().size()-1){
				printf("-----------\n");
			}
		}
		if(i != net.getNetwork().size()-1){
			printf("===========\n");
		}
	}
	return 0;
}
