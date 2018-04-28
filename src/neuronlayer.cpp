#include <vector>
#include "neuronlayer.h"
#include "neuron.h"

NeuronLayer::NeuronLayer(int numOfNeurons, int prevNumOfNeurons){
	for(int i=0; i<numOfNeurons; i++){
		neurons.push_back(Neuron(prevNumOfNeurons));
	}
}
std::vector<Neuron> NeuronLayer::getNeurons(){
	return neurons;
}
void NeuronLayer::setNeurons(std::vector<Neuron> newNeurons){
	neurons = newNeurons;
}
