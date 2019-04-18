/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
	setSize (600, 400);
	// Hace visible el componente hijo ('wall')
	addAndMakeVisible(wall);
	// Hace visible el componente hijo ('grass')
	addAndMakeVisible(grass);
	// Hace visible el componente hijo ('roof')
	addAndMakeVisible(roof);
	// Hace visible el componente hijo ('sun')
	addAndMakeVisible(sun);
	// Hace visible el componente hijo ('text')
	addAndMakeVisible(text);
	
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
	g.fillAll(Colours::skyblue);
}

void MainComponent::resized()
{
	
	// las ubicaciones de los componentes con respecto al componente principal
	wall.setBounds(getLocalBounds());
	grass.setBounds(getLocalBounds());
	roof.setBounds(getLocalBounds());
	sun.setBounds(getLocalBounds());
	text.setBounds(getLocalBounds());
}
