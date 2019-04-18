/*
  ==============================================================================

    WallComponent.cpp
    Created: 18 Apr 2019 6:48:36pm
    Author:  Luciano Schillagi

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "WallComponent.h"

//==============================================================================
WallComponent::WallComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

WallComponent::~WallComponent()
{

}

void WallComponent::paint (Graphics& g)
{
	// Crea un rectángulo con relleno mosaico
	Rectangle <float> wall(200, 200, 200, 120);
	g.fillCheckerBoard(wall, 20, 10, Colours::sandybrown, Colours::saddlebrown);
	g.drawRect(wall);
	
	
}

void WallComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
