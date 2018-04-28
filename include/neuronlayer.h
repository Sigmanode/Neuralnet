#ifndef NEURONLAYER_H
#define NEURONLAYER_H

#include <vector>
#include "neuron.h"

class NeuronLayer{
	std::vector<Neuron> neurons;
	public:
		NeuronLayer(int, int);
		std::vector<Neuron> getNeurons();
		void setNeurons(std::vector<Neuron>);
};

#endif /* NEURONLAYER_H */
