#include <vector>
#include <stdio.h>
#include "neuralnet.h"
#include "neuronlayer.h"

NeuralNet::NeuralNet(std::vector<int> layers){
	network.push_back(NeuronLayer(layers.at(0), 0));
	for(int i=1; i<layers.size(); i++){
		network.push_back( NeuronLayer(layers.at(i), network.at(network.size()-1).getNeurons().size() ) );
	}
}
std::vector<NeuronLayer> NeuralNet::getNetwork(){
	return network;
}
void print(){
	maxHeight = 0;
	for(int i=-1; i<network.size(); i++){
		if(network.at(i).getNeurons().size()*network.at(i-1).getNeurons().size() > maxHeight ){
			maxHeight = network.at(i).getNeurons().size()*network.at(i-1).getNeurons().size();
		}
	}
}
