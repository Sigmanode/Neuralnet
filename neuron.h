#ifndef NEURON_H
#define NEURON_H

#include <vector>

class Neuron{
	std::vector<float> weights;
	float value;
	public:
		Neuron(int);
		std::vector<float> getWeights();
		void setWeights(std::vector<float> newWeights);
		void setValue(float);
		float getValue();
		void print();
		const char * colorTest(float);
};

#endif /* NEURON_H */
