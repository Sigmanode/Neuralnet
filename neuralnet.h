#ifndef NEURALNET_H
#define NEURALNET_H
#include <vector>
#include "neuronlayer.h"

class NeuralNet{
	std::vector<NeuronLayer> network;
	public:
		NeuralNet(std::vector<int>);
		std::vector<NeuronLayer> getNetwork();
};

#endif /* NEURALNET_H */
