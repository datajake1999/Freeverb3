// Freeverb3 initialisation implementation
// Based on Steinberg VST Development Kit Examples
//
// Written by Jezar at Dreampoint, June 2000
// http://www.dreampoint.co.uk
// This code is public domain

#include "Freeverb.hpp"

AudioEffect* createEffectInstance (audioMasterCallback audioMaster)
{
	return new Freeverb (audioMaster);
}

//ends
