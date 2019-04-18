/*
  ==============================================================================

    SunComponent.cpp
    Created: 18 Apr 2019 7:40:34pm
    Author:  Luciano Schillagi

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "SunComponent.h"

//==============================================================================
SunComponent::SunComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

SunComponent::~SunComponent()
{
}

void SunComponent::paint (Graphics& g)
{
	g.setColour(Colours::yellow);
	g.drawEllipse(400, 50, 50, 50, 10.0f);
	
}

void SunComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
