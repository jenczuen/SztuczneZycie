/*
 * BrainManyPerceptrons.h
 *
 *  Created on: 14 maj 2014
 *      Author: jedrek
 */

#ifndef BRAINMANYPERCEPTRONS_H_
#define BRAINMANYPERCEPTRONS_H_

#include <stdlib.h>
#include <time.h>
#include "BaseBrain.h"
#include "../neuralNetwork/Perceptron.h"

class BrainManyPerceptrons : public BaseBrain {
public:
	BrainManyPerceptrons();
	virtual ~BrainManyPerceptrons();
	int ** stimulate(int b1, int b2, int a1, int a2, int a3);

private:
	int perceptronsCount;
	Perceptron** perceptrons;

	void initPerceptrons();
	int * stimulateSinglePerceptron(int, int, int, int);
};

#endif /* BRAINMANYPERCEPTRONS_H_ */
